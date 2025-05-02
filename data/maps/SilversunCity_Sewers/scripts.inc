SilversunCity_Sewers_MapScripts::
# 7 "data//maps/SilversunCity_Sewers/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SilversunCity_Sewers_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SilversunCity_Sewers_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data//maps/SilversunCity_Sewers/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SilversunCity_Sewers_Duskull_Event_Ending
	.2byte 0


SilversunCity_Sewers_NPC6::
# 14 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_NPC6_2
SilversunCity_Sewers_NPC6_1:
# 23 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_1, MSGBOX_NPC
	end

SilversunCity_Sewers_NPC6_2:
# 15 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 16 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 17 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_0
# 18 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 19 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 20 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	goto SilversunCity_Sewers_NPC6_1


SilversunCity_Sewers_ManLostWife_Trigger0::
# 28 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger0_1
	return

SilversunCity_Sewers_ManLostWife_Trigger0_1:
# 29 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 30 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_0
# 31 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 32 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 33 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 35 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_0
# 36 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 37 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 39 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_ManLostWife_Trigger1::
# 44 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger1_1
	return

SilversunCity_Sewers_ManLostWife_Trigger1_1:
# 45 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 46 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0
# 47 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 48 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 49 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 51 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_0
# 52 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 53 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 54 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_Duskull_Trigger0::
# 60 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 1
	goto_if_eq SilversunCity_Sewers_Duskull_Trigger0_2
SilversunCity_Sewers_Duskull_Trigger0_1:
	end

SilversunCity_Sewers_Duskull_Trigger0_2:
# 61 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger0_Movement_0
# 63 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 64 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	goto SilversunCity_Sewers_Duskull_Trigger0_1


SilversunCity_Sewers_Duskull_Trigger1::
# 71 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 1
	goto_if_eq SilversunCity_Sewers_Duskull_Trigger1_2
SilversunCity_Sewers_Duskull_Trigger1_1:
	end

SilversunCity_Sewers_Duskull_Trigger1_2:
# 72 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 73 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger1_Movement_0
# 74 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	goto SilversunCity_Sewers_Duskull_Trigger1_1


SilversunCity_Sewers_Duskull_Trigger2::
# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 1
	goto_if_eq SilversunCity_Sewers_Duskull_Trigger2_2
SilversunCity_Sewers_Duskull_Trigger2_1:
	end

SilversunCity_Sewers_Duskull_Trigger2_2:
# 82 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger2_Movement_0
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	goto SilversunCity_Sewers_Duskull_Trigger2_1


SilversunCity_Sewers_Duskull_Event::
# 94 "data//maps/SilversunCity_Sewers/scripts.pory"
	special SpawnCameraObject
# 95 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SilversunCity_Sewers_Duskull_Event_Movement_0
# 96 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
	special RemoveCameraObject
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_1
# 100 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 101 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_0
# 102 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 105 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 15, SilversunCity_Sewers_Duskull_Event_Movement_2
# 106 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 107 "data//maps/SilversunCity_Sewers/scripts.pory"
	setwildbattle SPECIES_VAROOM, 25
# 108 "data//maps/SilversunCity_Sewers/scripts.pory"
	dowildbattle
# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 111 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 15
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_3
# 116 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_1
# 117 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL_FIGHT_COMPLETE
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 3
# 120 "data//maps/SilversunCity_Sewers/scripts.pory"
	warp MAP_SILVERSUN_CITY_SEWERS, 49, 47
	return


SilversunCity_Sewers_Duskull_Event_Ending::
# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto_if_set FLAG_SEWERS_DUSKULL_FIGHT_COMPLETE, SilversunCity_Sewers_Duskull_Event_Ending_1
	end

SilversunCity_Sewers_Duskull_Event_Ending_1:
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto_if_set FLAG_SEWERS_DUSKULL, SilversunCity_Sewers_Duskull_Event_Ending_4
# 132 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 134 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxyperm 9, 48, 46
# 135 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxy 9, 48, 46
# 136 "data//maps/SilversunCity_Sewers/scripts.pory"
	addobject 9
# 137 "data//maps/SilversunCity_Sewers/scripts.pory"
	addobject 1
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_0
# 140 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_1
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 143 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_0
# 144 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 148 "data//maps/SilversunCity_Sewers/scripts.pory"
	delay 30
# 149 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_1
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_3
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_4
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 9
# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 1
# 157 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 9
# 158 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL
# 159 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_DUSKULL_NPCS
# 160 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
# 161 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
	end

SilversunCity_Sewers_Duskull_Event_Ending_4:
	end


SilversunCity_Sewers_NPC1::
# 186 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC2::
# 191 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC3::
# 196 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC3_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC4::
# 201 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC4_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC5::
# 207 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC5_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_Trainer_A::
# 225 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_Trainer_A_Text_0, SilversunCity_Sewers_Trainer_A_Text_1
# 226 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_A_Text_2
# 227 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 232 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_Trainer_B_Text_0, SilversunCity_Sewers_Trainer_B_Text_1
# 233 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_B_Text_2
# 234 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C::
# 239 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_C, SilversunCity_Sewers_Trainer_C_Text_0, SilversunCity_Sewers_Trainer_C_Text_1, SilversunCity_Sewers_Trainer_C_GiveItem
# 240 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_Text_2
# 241 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C_GiveItem::
# 246 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_GiveItem_Text_0
# 247 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 248 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_BLUE_FLUTE
# 249 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NoEmblem::
# 270 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NoEmblem_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_Market_A::
# 277 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_SMUGGLER_EMBLEM
# 278 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Sewers_Market_A_2
SilversunCity_Sewers_Market_A_1:
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

SilversunCity_Sewers_Market_A_2:
# 279 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_NoEmblem
	goto SilversunCity_Sewers_Market_A_1


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
	.2byte ITEM_TM42
# 297 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_B::
# 302 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_SMUGGLER_EMBLEM
# 303 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Sewers_Market_B_2
SilversunCity_Sewers_Market_B_1:
# 307 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 308 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 309 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_B_Text_0
# 310 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 311 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_B_Inventory
# 312 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_B_Text_1, MSGBOX_DEFAULT
# 313 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end

SilversunCity_Sewers_Market_B_2:
# 304 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_NoEmblem
	goto SilversunCity_Sewers_Market_B_1


	.align 2
# 317 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_B_Inventory:
# 318 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ZINC
# 319 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CARBOS
# 320 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_IRON
# 321 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CALCIUM
# 322 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PROTEIN
# 323 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_C::
# 328 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_SMUGGLER_EMBLEM
# 329 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Sewers_Market_C_2
SilversunCity_Sewers_Market_C_1:
# 333 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 334 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 335 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 336 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 337 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 338 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 339 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end

SilversunCity_Sewers_Market_C_2:
# 330 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_NoEmblem
	goto SilversunCity_Sewers_Market_C_1


	.align 2
# 343 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_C_Inventory:
# 344 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 345 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_METAL_COAT
# 346 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 347 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 348 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_D::
# 353 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_D_Text_0, MSGBOX_NPC
# 354 "data//maps/SilversunCity_Sewers/scripts.pory"
	end
# 357 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 358 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 359 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 360 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 361 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 362 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 363 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 367 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_D_Inventory:
# 368 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 369 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_METAL_COAT
# 370 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 371 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 372 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_Muk::
# 377 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 378 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 379 "data//maps/SilversunCity_Sewers/scripts.pory"
	playmoncry SPECIES_MUK, CRY_MODE_NORMAL
# 380 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_0
# 382 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 383 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_2
SilversunCity_Sewers_Market_Muk_1:
# 401 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end

SilversunCity_Sewers_Market_Muk_2:
# 385 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_1, MSGBOX_YESNO
# 386 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_4
	goto SilversunCity_Sewers_Market_Muk_1

SilversunCity_Sewers_Market_Muk_4:
# 388 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_2
# 389 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeitem ITEM_BOTTLE_CAP
# 390 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 391 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_3
# 392 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 394 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 395 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 19
# 396 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto SilversunCity_Sewers_Market_Muk_1


# 30 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger0_Movement_0:
# 30 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 32 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1:
# 32 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_up
	step_end

# 46 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0:
# 46 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
# 46 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger0_Movement_0:
# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 73 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger1_Movement_0:
# 73 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger2_Movement_0:
# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_left
# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 95 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_0:
# 95 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 95 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_1:
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	jump_in_place_up
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 105 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_2:
# 105 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 105 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_3:
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
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

# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_2:
# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_3:
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_4:
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

SilversunCity_Sewers_NPC6_Text_0:
# 17 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey - are you a trainer? Look, I need\n"
	.string "your help. My wife and I came down here\l"
	.string "to buy some illegal -\p"
	.string "I mean some furniture. We came down to\n"
	.string "buy some furniture but we got\l"
	.string "separated and now I can't find her at\l"
	.string "all!\p"
	.string "I'm really worried. What if the Sewer\n"
	.string "Scourge gets her? Please help me find\l"
	.string "her!$"

SilversunCity_Sewers_NPC6_Text_1:
# 23 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Please hurry. I don't want her to be\n"
	.string "attacked by the Sewer Scourge!$"

SilversunCity_Sewers_Duskull_Event_Text_0:
# 101 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Eek! Help me! I can feel something\n"
	.string "attacking me!$"

SilversunCity_Sewers_Duskull_Event_Text_1:
# 116 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Is...is it gone?\p"
	.string "Oh my, you saved me! Thank you so much!\p"
	.string "I was so worried...I need to return to my\n"
	.string "husband quickly. He must be even more\l"
	.string "worried!\p"
	.string "He sent you?\p"
	.string "Okay, let's go to him together.$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_0:
# 143 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You're okay! I'm so glad you aren't hurt.\p"
	.string "This trainer here saved me. I felt\n"
	.string "something weird attacking me, honey! I\l"
	.string "think it might've been the Sewer\l"
	.string "Scourge. It was so scary!$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_1:
# 149 "data//maps/SilversunCity_Sewers/scripts.pory"
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
# 191 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You see that giant filtration device? I\n"
	.string "was in charge of building it. My\l"
	.string "Magnemite and I worked tirelessly to\l"
	.string "finish it in time. It's our biggest\l"
	.string "accomplishment!$"

SilversunCity_Sewers_NPC3_Text_0:
# 196 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "There are some creepy-looking fellows\n"
	.string "up ahead. I think they're selling\l"
	.string "something illegal, but they won't sell to\l"
	.string "anyone who doesn't have some type of\l"
	.string "emblem. It's like a secret society!$"

SilversunCity_Sewers_NPC4_Text_0:
# 201 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came to find a way to evolve my\n"
	.string "Scyther, but nobody's selling me\l"
	.string "anything! Apparently they need an\l"
	.string "emblem or something to prove we're good\l"
	.string "for our word.$"

SilversunCity_Sewers_NPC5_Text_0:
# 207 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "All this toxic runoff gets filtered\n"
	.string "before entering the Hoya River. Then it\l"
	.string "goes south towards Pelluca City.$"

SilversunCity_Sewers_Trainer_A_Text_0:
# 225 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I'm not like the other rich kids at\n"
	.string "school, because I'm not afraid to get my\l"
	.string "hands dirty!$"

SilversunCity_Sewers_Trainer_A_Text_1:
# 225 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Your hands are dirty too!$"

SilversunCity_Sewers_Trainer_A_Text_2:
# 226 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came down here to catch some POISON\n"
	.string "type Pokémon to round out my team, but\l"
	.string "I should go back up now. This place\l"
	.string "stinks.$"

SilversunCity_Sewers_Trainer_B_Text_0:
# 232 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The resonance is strong here...the\n"
	.string "toxic water vapour wafts through your\l"
	.string "nostril...you are suspended...and about\l"
	.string "to lose!$"

SilversunCity_Sewers_Trainer_B_Text_1:
# 232 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The water stinks!$"

SilversunCity_Sewers_Trainer_B_Text_2:
# 233 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I thought the toxicity would help me\n"
	.string "ascend.$"

SilversunCity_Sewers_Trainer_C_Text_0:
# 239 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "This place has the best acoustics, man!\n"
	.string "Lemme show you!$"

SilversunCity_Sewers_Trainer_C_Text_1:
# 239 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Damn, my strings broke!$"

SilversunCity_Sewers_Trainer_C_Text_2:
# 240 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Man! You rock hard!$"

SilversunCity_Sewers_Trainer_C_GiveItem_Text_0:
# 246 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey you're a pretty rocking trainer. But\n"
	.string "you gotta wear it on your sleeves!\l"
	.string "You're probably not ready to rock out\l"
	.string "on an electric guitar yet, but why don't\l"
	.string "you take this Blue Flute? The\l"
	.string "instrument doesn't matter, man! It's all\l"
	.string "about the spirit.$"

SilversunCity_Sewers_NoEmblem_Text_0:
# 270 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "What are you looking at? Are you a cop?\n"
	.string "I'm not selling anything.\p"
	.string "...\p"
	.string "What about all this stuff on the table?\n"
	.string "I'm just displaying them. It's not for\l"
	.string "sale. Haha!$"

SilversunCity_Sewers_Market_A_Text_0:
# 284 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Can't beat Gloria? I'll hook you up with\n"
	.string "the best stuff.$"

SilversunCity_Sewers_Market_A_Text_1:
# 287 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Stay a loser then!$"

SilversunCity_Sewers_Market_B_Text_0:
# 309 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"

SilversunCity_Sewers_Market_B_Text_1:
# 312 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Then scram!$"

SilversunCity_Sewers_Market_C_Text_0:
# 335 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You look like you'd make good use of\n"
	.string "this stuff!$"

SilversunCity_Sewers_Market_C_Text_1:
# 338 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Quit wasting my time!$"

SilversunCity_Sewers_Market_D_Text_0:
# 353 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Trying to get something unsavoury, are\n"
	.string "we? Hehehe...$"

SilversunCity_Sewers_Market_Muk_Text_0:
# 380 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "It's a Muk! It's looking for junk to\n"
	.string "eat...its chomping on Trash!$"

SilversunCity_Sewers_Market_Muk_Text_1:
# 385 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Give Muk some Trash?$"

SilversunCity_Sewers_Market_Muk_Text_2:
# 388 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "{PLAYER} handed some Trash to Muk.\p"
	.string "Muk chomps down on it with joy!\p"
	.string "...\p"
	.string "It spits out something onto the floor.$"

SilversunCity_Sewers_Market_Muk_Text_3:
# 391 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Muk disappears into the sewers...$"
