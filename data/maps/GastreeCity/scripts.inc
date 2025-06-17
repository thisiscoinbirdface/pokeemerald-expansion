# 1 "data//maps/GastreeCity/scripts.pory"

# 2 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_KOHLA, 7
# 3 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTYOG, 12
# 4 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY1, 16
# 5 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY2, 17
# 6 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY3, 18
# 7 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_BERG, 10
# 8 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_TRAINER, 5
# 9 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_OLD_WOMAN, 21
# 10 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SHRINE, 20

GastreeCity_MapScripts::
# 14 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GastreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GastreeCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GastreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_VISITED_GASTREE_CITY
	return

GastreeCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data//maps/GastreeCity/scripts.pory"
	map_script_2 VAR_GASTREE_SKITTY_QUEST, 0, GastreeCity_EventScript_SkittyQuestStart
	.2byte 0


GastreeCity_OnTransition::
	return


GastreeCity_EventScript_KohlaBattle_Trigger::
# 30 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger_2
# 33 "data//maps/GastreeCity/scripts.pory"
	lockall
# 34 "data//maps/GastreeCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 35 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 39 "data//maps/GastreeCity/scripts.pory"
	opendoor 23, 26
# 40 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 43 "data//maps/GastreeCity/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 23, 26
# 44 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_KOHLA
# 45 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 47 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0
# 48 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 49 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 50 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 52 "data//maps/GastreeCity/scripts.pory"
	closedoor 23, 26
# 53 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 55 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 58 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 59 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 60 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 61 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 64 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Text_1
# 65 "data//maps/GastreeCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 68 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 69 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 70 "data//maps/GastreeCity/scripts.pory"
	release
# 72 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2
# 73 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 76 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 77 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 79 "data//maps/GastreeCity/scripts.pory"
	fadedefaultbgm
# 80 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger_2:
	end


GastreeCity_NPC1::
# 97 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC3::
# 102 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC4::
# 107 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC5::
# 113 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0, MSGBOX_NPC
	end


GastreeCity_Mankey::
# 118 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_NORMAL
# 119 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Mankey_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC6::
# 125 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC7::
# 131 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0, MSGBOX_NPC
	end


GastreeCity_Shard_NPC::
# 138 "data//maps/GastreeCity/scripts.pory"
	lockall
# 139 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 141 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_NPC_2
# 188 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_10, MSGBOX_NPC
GastreeCity_Shard_NPC_1:
	end

GastreeCity_Shard_NPC_2:
# 142 "data//maps/GastreeCity/scripts.pory"
	compare VAR_STATUE_COUNT, 11
	goto_if_eq GastreeCity_Shard_NPC_6
# 148 "data//maps/GastreeCity/scripts.pory"
	compare VAR_STATUE_COUNT, 10
	goto_if_eq GastreeCity_Shard_NPC_8
# 185 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_9, MSGBOX_NPC
	goto GastreeCity_Shard_NPC_1

GastreeCity_Shard_NPC_6:
# 143 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_0
# 144 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_Shard_NPC_8:
# 149 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_1
# 150 "data//maps/GastreeCity/scripts.pory"
	release
# 152 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_2
# 154 "data//maps/GastreeCity/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 155 "data//maps/GastreeCity/scripts.pory"
	additem ITEM_HISTORIAN_MEDAL
# 156 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_3
# 157 "data//maps/GastreeCity/scripts.pory"
	waitfanfare
# 158 "data//maps/GastreeCity/scripts.pory"
	release
# 161 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_4
# 162 "data//maps/GastreeCity/scripts.pory"
	release
# 163 "data//maps/GastreeCity/scripts.pory"
	removeitem ITEM_ARCHAEOLENS
# 164 "data//maps/GastreeCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 165 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_5
# 166 "data//maps/GastreeCity/scripts.pory"
	release
# 167 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 168 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_6
# 169 "data//maps/GastreeCity/scripts.pory"
	release
# 170 "data//maps/GastreeCity/scripts.pory"
	playse SE_SWITCH
# 171 "data//maps/GastreeCity/scripts.pory"
	waitse
# 173 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_7
# 174 "data//maps/GastreeCity/scripts.pory"
	release
# 175 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_ARCHAEOLENS_2
# 177 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_8
# 179 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_ANCIENT_STATUES
# 181 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_STATUE_COUNT, 11
	goto GastreeCity_Shard_NPC_1


GastreeCity_Shard_Trigger::
# 194 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_Trigger_2
# 196 "data//maps/GastreeCity/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 197 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeCity_Shard_Trigger_5
# 199 "data//maps/GastreeCity/scripts.pory"
	lockall
# 200 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_0
# 201 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 202 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_1
# 203 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 204 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 205 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_0
# 206 "data//maps/GastreeCity/scripts.pory"
	release
# 207 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_0
# 208 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 209 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 210 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_1
# 211 "data//maps/GastreeCity/scripts.pory"
	release
# 212 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 213 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_2
# 214 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_3
# 215 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 216 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 218 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 219 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_4
# 220 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 221 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 223 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 225 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_5
# 226 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 227 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 228 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_2
# 229 "data//maps/GastreeCity/scripts.pory"
	release
# 230 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 231 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_6
# 232 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 233 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 234 "data//maps/GastreeCity/scripts.pory"
	playse SE_M_ROCK_THROW
# 235 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_3
# 236 "data//maps/GastreeCity/scripts.pory"
	release
# 237 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 239 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8004, 2
# 240 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8005, 2
# 241 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8006, 20
# 242 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8007, 5
# 243 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SHRINE
# 244 "data//maps/GastreeCity/scripts.pory"
	special ShakeCamera
# 245 "data//maps/GastreeCity/scripts.pory"
	waitstate
# 246 "data//maps/GastreeCity/scripts.pory"
	release
# 248 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 249 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_7
# 250 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_8
# 251 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_8
# 252 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 253 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 254 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_4
# 255 "data//maps/GastreeCity/scripts.pory"
	release
# 256 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 258 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_5
# 259 "data//maps/GastreeCity/scripts.pory"
	release
# 260 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 261 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_9
# 262 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 263 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 264 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_6
# 265 "data//maps/GastreeCity/scripts.pory"
	release
# 266 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 268 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_10
# 269 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 270 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 271 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 272 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_7
# 273 "data//maps/GastreeCity/scripts.pory"
	release
# 274 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 276 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_11
# 277 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 278 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_8
# 279 "data//maps/GastreeCity/scripts.pory"
	release
# 280 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 282 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_12
# 283 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 284 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 285 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_9
# 286 "data//maps/GastreeCity/scripts.pory"
	release
# 287 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_13
# 288 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_13
# 289 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 290 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_TRAINER
# 291 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_BERG
# 293 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 294 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_14
# 295 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 296 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 298 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_2
# 299 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 300 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 301 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_10
# 302 "data//maps/GastreeCity/scripts.pory"
	release
# 303 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 304 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_9
# 305 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_15
# 306 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 307 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 308 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_11
# 309 "data//maps/GastreeCity/scripts.pory"
	release
# 311 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_16
# 312 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 313 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 314 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_ARCHAEOLENS
# 316 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_12
# 317 "data//maps/GastreeCity/scripts.pory"
	release
# 319 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_SHRINE_QUEST
# 320 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_ANCIENT_STATUES
# 322 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_Shard_Trigger_2:
	end

GastreeCity_Shard_Trigger_5:
	end


GastreeCity_Shard_CantLeave_Trigger::
# 327 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_CantLeave_Trigger_2
# 328 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeCity_Shard_CantLeave_Trigger_4
	return

GastreeCity_Shard_CantLeave_Trigger_2:
	end

GastreeCity_Shard_CantLeave_Trigger_4:
# 329 "data//maps/GastreeCity/scripts.pory"
	lockall
# 330 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_CantLeave_Trigger_Text_0
# 331 "data//maps/GastreeCity/scripts.pory"
	release
# 332 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 333 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 334 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC8::
# 345 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0, MSGBOX_NPC
# 346 "data//maps/GastreeCity/scripts.pory"
	applymovement 10, GastreeCity_NPC8_Movement_0
# 347 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 348 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 349 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 350 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1, MSGBOX_NPC
# 351 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_1
# 352 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 353 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Keckleon::
# 358 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 359 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC9::
# 364 "data//maps/GastreeCity/scripts.pory"
	lockall
# 365 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 366 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 367 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 368 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 369 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 386 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 387 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 388 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 390 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 391 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 392 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 395 "data//maps/GastreeCity/scripts.pory"
	lockall
# 396 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 397 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 398 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 399 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 400 "data//maps/GastreeCity/scripts.pory"
	release
# 401 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 402 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 403 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 404 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_15
# 405 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 406 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 407 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_6
# 408 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 409 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 410 "data//maps/GastreeCity/scripts.pory"
	release
# 411 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_2
# 412 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 413 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 414 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_8
# 415 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 416 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 417 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 418 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 419 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 420 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 421 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 422 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 423 "data//maps/GastreeCity/scripts.pory"
	release
# 424 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 425 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 426 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 427 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 432 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 433 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 436 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 437 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 440 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 441 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 447 "data//maps/GastreeCity/scripts.pory"
	lockall
# 448 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 450 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 453 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 468 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 471 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 451 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0, MSGBOX_NPC
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 454 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 455 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 456 "data//maps/GastreeCity/scripts.pory"
	release
# 457 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 458 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 459 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 460 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_SPLASH
# 461 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 462 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_9
# 463 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 464 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 465 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
# 466 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 476 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 477 "data//maps/GastreeCity/scripts.pory"
	release
# 478 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 479 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 480 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 481 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 482 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 483 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 487 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 488 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 491 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 492 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 495 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 496 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 501 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 502 "data//maps/GastreeCity/scripts.pory"
	release
# 503 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 504 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 505 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 506 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 507 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 508 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 511 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 512 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 515 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 516 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 519 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 520 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 526 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 527 "data//maps/GastreeCity/scripts.pory"
	release
# 528 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 529 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 530 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 531 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 532 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 533 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 536 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 537 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 540 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 541 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 544 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 547 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 549 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 554 "data//maps/GastreeCity/scripts.pory"
	lockall
# 555 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 556 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 557 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 558 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 564 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 565 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0, MSGBOX_NPC
	end


# 47 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0:
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 47 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 49 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1:
# 49 "data//maps/GastreeCity/scripts.pory"
	walk_down
	step_end

# 72 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2:
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 200 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_0:
# 200 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 202 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_1:
# 202 "data//maps/GastreeCity/scripts.pory"
	face_down
# 202 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 213 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_2:
# 213 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 214 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_3:
# 214 "data//maps/GastreeCity/scripts.pory"
	face_left
# 214 "data//maps/GastreeCity/scripts.pory"
	emote_question_mark
	step_end

# 219 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_4:
# 219 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 219 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 225 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_5:
# 225 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 231 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_6:
# 231 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 231 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 231 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 249 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_7:
# 249 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 249 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 250 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_8:
# 250 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 261 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_9:
# 261 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 268 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_10:
# 268 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_right
	step_end

# 276 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_11:
# 276 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 276 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
	step_end

# 282 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_12:
# 282 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_up
	step_end

# 287 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_13:
# 287 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 287 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 287 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 287 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 287 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 287 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 287 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 294 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_14:
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_right
	step_end

# 305 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_15:
# 305 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 311 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_16:
# 311 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 311 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 311 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 346 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 346 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 346 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 351 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_1:
# 351 "data//maps/GastreeCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 402 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 402 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 402 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 402 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 402 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 402 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 402 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 402 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 420 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 420 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 420 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 420 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 426 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 426 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 426 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 426 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 480 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 480 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 480 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 505 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 505 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 505 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 530 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 530 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 530 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 58 "data//maps/GastreeCity/scripts.pory"
	.string "Kohla$"

GastreeCity_EventScript_KohlaBattle_Trigger_Text_1:
# 64 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 97 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from Carabrue\n"
	.string "Town? Woah! Then I bet you don't know -\l"
	.string "you have to be careful on Route 4!\l"
	.string "There's a dangerous Dewpider that\l"
	.string "attacks people.$"

GastreeCity_NPC3_Text_0:
# 102 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 107 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 113 "data//maps/GastreeCity/scripts.pory"
	.string "Inger, the Gym Leader, uses ROCK types.\n"
	.string "I should have an advantage with\l"
	.string "my FIGHTING-type Pokémon right?\p"
	.string "So then why am I getting cold feet?$"

GastreeCity_Mankey_Text_0:
# 119 "data//maps/GastreeCity/scripts.pory"
	.string "Mankey is getting angry at its\n"
	.string "trainer's cold feet!$"

GastreeCity_NPC6_Text_0:
# 125 "data//maps/GastreeCity/scripts.pory"
	.string "Before you head to the Ceram Base Camp,\n"
	.string "check out the Gastree Teahouse!\l"
	.string "You just haven't visited Gastree City\l"
	.string "without going there once.$"

GastreeCity_NPC7_Text_0:
# 131 "data//maps/GastreeCity/scripts.pory"
	.string "When I get my first Pokémon, I want it\n"
	.string "to be Poltchageist!$"

GastreeCity_Shard_NPC_Text_0:
# 143 "data//maps/GastreeCity/scripts.pory"
	.string "To be honest, I still haven't processed\n"
	.string "the loss of this statue...$"

GastreeCity_Shard_NPC_Text_1:
# 149 "data//maps/GastreeCity/scripts.pory"
	.string "Have you scanned all the statues?\p"
	.string "Yes?$"

GastreeCity_Shard_NPC_Text_2:
# 152 "data//maps/GastreeCity/scripts.pory"
	.string "Let me see your Archaeolens...\p"
	.string "Oh my! That's all ten statues!\n"
	.string "I can't believe I'm seeing all of them\l"
	.string "like this...how I wish I could see them\n"
	.string "in real life!\p"
	.string "Thank you {PLAYER}. You've done both\n"
	.string "me and the historical community a\l"
	.string "wonderful service.\p"
	.string "Please accept this as a token of my\n"
	.string "appreciation.$"

GastreeCity_Shard_NPC_Text_3:
# 156 "data//maps/GastreeCity/scripts.pory"
	.string "{PLAYER} received the Historian\n"
	.string "Medal!$"

GastreeCity_Shard_NPC_Text_4:
# 161 "data//maps/GastreeCity/scripts.pory"
	.string "The Cormoria Historical Society awards\n"
	.string "these to people who have made special\l"
	.string "contributions to the field!\p"
	.string "It's a great honour, {PLAYER}.\n"
	.string "You should be proud!\p"
	.string "I can also do another thing for you -\n"
	.string "hand me your Archaeolens.$"

GastreeCity_Shard_NPC_Text_5:
# 165 "data//maps/GastreeCity/scripts.pory"
	.string "{PLAYER} handed over the\n"
	.string "Archaeolens.$"

GastreeCity_Shard_NPC_Text_6:
# 168 "data//maps/GastreeCity/scripts.pory"
	.string "With a little bit of tooling...\p"
	.string "...and fiddling...\p"
	.string "...give it a shake...$"

GastreeCity_Shard_NPC_Text_7:
# 173 "data//maps/GastreeCity/scripts.pory"
	.string "There we go! The Archaeolens 2.0!$"

GastreeCity_Shard_NPC_Text_8:
# 177 "data//maps/GastreeCity/scripts.pory"
	.string "This upgraded Archaeolens can scan and\n"
	.string "decipher the text of ancient carvings.\p"
	.string "You work with Professor Tenebris,\n"
	.string "correct? So you would be interested\l"
	.string "in Pokemon psychology, I suppose.\l"
	.string "Whether you proceed down the path of\l"
	.string "history is up to you, but if you do...\l"
	.string "I hope this serves you well!$"

GastreeCity_Shard_NPC_Text_9:
# 185 "data//maps/GastreeCity/scripts.pory"
	.string "Take your time child. I'll be waiting.$"

GastreeCity_Shard_NPC_Text_10:
# 188 "data//maps/GastreeCity/scripts.pory"
	.string "Come to admire this statue, have you?\p"
	.string "I'm researching the origins of these\n"
	.string "ancient statues. They're a vital legacy\l"
	.string "of Cormoria's past.$"

GastreeCity_Shard_Trigger_Text_0:
# 205 "data//maps/GastreeCity/scripts.pory"
	.string "Child! Is that a Rare Shard you have?\p"
	.string "My my...come here, quickly!$"

GastreeCity_Shard_Trigger_Text_1:
# 210 "data//maps/GastreeCity/scripts.pory"
	.string "I'm an archaeologist researching\n"
	.string "these ancient statues.\p"
	.string "Did you know that all Pokémon have\n"
	.string "innate Individual Values for each of\l"
	.string "their stats? Pokémon Professors will\l"
	.string "grade them from E- to S.\p"
	.string "Normally, there's no way to change them.\p"
	.string "But a Rare Shard when held in the\n"
	.string "prescence of an ancient statue like\l"
	.string "this one can maximise one of your\l"
	.string "Pokémon's Individual Values!\p"
	.string "A fascinating phenomenon!\n"
	.string "Why don't you try it now?$"

GastreeCity_Shard_Trigger_Text_2:
# 228 "data//maps/GastreeCity/scripts.pory"
	.string "C'mon Bergmite! Use Rock Slide!$"

GastreeCity_Shard_Trigger_Text_3:
# 235 "data//maps/GastreeCity/scripts.pory"
	.string "keee!!!$"

GastreeCity_Shard_Trigger_Text_4:
# 254 "data//maps/GastreeCity/scripts.pory"
	.string "Argh, you idiot boy!\n"
	.string "What have you done?\p"
	.string "You and your Bergmite have destroyed\n"
	.string "the ancient statue!$"

GastreeCity_Shard_Trigger_Text_5:
# 258 "data//maps/GastreeCity/scripts.pory"
	.string "Oh no! I'm so sorry!\n"
	.string "I really didn't mean to - I promise!$"

GastreeCity_Shard_Trigger_Text_6:
# 264 "data//maps/GastreeCity/scripts.pory"
	.string "Bergmite! We gotta say sorry!$"

GastreeCity_Shard_Trigger_Text_7:
# 272 "data//maps/GastreeCity/scripts.pory"
	.string "keee...$"

GastreeCity_Shard_Trigger_Text_8:
# 278 "data//maps/GastreeCity/scripts.pory"
	.string "You think a sorry will suffice!\n"
	.string "You blithering idiot!$"

GastreeCity_Shard_Trigger_Text_9:
# 285 "data//maps/GastreeCity/scripts.pory"
	.string "Yikes, she's getting too worked up.\n"
	.string "Bergmite - let's go!$"

GastreeCity_Shard_Trigger_Text_10:
# 301 "data//maps/GastreeCity/scripts.pory"
	.string "Such a loss to culture and history...$"

GastreeCity_Shard_Trigger_Text_11:
# 308 "data//maps/GastreeCity/scripts.pory"
	.string "I can't let this happen any more.\n"
	.string "We must preserve these statues.\p"
	.string "I'm now too old to go around Cormoria,\n"
	.string "but you, my dear, are young and able!\l"
	.string "You must help me preserve the statues!\p"
	.string "Take this.$"

GastreeCity_Shard_Trigger_Text_12:
# 316 "data//maps/GastreeCity/scripts.pory"
	.string "This is an Archaeolens. It scans and\n"
	.string "records ancient historical artifacts.\p"
	.string "Now that this statue is destroyed,\n"
	.string "there are ten statues left.\p"
	.string "Scan all the statues around Cormoria\n"
	.string "and come back to me.\p"
	.string "A task of vital importance!\n"
	.string "I won't take no for an answer!$"

GastreeCity_Shard_CantLeave_Trigger_Text_0:
# 330 "data//maps/GastreeCity/scripts.pory"
	.string "I should use the Rare Shard Leader\n"
	.string "Inger gave me!$"

GastreeCity_NPC8_Text_0:
# 345 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my Bergmite some\n"
	.string "new moves so that we can go and\l"
	.string "explore Route 4 together!\p"
	.string "C'mon Bergmite! C'mon!!$"

GastreeCity_NPC8_Text_1:
# 350 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!!\p"
	.string "Bergmite is fired up too!$"

GastreeCity_NPC_Keckleon_Text_0:
# 359 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!\p"
	.string "Bergmite is trying hard to match its\n"
	.string "trainers energy. Go Bergmite!$"

GastreeCity_NPC9_Text_0:
# 366 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a Pokémon can learn?$"

GastreeCity_NPC9_Text_1:
# 367 "data//maps/GastreeCity/scripts.pory"
	.string "Eruption$"

GastreeCity_NPC9_Text_2:
# 367 "data//maps/GastreeCity/scripts.pory"
	.string "Quiver Dance$"

GastreeCity_NPC9_Text_3:
# 367 "data//maps/GastreeCity/scripts.pory"
	.string "Expanding Force$"

GastreeCity_NPC9_Text_4:
# 367 "data//maps/GastreeCity/scripts.pory"
	.string "Geomancy$"

GastreeCity_NPC9_Text_5:
# 368 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's Splash!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM Splash, your\l"
	.string "Pokémon can hop onto rocks in the\l"
	.string "water like the one here. But you need\l"
	.string "at least one Gym Badge to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 399 "data//maps/GastreeCity/scripts.pory"
	.string "No! Skitty!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 409 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 422 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my Skitty back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her and bring her back!$"

GastreeCity_NPC2_Text_0:
# 451 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a\l"
	.string "Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 455 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 458 "data//maps/GastreeCity/scripts.pory"
	.string "Skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 459 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 461 "data//maps/GastreeCity/scripts.pory"
	.string "I'm not a trainer so I don't need it.\n"
	.string "All I need is my Skitty!\p"
	.string "You don't need to teach it to any of\n"
	.string "your Pokémon, but you need at least\l"
	.string "one Gym Badge to use it.\p"
	.string "Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 468 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my Skitty yet? She\n"
	.string "might be stuck in a tree - please look\l"
	.string "for her pink tail!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 476 "data//maps/GastreeCity/scripts.pory"
	.string "There's something in the tree...\p"
	.string "It's Skitty!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 483 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 508 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away again.\n"
	.string "It's too slippery!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 526 "data//maps/GastreeCity/scripts.pory"
	.string "It's Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 533 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. Looks like Skitty ran\n"
	.string "back to its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 557 "data//maps/GastreeCity/scripts.pory"
	.string "Skee!!$"

GastreeCity_Poltchageist_Text_0:
# 565 "data//maps/GastreeCity/scripts.pory"
	.string "Poltchageist is picking Revival Herbs\n"
	.string "for the teahouse!$"

GastreeCity_KohlaIntro1::
# 83 "data//maps/GastreeCity/scripts.pory"
	.string "Well well, look who thought it was\n"
	.string "fashionable to be late! I'm way ahead\l"
	.string "of you, chum! I've already beaten\l"
	.string "Inger and got the King Badge. And I\l"
	.string "don't mind dishing out a second serving!$"

GastreeCity_KohlaIntro2::
# 86 "data//maps/GastreeCity/scripts.pory"
	.string "This is payback for one-upping me in\n"
	.string "front of the detectives!$"

GastreeCity_KohlaPostBattle::
# 89 "data//maps/GastreeCity/scripts.pory"
	.string "You may have won, but I'll get the\n"
	.string "dreamstone first! I heard that some\l"
	.string "group called Team Somber is also after\l"
	.string "the dreamstone. I'm going to head north\l"
	.string "towards the Ceram Base Camp. Don't come\l"
	.string "after me - I don't need your help.\p"
	.string "Over and out, chum!$"
