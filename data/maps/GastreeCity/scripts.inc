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
	msgbox GastreeCity_Shard_Trigger_Text_1
# 160 "data//maps/GastreeCity/scripts.pory"
	release
# 161 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 163 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 164 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_2
# 165 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 166 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 168 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 170 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_3
# 171 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 172 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 173 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_2
# 174 "data//maps/GastreeCity/scripts.pory"
	release
# 175 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 176 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_4
# 177 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 178 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 179 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 180 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_3
# 181 "data//maps/GastreeCity/scripts.pory"
	release
# 182 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 184 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8004, 2
# 185 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8005, 2
# 186 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8006, 20
# 187 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8007, 5
# 188 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SHRINE
# 189 "data//maps/GastreeCity/scripts.pory"
	special ShakeCamera
# 190 "data//maps/GastreeCity/scripts.pory"
	waitstate
# 191 "data//maps/GastreeCity/scripts.pory"
	release
# 193 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_5
# 194 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_6
# 195 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_6
# 196 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 197 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 198 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_4
# 199 "data//maps/GastreeCity/scripts.pory"
	release
# 200 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 202 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_5
# 203 "data//maps/GastreeCity/scripts.pory"
	release
# 204 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 205 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_6
# 206 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 207 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 208 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 209 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_6
# 210 "data//maps/GastreeCity/scripts.pory"
	release
# 211 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 213 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_Shard_Trigger_2:
	end

GastreeCity_Shard_Trigger_5:
	end


GastreeCity_NPC8::
# 219 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0, MSGBOX_NPC
# 220 "data//maps/GastreeCity/scripts.pory"
	applymovement 10, GastreeCity_NPC8_Movement_0
# 221 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 222 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 223 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 224 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1, MSGBOX_NPC
	end


GastreeCity_NPC_Keckleon::
# 229 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 230 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC9::
# 235 "data//maps/GastreeCity/scripts.pory"
	lockall
# 236 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 237 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 238 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 239 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 240 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 257 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 258 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 259 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 261 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 262 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 263 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 266 "data//maps/GastreeCity/scripts.pory"
	lockall
# 267 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 268 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_3
# 269 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 270 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 271 "data//maps/GastreeCity/scripts.pory"
	release
# 272 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 273 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 274 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 275 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 276 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 277 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 278 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_4
# 279 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 280 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 281 "data//maps/GastreeCity/scripts.pory"
	release
# 282 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 283 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 284 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 285 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_6
# 286 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 287 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 288 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_3
# 289 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 290 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 291 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_3
# 292 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 293 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 294 "data//maps/GastreeCity/scripts.pory"
	release
# 295 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 296 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 297 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_4
# 298 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 303 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 304 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 307 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 308 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 311 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 312 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 318 "data//maps/GastreeCity/scripts.pory"
	lockall
# 319 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 321 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 324 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 337 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 340 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 322 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0, MSGBOX_NPC
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 325 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 326 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 327 "data//maps/GastreeCity/scripts.pory"
	release
# 328 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 329 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 330 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 331 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_CUT
# 332 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 333 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 334 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
# 335 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 345 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 346 "data//maps/GastreeCity/scripts.pory"
	release
# 347 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 348 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 349 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 350 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 351 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 352 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 356 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 357 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 360 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 361 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 364 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 365 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 370 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 371 "data//maps/GastreeCity/scripts.pory"
	release
# 372 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 373 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 374 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 375 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 376 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 377 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 380 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 381 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 384 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 385 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 388 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 389 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 395 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 396 "data//maps/GastreeCity/scripts.pory"
	release
# 397 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 398 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 399 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 400 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 401 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 402 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 405 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 406 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 409 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 410 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 413 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 416 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 418 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 423 "data//maps/GastreeCity/scripts.pory"
	lockall
# 424 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 425 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 426 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 427 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 433 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 434 "data//maps/GastreeCity/scripts.pory"
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
	walk_left
# 164 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 170 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_3:
# 170 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 176 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_4:
# 176 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 176 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 176 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 193 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_5:
# 193 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 193 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 194 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_6:
# 194 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 220 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 220 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 220 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 273 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 275 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 275 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 282 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 282 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 291 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_3:
# 291 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 291 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 291 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 291 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 297 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_4:
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 297 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 349 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 349 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 349 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 374 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 374 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 374 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 399 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 399 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 399 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 399 "data//maps/GastreeCity/scripts.pory"
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
	.string "These statues are a vital legacy of\n"
	.string "Cormoria's past.\p"
	.string "You know, back then they didn't have\n"
	.string "the tools to scult such intricate\l"
	.string "works, but yet they managed to make\l"
	.string "these.\p"
	.string "Incredible!$"

GastreeCity_Shard_Trigger_Text_0:
# 156 "data//maps/GastreeCity/scripts.pory"
	.string "Child! Is that a Rare Shard you have?\p"
	.string "My my...come here, quickly!$"

GastreeCity_Shard_Trigger_Text_1:
# 159 "data//maps/GastreeCity/scripts.pory"
	.string "That Rare Shard you have has a\n"
	.string "mysterious connection with these\l"
	.string "statues.\p"
	.string "Did you know that Pokémon have innate\n"
	.string "Individual Values for each of their\l"
	.string "stats? Pokémon Professors grade them\l"
	.string "from E- to S+.\p"
	.string "Normally, there's no way to change them.\n"
	.string "But a Rare Shard, when held in the\l"
	.string "prescence of an ancient statue like\l"
	.string "this one, can maximise one of your\l"
	.string "Pokémon's Individual Values! Why don't\l"
	.string "you try it now?$"

GastreeCity_Shard_Trigger_Text_2:
# 173 "data//maps/GastreeCity/scripts.pory"
	.string "C'mon Bergmite! Use Rock Slide!$"

GastreeCity_Shard_Trigger_Text_3:
# 180 "data//maps/GastreeCity/scripts.pory"
	.string "keee!!!$"

GastreeCity_Shard_Trigger_Text_4:
# 198 "data//maps/GastreeCity/scripts.pory"
	.string "What have you done! You stupid,\n"
	.string "muscle-brained trainer!\p"
	.string "You and your Bergmite have destroyed\n"
	.string "the ancient statue!$"

GastreeCity_Shard_Trigger_Text_5:
# 202 "data//maps/GastreeCity/scripts.pory"
	.string "Oh no! I'm so sorry! I didn't mean to - I\n"
	.string "promise!$"

GastreeCity_Shard_Trigger_Text_6:
# 209 "data//maps/GastreeCity/scripts.pory"
	.string "keee...?$"

GastreeCity_NPC8_Text_0:
# 219 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my Bergmite some\n"
	.string "new moves so that we can go and explore\l"
	.string "Route 4 together!\p"
	.string "C'mon Bergmite! C'mon!!$"

GastreeCity_NPC8_Text_1:
# 224 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!!\p"
	.string "Bergmite is as fired up as its trainer\n"
	.string "is!$"

GastreeCity_NPC_Keckleon_Text_0:
# 230 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!\p"
	.string "Bergmite is trying hard to match its\n"
	.string "trainers energy. Go Bergmite!$"

GastreeCity_NPC9_Text_0:
# 237 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a Pokémon can learn?$"

GastreeCity_NPC9_Text_1:
# 238 "data//maps/GastreeCity/scripts.pory"
	.string "Eruption$"

GastreeCity_NPC9_Text_2:
# 238 "data//maps/GastreeCity/scripts.pory"
	.string "Quiver Dance$"

GastreeCity_NPC9_Text_3:
# 238 "data//maps/GastreeCity/scripts.pory"
	.string "Expanding Force$"

GastreeCity_NPC9_Text_4:
# 238 "data//maps/GastreeCity/scripts.pory"
	.string "Geomancy$"

GastreeCity_NPC9_Text_5:
# 239 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's Splash!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM Splash, your\l"
	.string "Pokémon can hop onto rocks in the\l"
	.string "water like the one here. But you need at\l"
	.string "least one Gym Badge to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 270 "data//maps/GastreeCity/scripts.pory"
	.string "No! Skitty!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 280 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 293 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my Skitty back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her!$"

GastreeCity_NPC2_Text_0:
# 322 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a Purrloin\l"
	.string "or Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 326 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 329 "data//maps/GastreeCity/scripts.pory"
	.string "Skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 330 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 332 "data//maps/GastreeCity/scripts.pory"
	.string "I'm not a trainer so I don't need it. All\n"
	.string "I need is my Skitty!\p"
	.string "You don't need to teach it to any of\n"
	.string "your Pokémon, but you need at least one\l"
	.string "Gym Badge to use it.\p"
	.string "Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 337 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my Skitty yet? She\n"
	.string "might be stuck in a tree - please look\l"
	.string "for her pink tail!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 345 "data//maps/GastreeCity/scripts.pory"
	.string "There's something in the tree...\p"
	.string "It's Skitty!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 352 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 377 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away again. It's too\n"
	.string "slippery!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 395 "data//maps/GastreeCity/scripts.pory"
	.string "It's Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 402 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. Looks like Skitty ran\n"
	.string "back to its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 426 "data//maps/GastreeCity/scripts.pory"
	.string "Skee~~$"

GastreeCity_Poltchageist_Text_0:
# 434 "data//maps/GastreeCity/scripts.pory"
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
