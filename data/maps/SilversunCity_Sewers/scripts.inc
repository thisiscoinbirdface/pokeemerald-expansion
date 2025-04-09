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
	lockall
# 39 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 40 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_0
# 41 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_ManLostWife_Trigger0::
# 46 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger0_1
	return

SilversunCity_Sewers_ManLostWife_Trigger0_1:
# 47 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 48 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_0
# 49 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 50 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 51 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 53 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_ManLostWife_Trigger0_Text_0
# 54 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 55 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 57 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_ManLostWife_Trigger1::
# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger1_1
	return

SilversunCity_Sewers_ManLostWife_Trigger1_1:
# 63 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 64 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0
# 65 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 66 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 69 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_ManLostWife_Trigger0_Text_0
# 70 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 71 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 72 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_Duskull_Trigger0::
# 77 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 78 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger0_Movement_0
# 79 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 80 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger1::
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger1_Movement_0
# 86 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 87 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger2::
# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger2_Movement_0
# 93 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 94 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Event::
# 101 "data//maps/SilversunCity_Sewers/scripts.pory"
	special SpawnCameraObject
# 102 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SilversunCity_Sewers_Duskull_Event_Movement_0
# 103 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 104 "data//maps/SilversunCity_Sewers/scripts.pory"
	special RemoveCameraObject
# 106 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_1
# 107 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 108 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_0
# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 15, SilversunCity_Sewers_Duskull_Event_Movement_2
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	setwildbattle SPECIES_VAROOM, 25
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	dowildbattle
# 116 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 15
# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_3
# 123 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_1
# 124 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 125 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 3
# 126 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 127 "data//maps/SilversunCity_Sewers/scripts.pory"
	warp MAP_SILVERSUN_CITY_SEWERS, 49, 47
# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_SEWERS_DUSKULL
	return


SilversunCity_Sewers_Duskull_Event_Ending::
# 135 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 137 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxyperm 9, 48, 46
# 138 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxy 9, 48, 46
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_0
# 140 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_1
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 144 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_0
# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 148 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 149 "data//maps/SilversunCity_Sewers/scripts.pory"
	delay 30
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_1
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto TestScript_Sewers
	return


TestScript_Sewers::
# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 157 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 158 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 1
# 159 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 9
# 160 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL
# 161 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_DUSKULL_NPCS
# 162 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 163 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 164 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC1::
# 184 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 185 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 186 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 187 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC2::
# 192 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 193 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC2_Text_0
# 194 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC3::
# 199 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 200 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 201 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC3_Text_0
# 202 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC4::
# 207 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 208 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 209 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC4_Text_0
# 210 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC5::
# 216 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 217 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 218 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC5_Text_0
# 219 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_A::
# 237 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_Trainer_A_Text_0, SilversunCity_Sewers_Trainer_A_Text_1
# 238 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_A_Text_2
# 239 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 244 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_Trainer_B_Text_0, SilversunCity_Sewers_Trainer_B_Text_1
# 245 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_B_Text_2
# 246 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C::
# 251 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_C, SilversunCity_Sewers_Trainer_C_Text_0, SilversunCity_Sewers_Trainer_C_Text_1, SilversunCity_Sewers_Trainer_C_GiveItem
# 252 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_Text_2
# 253 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C_GiveItem::
# 258 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_GiveItem_Text_0
# 259 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 260 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_BLUE_FLUTE
# 261 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Market_A::
# 282 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 283 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 284 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_A_Text_0
# 285 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 286 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_A_Inventory
# 287 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_A_Text_1, MSGBOX_DEFAULT
# 288 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 292 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_A_Inventory:
# 293 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM16
# 294 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM21
# 295 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM36
# 296 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM41
# 297 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_B::
# 302 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 303 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 304 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_B_Text_0
# 305 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 306 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_B_Inventory
# 307 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_B_Text_1, MSGBOX_DEFAULT
# 308 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 312 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_B_Inventory:
# 313 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ZINC
# 314 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CARBOS
# 315 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_IRON
# 316 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CALCIUM
# 317 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PROTEIN
# 318 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_C::
# 323 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 324 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 325 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 326 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 327 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 328 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 329 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 333 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_C_Inventory:
# 334 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 335 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 336 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 337 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_LUSTER_STONE
# 338 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_Muk::
# 343 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 344 "data//maps/SilversunCity_Sewers/scripts.pory"
	playmoncry SPECIES_MUK, CRY_MODE_NORMAL
# 345 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_0
# 346 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 348 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_2
SilversunCity_Sewers_Market_Muk_1:
# 369 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end

SilversunCity_Sewers_Market_Muk_2:
# 349 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_1, MSGBOX_YESNO
# 350 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_4
	goto SilversunCity_Sewers_Market_Muk_1

SilversunCity_Sewers_Market_Muk_4:
# 351 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 3
# 352 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_6
# 363 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_4
# 364 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	goto SilversunCity_Sewers_Market_Muk_1

SilversunCity_Sewers_Market_Muk_6:
# 353 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_2
# 354 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 3
# 355 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 356 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_3
# 357 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 359 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 360 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 19
# 361 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto SilversunCity_Sewers_Market_Muk_1


# 48 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger0_Movement_0:
# 48 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 50 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1:
# 50 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_up
	step_end

# 64 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0:
# 64 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
# 64 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 78 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger0_Movement_0:
# 78 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 78 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 78 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger1_Movement_0:
# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger2_Movement_0:
# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_left
# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 102 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_0:
# 102 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 102 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 106 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_1:
# 106 "data//maps/SilversunCity_Sewers/scripts.pory"
	jump_in_place_up
# 106 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_2:
# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_3:
# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_0:
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_left
	step_end

# 140 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_1:
# 140 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_right
	step_end

# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_2:
# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

SilversunCity_Sewers_NPC6_Text_0:
# 40 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Please hurry. I don't want her to be\n"
	.string "attacked by the SEWER SCOURGE!$"

SilversunCity_Sewers_ManLostWife_Trigger0_Text_0:
# 53 "data//maps/SilversunCity_Sewers/scripts.pory"
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

SilversunCity_Sewers_Duskull_Event_Text_0:
# 108 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Eek! Help me! I can feel something\n"
	.string "attacking me!$"

SilversunCity_Sewers_Duskull_Event_Text_1:
# 123 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Is...is it gone?\p"
	.string "Oh my, you saved me! Thank you so much!\p"
	.string "I was so worried...I need to return to my\n"
	.string "husband quickly. He must be even more\l"
	.string "worried!\p"
	.string "He sent you?\p"
	.string "Okay, let's go to him together.$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_0:
# 144 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You're okay! I'm so glad you aren't hurt.\p"
	.string "This trainer here saved me. I felt\n"
	.string "something weird attacking me, honey! I\l"
	.string "think it might've been the SEWER\l"
	.string "SCOURGE. It was so scary!$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_1:
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "What's your name, trainer?\p"
	.string "{PLAYER}?\p"
	.string "We're in your debt. We can't imagine life\n"
	.string "without each other. Please come visit\l"
	.string "us in our house later. We live next to\l"
	.string "the Gym.$"

SilversunCity_Sewers_NPC1_Text_0:
# 186 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I bet there's no return policy on any\n"
	.string "defected products.$"

SilversunCity_Sewers_NPC2_Text_0:
# 193 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You see that giant filtration device? I\n"
	.string "was in charge of building it. My\l"
	.string "MAGNEMITE and I worked tirelessly to\l"
	.string "finish it in time. It's our biggest\l"
	.string "accomplishment!$"

SilversunCity_Sewers_NPC3_Text_0:
# 201 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "There are some creepy-looking fellows\n"
	.string "up ahead. I think they're selling\l"
	.string "something illegal.$"

SilversunCity_Sewers_NPC4_Text_0:
# 209 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Don't tell anyone I'm here! I came to\n"
	.string "find a way to evolve my SCYTHER.$"

SilversunCity_Sewers_NPC5_Text_0:
# 218 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "All this toxic runoff gets filtered\n"
	.string "before entering the Hoya River. Then it\l"
	.string "goes south towards Pelluca City.$"

SilversunCity_Sewers_Trainer_A_Text_0:
# 237 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I'm not like the other rich kids at\n"
	.string "school, because I'm not afraid to get my\l"
	.string "hands dirty!$"

SilversunCity_Sewers_Trainer_A_Text_1:
# 237 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Your hands are dirty too!$"

SilversunCity_Sewers_Trainer_A_Text_2:
# 238 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came down here to catch some POISON\n"
	.string "type Pokemon to round out my team, but\l"
	.string "I should go back up now. This place\l"
	.string "stinks.$"

SilversunCity_Sewers_Trainer_B_Text_0:
# 244 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The resonance is strong here...the\n"
	.string "toxic water vapour wafts through your\l"
	.string "nostril...you are suspended...and about\l"
	.string "to lose!$"

SilversunCity_Sewers_Trainer_B_Text_1:
# 244 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The water stinks!$"

SilversunCity_Sewers_Trainer_B_Text_2:
# 245 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I thought the toxicity would help me\n"
	.string "ascend.$"

SilversunCity_Sewers_Trainer_C_Text_0:
# 251 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "This place has the best acoustics, man!\n"
	.string "Lemme show you!$"

SilversunCity_Sewers_Trainer_C_Text_1:
# 251 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Damn, my strings broke!$"

SilversunCity_Sewers_Trainer_C_Text_2:
# 252 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Man! You rock hard!$"

SilversunCity_Sewers_Trainer_C_GiveItem_Text_0:
# 258 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey you're a pretty rocking trainer. But\n"
	.string "you gotta wear it on your sleeves!\l"
	.string "You're probably not ready to rock out\l"
	.string "on an electric guitar yet, but why don't\l"
	.string "you take this Blue Flute? The\l"
	.string "instrument doesn't matter, man! It's all\l"
	.string "about the spirit.$"

SilversunCity_Sewers_Market_A_Text_0:
# 284 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Can't beat GLORIA? I'll hook you up with\n"
	.string "the best stuff.$"

SilversunCity_Sewers_Market_A_Text_1:
# 287 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Stay a loser then!$"

SilversunCity_Sewers_Market_B_Text_0:
# 304 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"

SilversunCity_Sewers_Market_B_Text_1:
# 307 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Then scram!$"

SilversunCity_Sewers_Market_C_Text_0:
# 325 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You look like you'd make good use of\n"
	.string "this stuff!$"

SilversunCity_Sewers_Market_C_Text_1:
# 328 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Quit wasting my time!$"

SilversunCity_Sewers_Market_Muk_Text_0:
# 345 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "It's a Muk! It's looking for junk to\n"
	.string "eat...its chomping on Bottle Caps!$"

SilversunCity_Sewers_Market_Muk_Text_1:
# 349 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Give Muk 3 Bottle Caps?$"

SilversunCity_Sewers_Market_Muk_Text_2:
# 353 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "{PLAYER} handed 3 Bottle Caps to Muk.\p"
	.string "Muk chomps down on them with joy!\p"
	.string "...\p"
	.string "It spits out something onto the floor.$"

SilversunCity_Sewers_Market_Muk_Text_3:
# 356 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Muk disappears into the sewers...$"

SilversunCity_Sewers_Market_Muk_Text_4:
# 363 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You don't have 3 Bottle Caps!$"
