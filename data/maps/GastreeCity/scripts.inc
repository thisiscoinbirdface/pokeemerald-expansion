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
# 195 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_7, MSGBOX_NPC
GastreeCity_Shard_NPC_1:
	end

GastreeCity_Shard_NPC_2:
# 142 "data//maps/GastreeCity/scripts.pory"
	compare VAR_STATUE_COUNT, 11
	goto_if_eq GastreeCity_Shard_NPC_6
# 148 "data//maps/GastreeCity/scripts.pory"
	compare VAR_STATUE_COUNT, 10
	goto_if_eq GastreeCity_Shard_NPC_8
# 192 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_6, MSGBOX_NPC
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
	delay 16
# 184 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_5
# 186 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_ANCIENT_STATUES
# 188 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_STATUE_COUNT, 11
	goto GastreeCity_Shard_NPC_1


GastreeCity_Shard_Trigger::
# 201 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_Trigger_2
# 203 "data//maps/GastreeCity/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 204 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeCity_Shard_Trigger_5
# 206 "data//maps/GastreeCity/scripts.pory"
	lockall
# 207 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_0
# 208 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 209 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_1
# 210 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 211 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 212 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_0
# 213 "data//maps/GastreeCity/scripts.pory"
	release
# 214 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_0
# 215 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 216 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 217 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_1
# 218 "data//maps/GastreeCity/scripts.pory"
	release
# 219 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 220 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_2
# 221 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_3
# 222 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 223 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 225 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 226 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_4
# 227 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 228 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 230 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 232 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_5
# 233 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 234 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 235 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_2
# 236 "data//maps/GastreeCity/scripts.pory"
	release
# 237 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 238 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_6
# 239 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 240 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 241 "data//maps/GastreeCity/scripts.pory"
	playse SE_M_ROCK_THROW
# 242 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_3
# 243 "data//maps/GastreeCity/scripts.pory"
	release
# 244 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 246 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8004, 2
# 247 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8005, 2
# 248 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8006, 20
# 249 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8007, 5
# 250 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SHRINE
# 251 "data//maps/GastreeCity/scripts.pory"
	special ShakeCamera
# 252 "data//maps/GastreeCity/scripts.pory"
	waitstate
# 253 "data//maps/GastreeCity/scripts.pory"
	release
# 255 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 256 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_7
# 257 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_8
# 258 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_8
# 259 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 260 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 261 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_4
# 262 "data//maps/GastreeCity/scripts.pory"
	release
# 263 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 265 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_5
# 266 "data//maps/GastreeCity/scripts.pory"
	release
# 267 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 268 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_9
# 269 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 270 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 271 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_6
# 272 "data//maps/GastreeCity/scripts.pory"
	release
# 273 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 275 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_10
# 276 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 277 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 278 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 279 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_7
# 280 "data//maps/GastreeCity/scripts.pory"
	release
# 281 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 283 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_11
# 284 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 285 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_8
# 286 "data//maps/GastreeCity/scripts.pory"
	release
# 287 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 289 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_12
# 290 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 291 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 292 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_9
# 293 "data//maps/GastreeCity/scripts.pory"
	release
# 294 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_13
# 295 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_13
# 296 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 297 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_TRAINER
# 298 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_BERG
# 300 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 301 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_14
# 302 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 303 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 305 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_2
# 306 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 307 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 308 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_10
# 309 "data//maps/GastreeCity/scripts.pory"
	release
# 310 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 311 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_9
# 312 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_15
# 313 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 314 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 315 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_11
# 316 "data//maps/GastreeCity/scripts.pory"
	release
# 318 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_16
# 319 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 320 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 321 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_ARCHAEOLENS
# 323 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_12
# 324 "data//maps/GastreeCity/scripts.pory"
	release
# 326 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_SHRINE_QUEST
# 327 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_ANCIENT_STATUES
# 329 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_Shard_Trigger_2:
	end

GastreeCity_Shard_Trigger_5:
	end


GastreeCity_Shard_CantLeave_Trigger::
# 334 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_CantLeave_Trigger_2
# 335 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeCity_Shard_CantLeave_Trigger_4
	return

GastreeCity_Shard_CantLeave_Trigger_2:
	end

GastreeCity_Shard_CantLeave_Trigger_4:
# 336 "data//maps/GastreeCity/scripts.pory"
	lockall
# 337 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_CantLeave_Trigger_Text_0
# 338 "data//maps/GastreeCity/scripts.pory"
	release
# 339 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 340 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 341 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC8::
# 352 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0, MSGBOX_NPC
# 353 "data//maps/GastreeCity/scripts.pory"
	applymovement 10, GastreeCity_NPC8_Movement_0
# 354 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 355 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 356 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 357 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1, MSGBOX_NPC
# 358 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_1
# 359 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 360 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Keckleon::
# 365 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 366 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC9::
# 371 "data//maps/GastreeCity/scripts.pory"
	lockall
# 372 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 373 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 374 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 375 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 376 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 393 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 394 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 395 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 397 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 398 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 399 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 402 "data//maps/GastreeCity/scripts.pory"
	lockall
# 403 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 404 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 405 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 406 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 407 "data//maps/GastreeCity/scripts.pory"
	release
# 408 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 409 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 410 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 411 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_15
# 412 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 413 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 414 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_6
# 415 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 416 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 417 "data//maps/GastreeCity/scripts.pory"
	release
# 418 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_2
# 419 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 420 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 421 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_8
# 422 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 423 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 424 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 425 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 426 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 427 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 428 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 429 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 430 "data//maps/GastreeCity/scripts.pory"
	release
# 431 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 432 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 433 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 434 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 439 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 440 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 443 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 444 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 447 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 448 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 454 "data//maps/GastreeCity/scripts.pory"
	lockall
# 455 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 457 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 460 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 475 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 478 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 458 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0, MSGBOX_NPC
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 461 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 462 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 463 "data//maps/GastreeCity/scripts.pory"
	release
# 464 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 465 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 466 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 467 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_SPLASH
# 468 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 469 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_9
# 470 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 471 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 472 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
# 473 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 483 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 484 "data//maps/GastreeCity/scripts.pory"
	release
# 485 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 486 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 487 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 488 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 489 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 490 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 494 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 495 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 498 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 499 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 502 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 503 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 508 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 509 "data//maps/GastreeCity/scripts.pory"
	release
# 510 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 511 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 512 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 513 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 514 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 515 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 518 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 519 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 522 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 523 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 526 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 527 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 533 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 534 "data//maps/GastreeCity/scripts.pory"
	release
# 535 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 536 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 537 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 538 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 539 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 540 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 543 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 544 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 547 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 548 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 551 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 554 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 556 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 561 "data//maps/GastreeCity/scripts.pory"
	lockall
# 562 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 563 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 564 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 565 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 571 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 572 "data//maps/GastreeCity/scripts.pory"
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

# 207 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_0:
# 207 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 209 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_1:
# 209 "data//maps/GastreeCity/scripts.pory"
	face_down
# 209 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 220 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_2:
# 220 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 221 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_3:
# 221 "data//maps/GastreeCity/scripts.pory"
	face_left
# 221 "data//maps/GastreeCity/scripts.pory"
	emote_question_mark
	step_end

# 226 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_4:
# 226 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 226 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 232 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_5:
# 232 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 238 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_6:
# 238 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 238 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 238 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 256 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_7:
# 256 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 256 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 257 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_8:
# 257 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 268 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_9:
# 268 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 275 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_10:
# 275 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_right
	step_end

# 283 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_11:
# 283 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 283 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
	step_end

# 289 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_12:
# 289 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_up
	step_end

# 294 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_13:
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 301 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_14:
# 301 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 301 "data//maps/GastreeCity/scripts.pory"
	walk_right
	step_end

# 312 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_15:
# 312 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 318 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_16:
# 318 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 318 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 318 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 353 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 353 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 353 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 358 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_1:
# 358 "data//maps/GastreeCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 409 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 409 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 409 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 409 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 409 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 409 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 409 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 409 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 427 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 427 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 427 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 427 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 433 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 433 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 487 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 487 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 487 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 512 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 512 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 512 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 537 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 537 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 537 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 537 "data//maps/GastreeCity/scripts.pory"
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
	.string "You should be proud!$"

GastreeCity_Shard_NPC_Text_5:
# 184 "data//maps/GastreeCity/scripts.pory"
	.string "You work with Professor Tenebris,\n"
	.string "correct? So you would be interested\l"
	.string "in Pokemon psychology, I suppose.\l"
	.string "Whether you proceed down the path of\l"
	.string "history is up to you, but if you do...\l"
	.string "I hope this serves you well!$"

GastreeCity_Shard_NPC_Text_6:
# 192 "data//maps/GastreeCity/scripts.pory"
	.string "Take your time child. I'll be waiting.$"

GastreeCity_Shard_NPC_Text_7:
# 195 "data//maps/GastreeCity/scripts.pory"
	.string "Come to admire this statue, have you?\p"
	.string "I'm researching the origins of these\n"
	.string "ancient statues. They're a vital legacy\l"
	.string "of Cormoria's past.$"

GastreeCity_Shard_Trigger_Text_0:
# 212 "data//maps/GastreeCity/scripts.pory"
	.string "Child! Is that a Rare Shard you have?\p"
	.string "My my...come here, quickly!$"

GastreeCity_Shard_Trigger_Text_1:
# 217 "data//maps/GastreeCity/scripts.pory"
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
# 235 "data//maps/GastreeCity/scripts.pory"
	.string "C'mon Bergmite! Use Rock Slide!$"

GastreeCity_Shard_Trigger_Text_3:
# 242 "data//maps/GastreeCity/scripts.pory"
	.string "keee!!!$"

GastreeCity_Shard_Trigger_Text_4:
# 261 "data//maps/GastreeCity/scripts.pory"
	.string "Argh, you idiot boy!\n"
	.string "What have you done?\p"
	.string "You and your Bergmite have destroyed\n"
	.string "the ancient statue!$"

GastreeCity_Shard_Trigger_Text_5:
# 265 "data//maps/GastreeCity/scripts.pory"
	.string "Oh no! I'm so sorry!\n"
	.string "I really didn't mean to - I promise!$"

GastreeCity_Shard_Trigger_Text_6:
# 271 "data//maps/GastreeCity/scripts.pory"
	.string "Bergmite! We gotta say sorry!$"

GastreeCity_Shard_Trigger_Text_7:
# 279 "data//maps/GastreeCity/scripts.pory"
	.string "keee...$"

GastreeCity_Shard_Trigger_Text_8:
# 285 "data//maps/GastreeCity/scripts.pory"
	.string "You think a sorry will suffice!\n"
	.string "You blithering idiot!$"

GastreeCity_Shard_Trigger_Text_9:
# 292 "data//maps/GastreeCity/scripts.pory"
	.string "Yikes, she's getting too worked up.\n"
	.string "Bergmite - let's go!$"

GastreeCity_Shard_Trigger_Text_10:
# 308 "data//maps/GastreeCity/scripts.pory"
	.string "Such a loss to culture and history...$"

GastreeCity_Shard_Trigger_Text_11:
# 315 "data//maps/GastreeCity/scripts.pory"
	.string "I can't let this happen any more.\n"
	.string "We must preserve these statues.\p"
	.string "I'm now too old to go around Cormoria,\n"
	.string "but you, my dear, are young and able!\l"
	.string "You must help me preserve the statues!\p"
	.string "Take this.$"

GastreeCity_Shard_Trigger_Text_12:
# 323 "data//maps/GastreeCity/scripts.pory"
	.string "This is an Archaeolens. It scans and\n"
	.string "records ancient historical artifacts.\p"
	.string "Now that this statue is destroyed,\n"
	.string "there are ten statues left.\p"
	.string "Scan all the statues around Cormoria\n"
	.string "and come back to me.\p"
	.string "A task of vital importance!\n"
	.string "I won't take no for an answer!$"

GastreeCity_Shard_CantLeave_Trigger_Text_0:
# 337 "data//maps/GastreeCity/scripts.pory"
	.string "I should use the Rare Shard Leader\n"
	.string "Inger gave me!$"

GastreeCity_NPC8_Text_0:
# 352 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my Bergmite some\n"
	.string "new moves so that we can go and\l"
	.string "explore Route 4 together!\p"
	.string "C'mon Bergmite! C'mon!!$"

GastreeCity_NPC8_Text_1:
# 357 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!!\p"
	.string "Bergmite is fired up too!$"

GastreeCity_NPC_Keckleon_Text_0:
# 366 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!\p"
	.string "Bergmite is trying hard to match its\n"
	.string "trainers energy. Go Bergmite!$"

GastreeCity_NPC9_Text_0:
# 373 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a Pokémon can learn?$"

GastreeCity_NPC9_Text_1:
# 374 "data//maps/GastreeCity/scripts.pory"
	.string "Eruption$"

GastreeCity_NPC9_Text_2:
# 374 "data//maps/GastreeCity/scripts.pory"
	.string "Quiver Dance$"

GastreeCity_NPC9_Text_3:
# 374 "data//maps/GastreeCity/scripts.pory"
	.string "Expanding Force$"

GastreeCity_NPC9_Text_4:
# 374 "data//maps/GastreeCity/scripts.pory"
	.string "Geomancy$"

GastreeCity_NPC9_Text_5:
# 375 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's Splash!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM Splash, your\l"
	.string "Pokémon can hop onto rocks in the\l"
	.string "water like the one here. But you need\l"
	.string "at least one Gym Badge to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 406 "data//maps/GastreeCity/scripts.pory"
	.string "No! Skitty!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 416 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 429 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my Skitty back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her and bring her back!$"

GastreeCity_NPC2_Text_0:
# 458 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a\l"
	.string "Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 462 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 465 "data//maps/GastreeCity/scripts.pory"
	.string "Skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 466 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 468 "data//maps/GastreeCity/scripts.pory"
	.string "I'm not a trainer so I don't need it.\n"
	.string "All I need is my Skitty!\p"
	.string "You don't need to teach it to any of\n"
	.string "your Pokémon, but you need at least\l"
	.string "one Gym Badge to use it.\p"
	.string "Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 475 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my Skitty yet? She\n"
	.string "might be stuck in a tree - please look\l"
	.string "for her pink tail!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 483 "data//maps/GastreeCity/scripts.pory"
	.string "There's something in the tree...\p"
	.string "It's Skitty!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 490 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 515 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away again.\n"
	.string "It's too slippery!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 533 "data//maps/GastreeCity/scripts.pory"
	.string "It's Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 540 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. Looks like Skitty ran\n"
	.string "back to its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 564 "data//maps/GastreeCity/scripts.pory"
	.string "Skee!!$"

GastreeCity_Poltchageist_Text_0:
# 572 "data//maps/GastreeCity/scripts.pory"
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
