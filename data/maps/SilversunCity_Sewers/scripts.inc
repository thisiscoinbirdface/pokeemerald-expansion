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
# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger0_Movement_0
# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 86 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger1::
# 90 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger1_Movement_0
# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 93 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger2::
# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 98 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger2_Movement_0
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 100 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Event::
# 107 "data//maps/SilversunCity_Sewers/scripts.pory"
	special SpawnCameraObject
# 108 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SilversunCity_Sewers_Duskull_Event_Movement_0
# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 110 "data//maps/SilversunCity_Sewers/scripts.pory"
	special RemoveCameraObject
# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_1
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_0
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 15, SilversunCity_Sewers_Duskull_Event_Movement_2
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 120 "data//maps/SilversunCity_Sewers/scripts.pory"
	setwildbattle SPECIES_VAROOM, 25
# 121 "data//maps/SilversunCity_Sewers/scripts.pory"
	dowildbattle
# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 124 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 15
# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_3
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_1
# 130 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 131 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 3
# 132 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 133 "data//maps/SilversunCity_Sewers/scripts.pory"
	warp MAP_SILVERSUN_CITY_SEWERS, 49, 47
# 134 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL
	return


SilversunCity_Sewers_Duskull_Event_Ending::
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 143 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxyperm 9, 48, 46
# 144 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxy 9, 48, 46
# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_0
# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_1
# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_0
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	delay 30
# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_1
# 157 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 158 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto TestScript_Sewers
	return


TestScript_Sewers::
# 162 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 163 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 1
# 165 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 9
# 166 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL
# 167 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_DUSKULL_NPCS
# 168 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 169 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 170 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC1::
# 190 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC2::
# 195 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC3::
# 200 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC3_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC4::
# 205 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC4_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC5::
# 211 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC5_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_Trainer_A::
# 229 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_Trainer_A_Text_0, SilversunCity_Sewers_Trainer_A_Text_1
# 230 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_A_Text_2
# 231 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 236 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_Trainer_B_Text_0, SilversunCity_Sewers_Trainer_B_Text_1
# 237 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_B_Text_2
# 238 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C::
# 243 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_C, SilversunCity_Sewers_Trainer_C_Text_0, SilversunCity_Sewers_Trainer_C_Text_1, SilversunCity_Sewers_Trainer_C_GiveItem
# 244 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_Text_2
# 245 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C_GiveItem::
# 250 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_GiveItem_Text_0
# 251 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 252 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_BLUE_FLUTE
# 253 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Market_A::
# 274 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 275 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 276 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_A_Text_0
# 277 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 278 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_A_Inventory
# 279 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_A_Text_1, MSGBOX_DEFAULT
# 280 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 284 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_A_Inventory:
# 285 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM16
# 286 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM21
# 287 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM36
# 288 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM41
# 289 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_B::
# 294 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 295 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 296 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_B_Text_0
# 297 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 298 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_B_Inventory
# 299 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_B_Text_1, MSGBOX_DEFAULT
# 300 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 304 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_B_Inventory:
# 305 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ZINC
# 306 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CARBOS
# 307 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_IRON
# 308 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CALCIUM
# 309 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PROTEIN
# 310 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_C::
# 315 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 316 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 317 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 318 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 319 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 320 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 321 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 325 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_C_Inventory:
# 326 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 327 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 328 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 329 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_LUSTER_STONE
# 330 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 331 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 332 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_D::
# 337 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_D_Text_0, MSGBOX_NPC
# 338 "data//maps/SilversunCity_Sewers/scripts.pory"
	end
# 341 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 342 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 343 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 344 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 345 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 346 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 347 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 351 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_D_Inventory:
# 352 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 353 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 354 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 355 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_LUSTER_STONE
# 356 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 357 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 358 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_Muk::
# 363 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 364 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 365 "data//maps/SilversunCity_Sewers/scripts.pory"
	playmoncry SPECIES_MUK, CRY_MODE_NORMAL
# 366 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_0
# 367 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 369 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_2
SilversunCity_Sewers_Market_Muk_1:
# 390 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end

SilversunCity_Sewers_Market_Muk_2:
# 370 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_1, MSGBOX_YESNO
# 371 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_4
	goto SilversunCity_Sewers_Market_Muk_1

SilversunCity_Sewers_Market_Muk_4:
# 372 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 3
# 373 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_6
# 384 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_4
# 385 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	goto SilversunCity_Sewers_Market_Muk_1

SilversunCity_Sewers_Market_Muk_6:
# 374 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_2
# 375 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 3
# 376 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 377 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_3
# 378 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 380 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 381 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 19
# 382 "data//maps/SilversunCity_Sewers/scripts.pory"
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

# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger0_Movement_0:
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger1_Movement_0:
# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 98 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger2_Movement_0:
# 98 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 98 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_left
# 98 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 108 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_0:
# 108 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 108 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_1:
# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
	jump_in_place_up
# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_2:
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_3:
# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_0:
# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_left
	step_end

# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_1:
# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_right
	step_end

# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_2:
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
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
	.string "I'm really worried. What if the SEWEK\n"
	.string "SCOURGE gets her? Please help me find\l"
	.string "her!$"

SilversunCity_Sewers_NPC6_Text_1:
# 47 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Please hurry. I don't want her to be\n"
	.string "attacked by the SEWER SCOURGE!$"

SilversunCity_Sewers_Duskull_Event_Text_0:
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Eek! Help me! I can feel something\n"
	.string "attacking me!$"

SilversunCity_Sewers_Duskull_Event_Text_1:
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Is...is it gone?\p"
	.string "Oh my, you saved me! Thank you so much!\p"
	.string "I was so worried...I need to return to my\n"
	.string "husband quickly. He must be even more\l"
	.string "worried!\p"
	.string "He sent you?\p"
	.string "Okay, let's go to him together.$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_0:
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You're okay! I'm so glad you aren't hurt.\p"
	.string "This trainer here saved me. I felt\n"
	.string "something weird attacking me, honey! I\l"
	.string "think it might've been the SEWER\l"
	.string "SCOURGE. It was so scary!$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_1:
# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "What's your name, trainer?\p"
	.string "{PLAYER}?\p"
	.string "We're in your debt. We can't imagine life\n"
	.string "without each other. Please come visit\l"
	.string "us in our house later. We live next to\l"
	.string "the Gym.$"

SilversunCity_Sewers_NPC1_Text_0:
# 190 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I bet there's no return policy on any\n"
	.string "defected products.$"

SilversunCity_Sewers_NPC2_Text_0:
# 195 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You see that giant filtration device? I\n"
	.string "was in charge of building it. My\l"
	.string "Magnemite and I worked tirelessly to\l"
	.string "finish it in time. It's our biggest\l"
	.string "accomplishment!$"

SilversunCity_Sewers_NPC3_Text_0:
# 200 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "There are some creepy-looking fellows\n"
	.string "up ahead. I think they're selling\l"
	.string "something illegal.$"

SilversunCity_Sewers_NPC4_Text_0:
# 205 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Don't tell anyone I'm here! I came to\n"
	.string "find a way to evolve my Scyther.$"

SilversunCity_Sewers_NPC5_Text_0:
# 211 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "All this toxic runoff gets filtered\n"
	.string "before entering the Hoya River. Then it\l"
	.string "goes south towards Pelluca City.$"

SilversunCity_Sewers_Trainer_A_Text_0:
# 229 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I'm not like the other rich kids at\n"
	.string "school, because I'm not afraid to get my\l"
	.string "hands dirty!$"

SilversunCity_Sewers_Trainer_A_Text_1:
# 229 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Your hands are dirty too!$"

SilversunCity_Sewers_Trainer_A_Text_2:
# 230 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came down here to catch some POISON\n"
	.string "type Pokémon to round out my team, but\l"
	.string "I should go back up now. This place\l"
	.string "stinks.$"

SilversunCity_Sewers_Trainer_B_Text_0:
# 236 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The resonance is strong here...the\n"
	.string "toxic water vapour wafts through your\l"
	.string "nostril...you are suspended...and about\l"
	.string "to lose!$"

SilversunCity_Sewers_Trainer_B_Text_1:
# 236 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The water stinks!$"

SilversunCity_Sewers_Trainer_B_Text_2:
# 237 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I thought the toxicity would help me\n"
	.string "ascend.$"

SilversunCity_Sewers_Trainer_C_Text_0:
# 243 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "This place has the best acoustics, man!\n"
	.string "Lemme show you!$"

SilversunCity_Sewers_Trainer_C_Text_1:
# 243 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Damn, my strings broke!$"

SilversunCity_Sewers_Trainer_C_Text_2:
# 244 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Man! You rock hard!$"

SilversunCity_Sewers_Trainer_C_GiveItem_Text_0:
# 250 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey you're a pretty rocking trainer. But\n"
	.string "you gotta wear it on your sleeves!\l"
	.string "You're probably not ready to rock out\l"
	.string "on an electric guitar yet, but why don't\l"
	.string "you take this Blue Flute? The\l"
	.string "instrument doesn't matter, man! It's all\l"
	.string "about the spirit.$"

SilversunCity_Sewers_Market_A_Text_0:
# 276 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Can't beat GLORIA? I'll hook you up with\n"
	.string "the best stuff.$"

SilversunCity_Sewers_Market_A_Text_1:
# 279 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Stay a loser then!$"

SilversunCity_Sewers_Market_B_Text_0:
# 296 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"

SilversunCity_Sewers_Market_B_Text_1:
# 299 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Then scram!$"

SilversunCity_Sewers_Market_C_Text_0:
# 317 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You look like you'd make good use of\n"
	.string "this stuff!$"

SilversunCity_Sewers_Market_C_Text_1:
# 320 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Quit wasting my time!$"

SilversunCity_Sewers_Market_D_Text_0:
# 337 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Trying to get something unsavoury, are\n"
	.string "we? Hehehe...$"

SilversunCity_Sewers_Market_Muk_Text_0:
# 366 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "It's a Muk! It's looking for junk to\n"
	.string "eat...its chomping on Bottle Caps!$"

SilversunCity_Sewers_Market_Muk_Text_1:
# 370 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Give Muk 3 Bottle Caps?$"

SilversunCity_Sewers_Market_Muk_Text_2:
# 374 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "{PLAYER} handed 3 Bottle Caps to Muk.\p"
	.string "Muk chomps down on them with joy!\p"
	.string "...\p"
	.string "It spits out something onto the floor.$"

SilversunCity_Sewers_Market_Muk_Text_3:
# 377 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Muk disappears into the sewers...$"

SilversunCity_Sewers_Market_Muk_Text_4:
# 384 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You don't have 3 Bottle Caps!$"
