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
	map_script MAP_SCRIPT_ON_TRANSITION, GastreeCity_OnTransition
# 16 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GastreeCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GastreeCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data//maps/GastreeCity/scripts.pory"
	map_script_2 VAR_GASTREE_SKITTY_QUEST, 0, GastreeCity_EventScript_SkittyQuestStart
	.2byte 0


GastreeCity_OnTransition::
	return


GastreeCity_EventScript_KohlaBattle_Trigger::
# 28 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger_2
# 31 "data//maps/GastreeCity/scripts.pory"
	lockall
# 32 "data//maps/GastreeCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 33 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 37 "data//maps/GastreeCity/scripts.pory"
	opendoor 23, 26
# 38 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 41 "data//maps/GastreeCity/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 23, 26
# 42 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_KOHLA
# 43 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 45 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0
# 46 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 47 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 48 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 50 "data//maps/GastreeCity/scripts.pory"
	closedoor 23, 26
# 51 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 53 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 56 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 57 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 58 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 59 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 62 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Text_1
# 63 "data//maps/GastreeCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 66 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 67 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 68 "data//maps/GastreeCity/scripts.pory"
	release
# 70 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2
# 71 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 74 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 75 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 77 "data//maps/GastreeCity/scripts.pory"
	fadedefaultbgm
# 78 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger_2:
	end


GastreeCity_NPC1::
# 95 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC3::
# 100 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC4::
# 105 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC5::
# 111 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0, MSGBOX_NPC
	end


GastreeCity_Mankey::
# 116 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_NORMAL
# 117 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Mankey_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC6::
# 123 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC7::
# 129 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0, MSGBOX_NPC
	end


GastreeCity_Shard_NPC::
# 136 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_NPC_1
# 141 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_1, MSGBOX_NPC
	end

GastreeCity_Shard_NPC_1:
# 138 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_0, MSGBOX_NPC
	end


GastreeCity_Shard_Trigger::
# 147 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_Trigger_2
# 149 "data//maps/GastreeCity/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 150 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeCity_Shard_Trigger_5
# 152 "data//maps/GastreeCity/scripts.pory"
	lockall
# 153 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_0
# 154 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 155 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 156 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_0
# 157 "data//maps/GastreeCity/scripts.pory"
	release
# 158 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_1
# 159 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 160 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 161 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_1
# 162 "data//maps/GastreeCity/scripts.pory"
	release
# 163 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 164 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_2
# 165 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_3
# 166 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 167 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 169 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 170 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_4
# 171 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 172 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 174 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 176 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_5
# 177 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 178 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 179 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_2
# 180 "data//maps/GastreeCity/scripts.pory"
	release
# 181 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 182 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_6
# 183 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 184 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 185 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 186 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_3
# 187 "data//maps/GastreeCity/scripts.pory"
	release
# 188 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 190 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8004, 2
# 191 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8005, 2
# 192 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8006, 20
# 193 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8007, 5
# 194 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SHRINE
# 195 "data//maps/GastreeCity/scripts.pory"
	special ShakeCamera
# 196 "data//maps/GastreeCity/scripts.pory"
	waitstate
# 197 "data//maps/GastreeCity/scripts.pory"
	release
# 199 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 200 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_7
# 201 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_8
# 202 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_8
# 203 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 204 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 205 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_4
# 206 "data//maps/GastreeCity/scripts.pory"
	release
# 207 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 209 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_5
# 210 "data//maps/GastreeCity/scripts.pory"
	release
# 211 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 212 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_9
# 213 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 214 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 215 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_6
# 216 "data//maps/GastreeCity/scripts.pory"
	release
# 217 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 219 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_10
# 220 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 221 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 222 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 223 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_7
# 224 "data//maps/GastreeCity/scripts.pory"
	release
# 225 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 227 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_11
# 228 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 229 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_8
# 230 "data//maps/GastreeCity/scripts.pory"
	release
# 231 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 233 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_12
# 234 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 235 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 236 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_9
# 237 "data//maps/GastreeCity/scripts.pory"
	release
# 238 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_13
# 239 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_13
# 240 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 241 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_TRAINER
# 242 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_BERG
# 244 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 245 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_14
# 246 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 247 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 249 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_2
# 250 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 251 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 252 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_10
# 253 "data//maps/GastreeCity/scripts.pory"
	release
# 254 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 255 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_9
# 256 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_15
# 257 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 258 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 259 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_11
# 260 "data//maps/GastreeCity/scripts.pory"
	release
# 262 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_16
# 263 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 264 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 265 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_ARCHAEOLENS
# 267 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_12
# 268 "data//maps/GastreeCity/scripts.pory"
	release
# 270 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_SHRINE_QUEST
# 271 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_ANCIENT_STATUES
# 273 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_Shard_Trigger_2:
	end

GastreeCity_Shard_Trigger_5:
	end


GastreeCity_Shard_CantLeave_Trigger::
# 278 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_CantLeave_Trigger_2
# 279 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeCity_Shard_CantLeave_Trigger_4
	return

GastreeCity_Shard_CantLeave_Trigger_2:
	end

GastreeCity_Shard_CantLeave_Trigger_4:
# 280 "data//maps/GastreeCity/scripts.pory"
	lockall
# 281 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_CantLeave_Trigger_Text_0
# 282 "data//maps/GastreeCity/scripts.pory"
	release
# 283 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 284 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 285 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC8::
# 296 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0, MSGBOX_NPC
# 297 "data//maps/GastreeCity/scripts.pory"
	applymovement 10, GastreeCity_NPC8_Movement_0
# 298 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 299 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 300 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 301 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1, MSGBOX_NPC
# 302 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_1
# 303 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 304 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Keckleon::
# 309 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 310 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC9::
# 315 "data//maps/GastreeCity/scripts.pory"
	lockall
# 316 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 317 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 318 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 319 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 320 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 337 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 338 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 339 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 341 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 342 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 343 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 346 "data//maps/GastreeCity/scripts.pory"
	lockall
# 347 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 348 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 349 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 350 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 351 "data//maps/GastreeCity/scripts.pory"
	release
# 352 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 353 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 354 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 355 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_15
# 356 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 357 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 358 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_6
# 359 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 360 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 361 "data//maps/GastreeCity/scripts.pory"
	release
# 362 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_2
# 363 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 364 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 365 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_8
# 366 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 367 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 368 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 369 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 370 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 371 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 372 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 373 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 374 "data//maps/GastreeCity/scripts.pory"
	release
# 375 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 376 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 377 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 378 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 383 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 384 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 387 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 388 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 391 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 392 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 398 "data//maps/GastreeCity/scripts.pory"
	lockall
# 399 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 401 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 404 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 419 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 422 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 402 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0, MSGBOX_NPC
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 405 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 406 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 407 "data//maps/GastreeCity/scripts.pory"
	release
# 408 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 409 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 410 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 411 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_SPLASH
# 412 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 413 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_9
# 414 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 415 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 416 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
# 417 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 427 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 428 "data//maps/GastreeCity/scripts.pory"
	release
# 429 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 430 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 431 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 432 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 433 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 434 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 438 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 439 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 442 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 443 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 446 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 447 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 452 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 453 "data//maps/GastreeCity/scripts.pory"
	release
# 454 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 455 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 456 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 457 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 458 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 459 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 462 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 463 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 466 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 467 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 470 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 471 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 477 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 478 "data//maps/GastreeCity/scripts.pory"
	release
# 479 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 480 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 481 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 482 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 483 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 484 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 487 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 488 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 491 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 492 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 495 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 498 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 500 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 505 "data//maps/GastreeCity/scripts.pory"
	lockall
# 506 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 507 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 508 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 509 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 515 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 516 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0, MSGBOX_NPC
	end


# 45 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0:
# 45 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 45 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 47 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1:
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_down
	step_end

# 70 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2:
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 70 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 153 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_0:
# 153 "data//maps/GastreeCity/scripts.pory"
	face_down
# 153 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 158 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_1:
# 158 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 158 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 164 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_2:
# 164 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 165 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_3:
# 165 "data//maps/GastreeCity/scripts.pory"
	face_left
# 165 "data//maps/GastreeCity/scripts.pory"
	emote_question_mark
	step_end

# 170 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_4:
# 170 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 170 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 176 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_5:
# 176 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 182 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_6:
# 182 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 182 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 182 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 200 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_7:
# 200 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 200 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 201 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_8:
# 201 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 212 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_9:
# 212 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 219 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_10:
# 219 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_right
	step_end

# 227 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_11:
# 227 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 227 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
	step_end

# 233 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_12:
# 233 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_up
	step_end

# 238 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_13:
# 238 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 238 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 238 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 238 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 238 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 238 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 238 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 245 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_14:
# 245 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 245 "data//maps/GastreeCity/scripts.pory"
	walk_right
	step_end

# 256 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_15:
# 256 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 262 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_16:
# 262 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 262 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 262 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 297 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 297 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 297 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 302 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_1:
# 302 "data//maps/GastreeCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 353 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 353 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 353 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 353 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 353 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 353 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 353 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 353 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 353 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 371 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 371 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 371 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 371 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 371 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 377 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 377 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 377 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 377 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 377 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 431 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 431 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 431 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 456 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 456 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 456 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 481 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 481 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 481 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 56 "data//maps/GastreeCity/scripts.pory"
	.string "Kohla$"

GastreeCity_EventScript_KohlaBattle_Trigger_Text_1:
# 62 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 95 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from Carabrue\n"
	.string "Town? Woah! Then I bet you don't know -\l"
	.string "you have to be careful on Route 4!\l"
	.string "There's a dangerous Dewpider that\l"
	.string "attacks people.$"

GastreeCity_NPC3_Text_0:
# 100 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 105 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 111 "data//maps/GastreeCity/scripts.pory"
	.string "Inger, this city's Gym Leader, uses ROCK\n"
	.string "types. I should have an advantage with\l"
	.string "my FIGHTING-type Pokémon right?\p"
	.string "So then why am I getting cold feet?$"

GastreeCity_Mankey_Text_0:
# 117 "data//maps/GastreeCity/scripts.pory"
	.string "Mankey is getting angry at his trainer's\n"
	.string "cold feet.$"

GastreeCity_NPC6_Text_0:
# 123 "data//maps/GastreeCity/scripts.pory"
	.string "Gastree City is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 129 "data//maps/GastreeCity/scripts.pory"
	.string "When I get my first Pokémon, I want it\n"
	.string "to be Poltchageist!$"

GastreeCity_Shard_NPC_Text_0:
# 138 "data//maps/GastreeCity/scripts.pory"
	.string "Take your time child. I'll be waiting\n"
	.string "here.$"

GastreeCity_Shard_NPC_Text_1:
# 141 "data//maps/GastreeCity/scripts.pory"
	.string "Come to admire this statue, have you?\p"
	.string "I'm researching the origins of these\n"
	.string "statues. They're a vital legacy of\l"
	.string "Cormoria's past.$"

GastreeCity_Shard_Trigger_Text_0:
# 156 "data//maps/GastreeCity/scripts.pory"
	.string "Child! Is that a Rare Shard you have?\p"
	.string "My my...come here, quickly!$"

GastreeCity_Shard_Trigger_Text_1:
# 161 "data//maps/GastreeCity/scripts.pory"
	.string "I'm an archaeologist researching these\n"
	.string "ancient statues.\p"
	.string "Did you know that all Pokémon have\n"
	.string "innate Individual Values for each of\l"
	.string "their stats? Pokémon Professors will\l"
	.string "grade them from E- to S.\p"
	.string "Normally, there's no way to change them.\p"
	.string "But a Rare Shard, when held in the\n"
	.string "prescence of an ancient statue like\l"
	.string "this one, can maximise one of your\l"
	.string "Pokémon's Individual Values!\p"
	.string "A fascinating phenomenon!\n"
	.string "Why don't you try it now?$"

GastreeCity_Shard_Trigger_Text_2:
# 179 "data//maps/GastreeCity/scripts.pory"
	.string "C'mon Bergmite! Use Rock Slide!$"

GastreeCity_Shard_Trigger_Text_3:
# 186 "data//maps/GastreeCity/scripts.pory"
	.string "keee!!!$"

GastreeCity_Shard_Trigger_Text_4:
# 205 "data//maps/GastreeCity/scripts.pory"
	.string "Argh, you idiot boy!\n"
	.string "What have you done?\p"
	.string "You and your Bergmite have destroyed\n"
	.string "the ancient statue!$"

GastreeCity_Shard_Trigger_Text_5:
# 209 "data//maps/GastreeCity/scripts.pory"
	.string "Oh no! I'm so sorry!\n"
	.string "I really didn't mean to - I promise!$"

GastreeCity_Shard_Trigger_Text_6:
# 215 "data//maps/GastreeCity/scripts.pory"
	.string "Bergmite! We gotta say sorry!$"

GastreeCity_Shard_Trigger_Text_7:
# 223 "data//maps/GastreeCity/scripts.pory"
	.string "keee...$"

GastreeCity_Shard_Trigger_Text_8:
# 229 "data//maps/GastreeCity/scripts.pory"
	.string "You think a sorry will suffice!\n"
	.string "You blithering idiot!$"

GastreeCity_Shard_Trigger_Text_9:
# 236 "data//maps/GastreeCity/scripts.pory"
	.string "Yikes, she's getting too worked up.\n"
	.string "Bergmite - let's go!$"

GastreeCity_Shard_Trigger_Text_10:
# 252 "data//maps/GastreeCity/scripts.pory"
	.string "Such a loss to culture and history...$"

GastreeCity_Shard_Trigger_Text_11:
# 259 "data//maps/GastreeCity/scripts.pory"
	.string "I can't let this happen any more. We\n"
	.string "must preserve these statues.\p"
	.string "I'm now too old to go around Cormoria,\n"
	.string "but you, my dear, are young and able!\l"
	.string "You must help me preserve these\l"
	.string "statues!\p"
	.string "Take this.$"

GastreeCity_Shard_Trigger_Text_12:
# 267 "data//maps/GastreeCity/scripts.pory"
	.string "This is an Archaeolens. It scans and\n"
	.string "records ancient historical artifacts.\p"
	.string "Now that this statue is destroyed,\n"
	.string "there are ten statues left.\p"
	.string "Scan all the statues around Cormoria\n"
	.string "and come back to me.\p"
	.string "A task of vital importance!\n"
	.string "I won't take no for an answer!$"

GastreeCity_Shard_CantLeave_Trigger_Text_0:
# 281 "data//maps/GastreeCity/scripts.pory"
	.string "I should use the Rare Shard Leader\n"
	.string "Inger gave me!$"

GastreeCity_NPC8_Text_0:
# 296 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my Bergmite some\n"
	.string "new moves so that we can go and explore\l"
	.string "Route 4 together!\p"
	.string "C'mon Bergmite! C'mon!!$"

GastreeCity_NPC8_Text_1:
# 301 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!!\p"
	.string "Bergmite is fired up too!$"

GastreeCity_NPC_Keckleon_Text_0:
# 310 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!\p"
	.string "Bergmite is trying hard to match its\n"
	.string "trainers energy. Go Bergmite!$"

GastreeCity_NPC9_Text_0:
# 317 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a Pokémon can learn?$"

GastreeCity_NPC9_Text_1:
# 318 "data//maps/GastreeCity/scripts.pory"
	.string "Eruption$"

GastreeCity_NPC9_Text_2:
# 318 "data//maps/GastreeCity/scripts.pory"
	.string "Quiver Dance$"

GastreeCity_NPC9_Text_3:
# 318 "data//maps/GastreeCity/scripts.pory"
	.string "Expanding Force$"

GastreeCity_NPC9_Text_4:
# 318 "data//maps/GastreeCity/scripts.pory"
	.string "Geomancy$"

GastreeCity_NPC9_Text_5:
# 319 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's Splash!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM Splash, your\l"
	.string "Pokémon can hop onto rocks in the\l"
	.string "water like the one here. But you need at\l"
	.string "least one Gym Badge to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 350 "data//maps/GastreeCity/scripts.pory"
	.string "No! Skitty!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 360 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 373 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my Skitty back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her!$"

GastreeCity_NPC2_Text_0:
# 402 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a Purrloin\l"
	.string "or Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 406 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 409 "data//maps/GastreeCity/scripts.pory"
	.string "Skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 410 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 412 "data//maps/GastreeCity/scripts.pory"
	.string "I'm not a trainer so I don't need it. All\n"
	.string "I need is my Skitty!\p"
	.string "You don't need to teach it to any of\n"
	.string "your Pokémon, but you need at least one\l"
	.string "Gym Badge to use it.\p"
	.string "Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 419 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my Skitty yet? She\n"
	.string "might be stuck in a tree - please look\l"
	.string "for her pink tail!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 427 "data//maps/GastreeCity/scripts.pory"
	.string "There's something in the tree...\p"
	.string "It's Skitty!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 434 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 459 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away again. It's too\n"
	.string "slippery!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 477 "data//maps/GastreeCity/scripts.pory"
	.string "It's Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 484 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. Looks like Skitty ran\n"
	.string "back to its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 508 "data//maps/GastreeCity/scripts.pory"
	.string "Skee!!$"

GastreeCity_Poltchageist_Text_0:
# 516 "data//maps/GastreeCity/scripts.pory"
	.string "Poltchageist is picking Revival Herbs\n"
	.string "for the teahouse!$"

GastreeCity_KohlaIntro1::
# 81 "data//maps/GastreeCity/scripts.pory"
	.string "Well well, look who thought it was\n"
	.string "fashionable to be late! I'm way ahead of\l"
	.string "you, chum! I've already beaten Inger\l"
	.string "and got the Hard Badge.$"

GastreeCity_KohlaIntro2::
# 84 "data//maps/GastreeCity/scripts.pory"
	.string "I don't mind dishing out a second\n"
	.string "serving either. This is payback for\l"
	.string "one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 87 "data//maps/GastreeCity/scripts.pory"
	.string "You may have won, but I'll get the\n"
	.string "dreamstone first! I heard that some\l"
	.string "group called Team Somber is also after\l"
	.string "the dreamstone. I'm going to head north\l"
	.string "towards the Ceram Base Camp. Don't come\l"
	.string "after me - I don't need your help.\p"
	.string "Over and out, chum!$"
