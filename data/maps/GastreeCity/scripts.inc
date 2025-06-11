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
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_NPC_1
# 143 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_1, MSGBOX_NPC
	end

GastreeCity_Shard_NPC_1:
# 140 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_0, MSGBOX_NPC
	end


GastreeCity_Shard_Trigger::
# 149 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_Trigger_2
# 151 "data//maps/GastreeCity/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 152 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeCity_Shard_Trigger_5
# 154 "data//maps/GastreeCity/scripts.pory"
	lockall
# 155 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_0
# 156 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 157 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 158 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_0
# 159 "data//maps/GastreeCity/scripts.pory"
	release
# 160 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_1
# 161 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 162 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 163 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_1
# 164 "data//maps/GastreeCity/scripts.pory"
	release
# 165 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 166 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_2
# 167 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_3
# 168 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 169 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 171 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 172 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_4
# 173 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 174 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 176 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 178 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_5
# 179 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 180 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 181 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_2
# 182 "data//maps/GastreeCity/scripts.pory"
	release
# 183 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 184 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_6
# 185 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 186 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 187 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 188 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_3
# 189 "data//maps/GastreeCity/scripts.pory"
	release
# 190 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 192 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8004, 2
# 193 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8005, 2
# 194 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8006, 20
# 195 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8007, 5
# 196 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SHRINE
# 197 "data//maps/GastreeCity/scripts.pory"
	special ShakeCamera
# 198 "data//maps/GastreeCity/scripts.pory"
	waitstate
# 199 "data//maps/GastreeCity/scripts.pory"
	release
# 201 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 202 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_7
# 203 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_8
# 204 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_8
# 205 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 206 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 207 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_4
# 208 "data//maps/GastreeCity/scripts.pory"
	release
# 209 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 211 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_5
# 212 "data//maps/GastreeCity/scripts.pory"
	release
# 213 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 214 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_9
# 215 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 216 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 217 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_6
# 218 "data//maps/GastreeCity/scripts.pory"
	release
# 219 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 221 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_10
# 222 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 223 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 224 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 225 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_7
# 226 "data//maps/GastreeCity/scripts.pory"
	release
# 227 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 229 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_11
# 230 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 231 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_8
# 232 "data//maps/GastreeCity/scripts.pory"
	release
# 233 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 235 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_12
# 236 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 237 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 238 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_9
# 239 "data//maps/GastreeCity/scripts.pory"
	release
# 240 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_13
# 241 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_13
# 242 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 243 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_TRAINER
# 244 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_BERG
# 246 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 247 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_14
# 248 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 249 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 251 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_2
# 252 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 253 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 254 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_10
# 255 "data//maps/GastreeCity/scripts.pory"
	release
# 256 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 257 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_9
# 258 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_15
# 259 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 260 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 261 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_11
# 262 "data//maps/GastreeCity/scripts.pory"
	release
# 264 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_16
# 265 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 266 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 267 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_ARCHAEOLENS
# 269 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_12
# 270 "data//maps/GastreeCity/scripts.pory"
	release
# 272 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_SHRINE_QUEST
# 273 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_ANCIENT_STATUES
# 275 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_Shard_Trigger_2:
	end

GastreeCity_Shard_Trigger_5:
	end


GastreeCity_Shard_CantLeave_Trigger::
# 280 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_CantLeave_Trigger_2
# 281 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeCity_Shard_CantLeave_Trigger_4
	return

GastreeCity_Shard_CantLeave_Trigger_2:
	end

GastreeCity_Shard_CantLeave_Trigger_4:
# 282 "data//maps/GastreeCity/scripts.pory"
	lockall
# 283 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_CantLeave_Trigger_Text_0
# 284 "data//maps/GastreeCity/scripts.pory"
	release
# 285 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 286 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 287 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC8::
# 298 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0, MSGBOX_NPC
# 299 "data//maps/GastreeCity/scripts.pory"
	applymovement 10, GastreeCity_NPC8_Movement_0
# 300 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 301 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 302 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 303 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1, MSGBOX_NPC
# 304 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_1
# 305 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 306 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Keckleon::
# 311 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 312 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC9::
# 317 "data//maps/GastreeCity/scripts.pory"
	lockall
# 318 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 319 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 320 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 321 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 322 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 339 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 340 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 341 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 343 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 344 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 345 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 348 "data//maps/GastreeCity/scripts.pory"
	lockall
# 349 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 350 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 351 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 352 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 353 "data//maps/GastreeCity/scripts.pory"
	release
# 354 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 355 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 356 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 357 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_15
# 358 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 359 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 360 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_6
# 361 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 362 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 363 "data//maps/GastreeCity/scripts.pory"
	release
# 364 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_2
# 365 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 366 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 367 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_8
# 368 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 369 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 370 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 371 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 372 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 373 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 374 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 375 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 376 "data//maps/GastreeCity/scripts.pory"
	release
# 377 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 378 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 379 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 380 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 385 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 386 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 389 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 390 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 393 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 394 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 400 "data//maps/GastreeCity/scripts.pory"
	lockall
# 401 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 403 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 406 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 421 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 424 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 404 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0, MSGBOX_NPC
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 407 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 408 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 409 "data//maps/GastreeCity/scripts.pory"
	release
# 410 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 411 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 412 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 413 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_SPLASH
# 414 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 415 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_9
# 416 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 417 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 418 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
# 419 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 429 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 430 "data//maps/GastreeCity/scripts.pory"
	release
# 431 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 432 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 433 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 434 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 435 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 436 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 440 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 441 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 444 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 445 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 448 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 449 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 454 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 455 "data//maps/GastreeCity/scripts.pory"
	release
# 456 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 457 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 458 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 459 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 460 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 461 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 464 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 465 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 468 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 469 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 472 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 473 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 479 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 480 "data//maps/GastreeCity/scripts.pory"
	release
# 481 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 482 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 483 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 484 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 485 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 486 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 489 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 490 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 493 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 494 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 497 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 500 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 502 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 507 "data//maps/GastreeCity/scripts.pory"
	lockall
# 508 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 509 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 510 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 511 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 517 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 518 "data//maps/GastreeCity/scripts.pory"
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

# 155 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_0:
# 155 "data//maps/GastreeCity/scripts.pory"
	face_down
# 155 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 160 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_1:
# 160 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 160 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 166 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_2:
# 166 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 167 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_3:
# 167 "data//maps/GastreeCity/scripts.pory"
	face_left
# 167 "data//maps/GastreeCity/scripts.pory"
	emote_question_mark
	step_end

# 172 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_4:
# 172 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 172 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 178 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_5:
# 178 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 184 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_6:
# 184 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 184 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 184 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 202 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_7:
# 202 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 202 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 203 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_8:
# 203 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 214 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_9:
# 214 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 221 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_10:
# 221 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_right
	step_end

# 229 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_11:
# 229 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 229 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
	step_end

# 235 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_12:
# 235 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_up
	step_end

# 240 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_13:
# 240 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 240 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 240 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 240 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 240 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 240 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 240 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 247 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_14:
# 247 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 247 "data//maps/GastreeCity/scripts.pory"
	walk_right
	step_end

# 258 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_15:
# 258 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 264 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_16:
# 264 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 264 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 264 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 299 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 299 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 299 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 304 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_1:
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 355 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 355 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 355 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 355 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 355 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 355 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 355 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 355 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 355 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 373 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 373 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 373 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 373 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 373 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 379 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 379 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 379 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 379 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 379 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 433 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 433 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 433 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 458 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 458 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 483 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 483 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 483 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 483 "data//maps/GastreeCity/scripts.pory"
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
	.string "Gastree City is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 131 "data//maps/GastreeCity/scripts.pory"
	.string "When I get my first Pokémon, I want it\n"
	.string "to be Poltchageist!$"

GastreeCity_Shard_NPC_Text_0:
# 140 "data//maps/GastreeCity/scripts.pory"
	.string "Take your time child. I'll be waiting\n"
	.string "here.$"

GastreeCity_Shard_NPC_Text_1:
# 143 "data//maps/GastreeCity/scripts.pory"
	.string "Come to admire this statue, have you?\p"
	.string "I'm researching the origins of these\n"
	.string "ancient statues. They're a vital legacy\l"
	.string "of Cormoria's past.$"

GastreeCity_Shard_Trigger_Text_0:
# 158 "data//maps/GastreeCity/scripts.pory"
	.string "Child! Is that a Rare Shard you have?\p"
	.string "My my...come here, quickly!$"

GastreeCity_Shard_Trigger_Text_1:
# 163 "data//maps/GastreeCity/scripts.pory"
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
# 181 "data//maps/GastreeCity/scripts.pory"
	.string "C'mon Bergmite! Use Rock Slide!$"

GastreeCity_Shard_Trigger_Text_3:
# 188 "data//maps/GastreeCity/scripts.pory"
	.string "keee!!!$"

GastreeCity_Shard_Trigger_Text_4:
# 207 "data//maps/GastreeCity/scripts.pory"
	.string "Argh, you idiot boy!\n"
	.string "What have you done?\p"
	.string "You and your Bergmite have destroyed\n"
	.string "the ancient statue!$"

GastreeCity_Shard_Trigger_Text_5:
# 211 "data//maps/GastreeCity/scripts.pory"
	.string "Oh no! I'm so sorry!\n"
	.string "I really didn't mean to - I promise!$"

GastreeCity_Shard_Trigger_Text_6:
# 217 "data//maps/GastreeCity/scripts.pory"
	.string "Bergmite! We gotta say sorry!$"

GastreeCity_Shard_Trigger_Text_7:
# 225 "data//maps/GastreeCity/scripts.pory"
	.string "keee...$"

GastreeCity_Shard_Trigger_Text_8:
# 231 "data//maps/GastreeCity/scripts.pory"
	.string "You think a sorry will suffice!\n"
	.string "You blithering idiot!$"

GastreeCity_Shard_Trigger_Text_9:
# 238 "data//maps/GastreeCity/scripts.pory"
	.string "Yikes, she's getting too worked up.\n"
	.string "Bergmite - let's go!$"

GastreeCity_Shard_Trigger_Text_10:
# 254 "data//maps/GastreeCity/scripts.pory"
	.string "Such a loss to culture and history...$"

GastreeCity_Shard_Trigger_Text_11:
# 261 "data//maps/GastreeCity/scripts.pory"
	.string "I can't let this happen any more. We\n"
	.string "must preserve these statues.\p"
	.string "I'm now too old to go around Cormoria,\n"
	.string "but you, my dear, are young and able!\l"
	.string "You must help me preserve these\l"
	.string "statues!\p"
	.string "Take this.$"

GastreeCity_Shard_Trigger_Text_12:
# 269 "data//maps/GastreeCity/scripts.pory"
	.string "This is an Archaeolens. It scans and\n"
	.string "records ancient historical artifacts.\p"
	.string "Now that this statue is destroyed,\n"
	.string "there are ten statues left.\p"
	.string "Scan all the statues around Cormoria\n"
	.string "and come back to me.\p"
	.string "A task of vital importance!\n"
	.string "I won't take no for an answer!$"

GastreeCity_Shard_CantLeave_Trigger_Text_0:
# 283 "data//maps/GastreeCity/scripts.pory"
	.string "I should use the Rare Shard Leader\n"
	.string "Inger gave me!$"

GastreeCity_NPC8_Text_0:
# 298 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my Bergmite some\n"
	.string "new moves so that we can go and\l"
	.string "explore Route 4 together!\p"
	.string "C'mon Bergmite! C'mon!!$"

GastreeCity_NPC8_Text_1:
# 303 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!!\p"
	.string "Bergmite is fired up too!$"

GastreeCity_NPC_Keckleon_Text_0:
# 312 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!\p"
	.string "Bergmite is trying hard to match its\n"
	.string "trainers energy. Go Bergmite!$"

GastreeCity_NPC9_Text_0:
# 319 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a Pokémon can learn?$"

GastreeCity_NPC9_Text_1:
# 320 "data//maps/GastreeCity/scripts.pory"
	.string "Eruption$"

GastreeCity_NPC9_Text_2:
# 320 "data//maps/GastreeCity/scripts.pory"
	.string "Quiver Dance$"

GastreeCity_NPC9_Text_3:
# 320 "data//maps/GastreeCity/scripts.pory"
	.string "Expanding Force$"

GastreeCity_NPC9_Text_4:
# 320 "data//maps/GastreeCity/scripts.pory"
	.string "Geomancy$"

GastreeCity_NPC9_Text_5:
# 321 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's Splash!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM Splash, your\l"
	.string "Pokémon can hop onto rocks in the\l"
	.string "water like the one here. But you need\l"
	.string "at least one Gym Badge to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 352 "data//maps/GastreeCity/scripts.pory"
	.string "No! Skitty!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 362 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 375 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my Skitty back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her and bring her back!$"

GastreeCity_NPC2_Text_0:
# 404 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a\l"
	.string "Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 408 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 411 "data//maps/GastreeCity/scripts.pory"
	.string "Skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 412 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 414 "data//maps/GastreeCity/scripts.pory"
	.string "I'm not a trainer so I don't need it.\n"
	.string "All I need is my Skitty!\p"
	.string "You don't need to teach it to any of\n"
	.string "your Pokémon, but you need at least\l"
	.string "one Gym Badge to use it.\p"
	.string "Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 421 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my Skitty yet? She\n"
	.string "might be stuck in a tree - please look\l"
	.string "for her pink tail!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 429 "data//maps/GastreeCity/scripts.pory"
	.string "There's something in the tree...\p"
	.string "It's Skitty!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 436 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 461 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away again.\n"
	.string "It's too slippery!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 479 "data//maps/GastreeCity/scripts.pory"
	.string "It's Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 486 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. Looks like Skitty ran\n"
	.string "back to its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 510 "data//maps/GastreeCity/scripts.pory"
	.string "Skee!!$"

GastreeCity_Poltchageist_Text_0:
# 518 "data//maps/GastreeCity/scripts.pory"
	.string "Poltchageist is picking Revival Herbs\n"
	.string "for the teahouse!$"

GastreeCity_KohlaIntro1::
# 83 "data//maps/GastreeCity/scripts.pory"
	.string "Well well, look who thought it was\n"
	.string "fashionable to be late! I'm way ahead\l"
	.string "of you, chum! I've already beaten\l"
	.string "Inger and got the Hard Badge. And I\l"
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
