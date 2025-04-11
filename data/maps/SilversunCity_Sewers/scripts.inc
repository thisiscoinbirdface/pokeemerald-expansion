SilversunCity_Sewers_MapScripts::
# 6 "data//maps/SilversunCity_Sewers/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilversunCity_OnTransition
# 7 "data//maps/SilversunCity_Sewers/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SilversunCity_Sewers_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SilversunCity_Sewers_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data//maps/SilversunCity_Sewers/scripts.pory"
	map_script_2 VAR_SEWERS_DUSKULL, 3, SilversunCity_Sewers_Duskull_Event_Ending
	.2byte 0


SilversunCity_OnTransition::
# 15 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 3
	goto_if_eq SilversunCity_OnTransition_2
SilversunCity_OnTransition_1:
	end

SilversunCity_OnTransition_2:
# 16 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxyperm 9, 48, 46
# 17 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxy 9, 48, 46
# 18 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 19 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
# 20 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_UP
	goto SilversunCity_OnTransition_1


SilversunCity_Sewers_NPC6::
# 38 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_NPC6_2
SilversunCity_Sewers_NPC6_1:
# 47 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_1, MSGBOX_NPC
	end

SilversunCity_Sewers_NPC6_2:
# 39 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 40 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 41 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_0
# 42 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 43 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 44 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	goto SilversunCity_Sewers_NPC6_1


SilversunCity_Sewers_ManLostWife_Trigger0::
# 52 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger0_1
	return

SilversunCity_Sewers_ManLostWife_Trigger0_1:
# 53 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 54 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_0
# 55 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 57 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 59 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_0
# 60 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 61 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 63 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_ManLostWife_Trigger1::
# 68 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger1_1
	return

SilversunCity_Sewers_ManLostWife_Trigger1_1:
# 69 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 70 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0
# 71 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 72 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 73 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_0
# 76 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 77 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 78 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_Duskull_Trigger0::
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 1
	goto_if_eq SilversunCity_Sewers_Duskull_Trigger0_2
SilversunCity_Sewers_Duskull_Trigger0_1:
	end

SilversunCity_Sewers_Duskull_Trigger0_2:
# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 86 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger0_Movement_0
# 87 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 88 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	goto SilversunCity_Sewers_Duskull_Trigger0_1


SilversunCity_Sewers_Duskull_Trigger1::
# 95 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 1
	goto_if_eq SilversunCity_Sewers_Duskull_Trigger1_2
SilversunCity_Sewers_Duskull_Trigger1_1:
	end

SilversunCity_Sewers_Duskull_Trigger1_2:
# 96 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger1_Movement_0
# 98 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	goto SilversunCity_Sewers_Duskull_Trigger1_1


SilversunCity_Sewers_Duskull_Trigger2::
# 105 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 1
	goto_if_eq SilversunCity_Sewers_Duskull_Trigger2_2
SilversunCity_Sewers_Duskull_Trigger2_1:
	end

SilversunCity_Sewers_Duskull_Trigger2_2:
# 106 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 107 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger2_Movement_0
# 108 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	goto SilversunCity_Sewers_Duskull_Trigger2_1


SilversunCity_Sewers_Duskull_Event::
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	special SpawnCameraObject
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SilversunCity_Sewers_Duskull_Event_Movement_0
# 120 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 121 "data//maps/SilversunCity_Sewers/scripts.pory"
	special RemoveCameraObject
# 123 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_1
# 124 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 125 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_0
# 126 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 15, SilversunCity_Sewers_Duskull_Event_Movement_2
# 130 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 131 "data//maps/SilversunCity_Sewers/scripts.pory"
	setwildbattle SPECIES_VAROOM, 25
# 132 "data//maps/SilversunCity_Sewers/scripts.pory"
	dowildbattle
# 133 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 135 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 15
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_3
# 140 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_1
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 142 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 3
# 143 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 144 "data//maps/SilversunCity_Sewers/scripts.pory"
	warp MAP_SILVERSUN_CITY_SEWERS, 49, 47
	return


SilversunCity_Sewers_Duskull_Event_Ending::
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxyperm 9, 48, 46
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxy 9, 48, 46
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_0
# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_1
# 157 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 160 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_0
# 161 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 162 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 163 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 164 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 165 "data//maps/SilversunCity_Sewers/scripts.pory"
	delay 30
# 166 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_1
# 167 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 168 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto TestScript_Sewers
	return


TestScript_Sewers::
# 172 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 173 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 174 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 1
# 175 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 9
# 176 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL
# 177 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_DUSKULL_NPCS
# 178 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 179 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 180 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC1::
# 200 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC2::
# 205 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC3::
# 210 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC3_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC4::
# 215 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC4_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC5::
# 221 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC5_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_Trainer_A::
# 239 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_Trainer_A_Text_0, SilversunCity_Sewers_Trainer_A_Text_1
# 240 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_A_Text_2
# 241 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 246 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_Trainer_B_Text_0, SilversunCity_Sewers_Trainer_B_Text_1
# 247 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_B_Text_2
# 248 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C::
# 253 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_C, SilversunCity_Sewers_Trainer_C_Text_0, SilversunCity_Sewers_Trainer_C_Text_1, SilversunCity_Sewers_Trainer_C_GiveItem
# 254 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_Text_2
# 255 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C_GiveItem::
# 260 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_GiveItem_Text_0
# 261 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 262 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_BLUE_FLUTE
# 263 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Market_A::
# 284 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 285 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 286 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_A_Text_0
# 287 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 288 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_A_Inventory
# 289 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_A_Text_1, MSGBOX_DEFAULT
# 290 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 294 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_A_Inventory:
# 295 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM16
# 296 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM21
# 297 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM36
# 298 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM41
# 299 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_B::
# 304 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 305 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 306 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_B_Text_0
# 307 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 308 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_B_Inventory
# 309 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_B_Text_1, MSGBOX_DEFAULT
# 310 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 314 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_B_Inventory:
# 315 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ZINC
# 316 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CARBOS
# 317 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_IRON
# 318 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CALCIUM
# 319 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PROTEIN
# 320 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_C::
# 325 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 326 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 327 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 328 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 329 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 330 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 331 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 335 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_C_Inventory:
# 336 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 337 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 338 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 339 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_LUSTER_STONE
# 340 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 341 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 342 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_D::
# 347 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_D_Text_0, MSGBOX_NPC
# 348 "data//maps/SilversunCity_Sewers/scripts.pory"
	end
# 351 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 352 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 353 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 354 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 355 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 356 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 357 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 361 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_D_Inventory:
# 362 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 363 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 364 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 365 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_LUSTER_STONE
# 366 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 367 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 368 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_Muk::
# 373 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 374 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 375 "data//maps/SilversunCity_Sewers/scripts.pory"
	playmoncry SPECIES_MUK, CRY_MODE_NORMAL
# 376 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_0
# 377 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 379 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_2
SilversunCity_Sewers_Market_Muk_1:
# 400 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end

SilversunCity_Sewers_Market_Muk_2:
# 380 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_1, MSGBOX_YESNO
# 381 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_4
	goto SilversunCity_Sewers_Market_Muk_1

SilversunCity_Sewers_Market_Muk_4:
# 382 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 3
# 383 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_6
# 394 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_4
# 395 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	goto SilversunCity_Sewers_Market_Muk_1

SilversunCity_Sewers_Market_Muk_6:
# 384 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_2
# 385 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 3
# 386 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 387 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_3
# 388 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 390 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 391 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 19
# 392 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto SilversunCity_Sewers_Market_Muk_1


# 54 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger0_Movement_0:
# 54 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1:
# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_up
	step_end

# 70 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0:
# 70 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
# 70 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 86 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger0_Movement_0:
# 86 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 86 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 86 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger1_Movement_0:
# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 107 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger2_Movement_0:
# 107 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 107 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_left
# 107 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_0:
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 123 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_1:
# 123 "data//maps/SilversunCity_Sewers/scripts.pory"
	jump_in_place_up
# 123 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_2:
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_3:
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_0:
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_left
	step_end

# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_1:
# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_right
	step_end

# 162 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_2:
# 162 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

SilversunCity_Sewers_NPC6_Text_0:
# 41 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey - are you a trainer? Look, I need\n"
	.string "your help. My wife and I came down here\l"
	.string "to buy some illegal -\p"
	.string "I mean some furniture. We came down to\n"
	.string "buy some furniture but we got\l"
	.string "separated and now I can't find her at\l"
	.string "all!\p"
	.string "I'm really worried. What if the SEWER\n"
	.string "SCOURGE gets her? Please help me find\l"
	.string "her!$"

SilversunCity_Sewers_NPC6_Text_1:
# 47 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Please hurry. I don't want her to be\n"
	.string "attacked by the SEWER SCOURGE!$"

SilversunCity_Sewers_Duskull_Event_Text_0:
# 125 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Eek! Help me! I can feel something\n"
	.string "attacking me!$"

SilversunCity_Sewers_Duskull_Event_Text_1:
# 140 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Is...is it gone?\p"
	.string "Oh my, you saved me! Thank you so much!\p"
	.string "I was so worried...I need to return to my\n"
	.string "husband quickly. He must be even more\l"
	.string "worried!\p"
	.string "He sent you?\p"
	.string "Okay, let's go to him together.$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_0:
# 160 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You're okay! I'm so glad you aren't hurt.\p"
	.string "This trainer here saved me. I felt\n"
	.string "something weird attacking me, honey! I\l"
	.string "think it might've been the SEWER\l"
	.string "SCOURGE. It was so scary!$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_1:
# 166 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "What's your name, trainer?\p"
	.string "{PLAYER}?\p"
	.string "We're in your debt. We can't imagine life\n"
	.string "without each other. Please come visit\l"
	.string "us in our house later. We live next to\l"
	.string "the Gym.$"

SilversunCity_Sewers_NPC1_Text_0:
# 200 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I bet there's no return policy on any\n"
	.string "defected products.$"

SilversunCity_Sewers_NPC2_Text_0:
# 205 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You see that giant filtration device? I\n"
	.string "was in charge of building it. My\l"
	.string "Magnemite and I worked tirelessly to\l"
	.string "finish it in time. It's our biggest\l"
	.string "accomplishment!$"

SilversunCity_Sewers_NPC3_Text_0:
# 210 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "There are some creepy-looking fellows\n"
	.string "up ahead. I think they're selling\l"
	.string "something illegal.$"

SilversunCity_Sewers_NPC4_Text_0:
# 215 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Don't tell anyone I'm here! I came to\n"
	.string "find a way to evolve my Scyther.$"

SilversunCity_Sewers_NPC5_Text_0:
# 221 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "All this toxic runoff gets filtered\n"
	.string "before entering the Hoya River. Then it\l"
	.string "goes south towards Pelluca City.$"

SilversunCity_Sewers_Trainer_A_Text_0:
# 239 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I'm not like the other rich kids at\n"
	.string "school, because I'm not afraid to get my\l"
	.string "hands dirty!$"

SilversunCity_Sewers_Trainer_A_Text_1:
# 239 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Your hands are dirty too!$"

SilversunCity_Sewers_Trainer_A_Text_2:
# 240 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came down here to catch some POISON\n"
	.string "type Pokémon to round out my team, but\l"
	.string "I should go back up now. This place\l"
	.string "stinks.$"

SilversunCity_Sewers_Trainer_B_Text_0:
# 246 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The resonance is strong here...the\n"
	.string "toxic water vapour wafts through your\l"
	.string "nostril...you are suspended...and about\l"
	.string "to lose!$"

SilversunCity_Sewers_Trainer_B_Text_1:
# 246 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The water stinks!$"

SilversunCity_Sewers_Trainer_B_Text_2:
# 247 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I thought the toxicity would help me\n"
	.string "ascend.$"

SilversunCity_Sewers_Trainer_C_Text_0:
# 253 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "This place has the best acoustics, man!\n"
	.string "Lemme show you!$"

SilversunCity_Sewers_Trainer_C_Text_1:
# 253 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Damn, my strings broke!$"

SilversunCity_Sewers_Trainer_C_Text_2:
# 254 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Man! You rock hard!$"

SilversunCity_Sewers_Trainer_C_GiveItem_Text_0:
# 260 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey you're a pretty rocking trainer. But\n"
	.string "you gotta wear it on your sleeves!\l"
	.string "You're probably not ready to rock out\l"
	.string "on an electric guitar yet, but why don't\l"
	.string "you take this Blue Flute? The\l"
	.string "instrument doesn't matter, man! It's all\l"
	.string "about the spirit.$"

SilversunCity_Sewers_Market_A_Text_0:
# 286 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Can't beat GLORIA? I'll hook you up with\n"
	.string "the best stuff.$"

SilversunCity_Sewers_Market_A_Text_1:
# 289 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Stay a loser then!$"

SilversunCity_Sewers_Market_B_Text_0:
# 306 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"

SilversunCity_Sewers_Market_B_Text_1:
# 309 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Then scram!$"

SilversunCity_Sewers_Market_C_Text_0:
# 327 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You look like you'd make good use of\n"
	.string "this stuff!$"

SilversunCity_Sewers_Market_C_Text_1:
# 330 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Quit wasting my time!$"

SilversunCity_Sewers_Market_D_Text_0:
# 347 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Trying to get something unsavoury, are\n"
	.string "we? Hehehe...$"

SilversunCity_Sewers_Market_Muk_Text_0:
# 376 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "It's a Muk! It's looking for junk to\n"
	.string "eat...its chomping on Bottle Caps!$"

SilversunCity_Sewers_Market_Muk_Text_1:
# 380 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Give Muk 3 Bottle Caps?$"

SilversunCity_Sewers_Market_Muk_Text_2:
# 384 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "{PLAYER} handed 3 Bottle Caps to Muk.\p"
	.string "Muk chomps down on them with joy!\p"
	.string "...\p"
	.string "It spits out something onto the floor.$"

SilversunCity_Sewers_Market_Muk_Text_3:
# 387 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Muk disappears into the sewers...$"

SilversunCity_Sewers_Market_Muk_Text_4:
# 394 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You don't have 3 Bottle Caps!$"
