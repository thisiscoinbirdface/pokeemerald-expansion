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
	msgbox SilversunCity_Sewers_ManLostWife_Trigger1_Text_0
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
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	delay 16
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_3
# 116 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 117 "data//maps/SilversunCity_Sewers/scripts.pory"
	delay 16
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_1
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 120 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL_FIGHT_COMPLETE
# 121 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 3
# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
	warp MAP_SILVERSUN_CITY_SEWERS, 49, 47
	return


SilversunCity_Sewers_Duskull_Event_Ending::
# 130 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto_if_set FLAG_SEWERS_DUSKULL_FIGHT_COMPLETE, SilversunCity_Sewers_Duskull_Event_Ending_1
	end

SilversunCity_Sewers_Duskull_Event_Ending_1:
# 131 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto_if_set FLAG_SEWERS_DUSKULL, SilversunCity_Sewers_Duskull_Event_Ending_4
# 134 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 136 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxyperm 9, 48, 46
# 137 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxy 9, 48, 46
# 138 "data//maps/SilversunCity_Sewers/scripts.pory"
	addobject 9
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
	addobject 1
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_0
# 142 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_1
# 143 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_0
# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 148 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 149 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	delay 30
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_1
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_3
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_4
# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 9
# 158 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 1
# 159 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 9
# 160 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL
# 161 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_DUSKULL_NPCS
# 162 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
# 163 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
	end

SilversunCity_Sewers_Duskull_Event_Ending_4:
	end


SilversunCity_Sewers_NPC1::
# 188 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC2::
# 193 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_Electrode::
# 197 "data//maps/SilversunCity_Sewers/scripts.pory"
	playmoncry SPECIES_ELECTRODE_HISUI, CRY_MODE_NORMAL
# 198 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Electrode_Text_0, MSGBOX_NPC
# 199 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


SilversunCity_Sewers_NPC3::
# 204 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC3_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC4::
# 209 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC4_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_NPC5::
# 215 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC5_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_Trainer_A::
# 233 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_Trainer_A_Text_0, SilversunCity_Sewers_Trainer_A_Text_1
# 234 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_A_Text_2
# 235 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 240 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_Trainer_B_Text_0, SilversunCity_Sewers_Trainer_B_Text_1
# 241 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_B_Text_2
# 242 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C::
# 247 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_C, SilversunCity_Sewers_Trainer_C_Text_0, SilversunCity_Sewers_Trainer_C_Text_1, SilversunCity_Sewers_Trainer_C_GiveItem
# 248 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_Text_2
# 249 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C_GiveItem::
# 254 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_GiveItem_Text_0
# 255 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 256 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_BLUE_FLUTE
# 257 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NoEmblem::
# 278 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NoEmblem_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_Market_A::
# 285 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_SMUGGLER_EMBLEM
# 286 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Sewers_Market_A_2
SilversunCity_Sewers_Market_A_1:
# 290 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 291 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 292 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_A_Text_0
# 293 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 294 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_A_Inventory
# 295 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_A_Text_1, MSGBOX_DEFAULT
# 296 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end

SilversunCity_Sewers_Market_A_2:
# 287 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_NoEmblem
	goto SilversunCity_Sewers_Market_A_1


	.align 2
# 300 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_A_Inventory:
# 301 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM66
# 302 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM11
# 303 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM72
# 304 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM70
# 305 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM07
# 306 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM44
# 307 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM49
# 308 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM77
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_B::
# 313 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_SMUGGLER_EMBLEM
# 314 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Sewers_Market_B_2
SilversunCity_Sewers_Market_B_1:
# 318 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 319 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 320 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_B_Text_0
# 321 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 322 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_B_Inventory
# 323 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_B_Text_1, MSGBOX_DEFAULT
# 324 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end

SilversunCity_Sewers_Market_B_2:
# 315 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_NoEmblem
	goto SilversunCity_Sewers_Market_B_1


	.align 2
# 328 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_B_Inventory:
# 329 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ZINC
# 330 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CARBOS
# 331 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_IRON
# 332 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CALCIUM
# 333 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PROTEIN
# 334 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_C::
# 339 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_SMUGGLER_EMBLEM
# 340 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Sewers_Market_C_2
SilversunCity_Sewers_Market_C_1:
# 344 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 345 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 346 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 347 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 348 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 349 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 350 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end

SilversunCity_Sewers_Market_C_2:
# 341 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_NoEmblem
	goto SilversunCity_Sewers_Market_C_1


	.align 2
# 355 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_C_Inventory:
# 356 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 357 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 358 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_METAL_COAT
# 359 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 360 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 361 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_D::
# 366 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_D_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_Market_Muk::
# 372 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 373 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 374 "data//maps/SilversunCity_Sewers/scripts.pory"
	playmoncry SPECIES_MUK, CRY_MODE_NORMAL
# 375 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_0
# 377 "data//maps/SilversunCity_Sewers/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 378 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_2
SilversunCity_Sewers_Market_Muk_1:
# 390 "data//maps/SilversunCity_Sewers/scripts.pory"
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
# 383 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_Text_2
# 384 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeitem ITEM_BOTTLE_CAP
# 386 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Market_Muk_Reward
	goto SilversunCity_Sewers_Market_Muk_1


SilversunCity_Sewers_Market_Muk_Reward::
# 398 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_Muk_Reward_Text_0
# 399 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 400 "data//maps/SilversunCity_Sewers/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_Sewers_Market_Muk_Reward_Text_1, SilversunCity_Sewers_Market_Muk_Reward_Text_2
# 404 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Sewers_Market_Muk_Reward_2
SilversunCity_Sewers_Market_Muk_Reward_1:
# 405 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_Reward_4
	return

SilversunCity_Sewers_Market_Muk_Reward_2:
# 404 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_0x8006, ITEM_ABILITY_PATCH
# 404 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Market_Muk_GiveReward
	goto SilversunCity_Sewers_Market_Muk_Reward_1

SilversunCity_Sewers_Market_Muk_Reward_4:
# 405 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_0x8006, ITEM_ABILITY_CAPSULE
# 405 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Market_Muk_GiveReward
	return


SilversunCity_Sewers_Market_Muk_GiveReward::
# 411 "data//maps/SilversunCity_Sewers/scripts.pory"
	showitemdescription
# 412 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_GiveReward_Text_0, MSGBOX_YESNO
# 413 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_Market_Muk_GiveReward_1
# 419 "data//maps/SilversunCity_Sewers/scripts.pory"
	hideitemdescription
# 420 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Market_Muk_Reward
	return

SilversunCity_Sewers_Market_Muk_GiveReward_1:
# 414 "data//maps/SilversunCity_Sewers/scripts.pory"
	hideitemdescription
# 415 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem VAR_0x8006
# 416 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 417 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Market_Muk_End
	return


SilversunCity_Sewers_Market_Muk_End::
# 426 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_Muk_End_Text_0, MSGBOX_NPC
	end


SilversunCity_Sewers_Berger::
# 431 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 432 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 433 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox_delay SilversunCity_Sewers_Berger_Text_0, SilversunCity_Sewers_Berger_Text_1
# 434 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Bergmite::
# 439 "data//maps/SilversunCity_Sewers/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 440 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Bergmite_Text_0, MSGBOX_NPC
	end


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

# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_0:
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_left
	step_end

# 142 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_1:
# 142 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_right
	step_end

# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_2:
# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_3:
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_4:
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

SilversunCity_Sewers_NPC6_Text_0:
# 17 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey - are you a trainer?\p"
	.string "Look, I need your help. My wife and I\n"
	.string "came down here to buy some illegal -\p"
	.string "I mean some furniture. We came down to\n"
	.string "buy some furniture but we got\l"
	.string "separated and now I can't find her!\p"
	.string "I'm really worried.\n"
	.string "What if the Sewer Scourge gets her?\p"
	.string "Please help me find her!$"

SilversunCity_Sewers_NPC6_Text_1:
# 23 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Please hurry. I don't want her to be\n"
	.string "attacked by the Sewer Scourge!$"

SilversunCity_Sewers_ManLostWife_Trigger1_Text_0:
# 51 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey - are you a trainer?\p"
	.string "Look, I need your help. My wife and I\n"
	.string "came down here to buy some illegal -\p"
	.string "I mean some furniture. We came down to\n"
	.string "buy some furniture but we got\l"
	.string "separated and now I can't find her!\p"
	.string "I'm really worried. What if the Sewer\n"
	.string "Scourge gets her?\p"
	.string "Please help me find her!$"

SilversunCity_Sewers_Duskull_Event_Text_0:
# 101 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Eek! Somebody help me!\n"
	.string "I can feel something attacking me!$"

SilversunCity_Sewers_Duskull_Event_Text_1:
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Is...is it gone?\p"
	.string "Oh my, you saved me! Thank you so much!\p"
	.string "I was so worried...I need to return to my\n"
	.string "husband. He must be even more worried!\p"
	.string "He sent you?\p"
	.string "Okay, let's go to him together.$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_0:
# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You're okay! I'm so glad you aren't hurt.\p"
	.string "This trainer here saved me. I felt\n"
	.string "something weird attacking me, honey! I\l"
	.string "think it might've been the Sewer\l"
	.string "Scourge. It was so scary!$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_1:
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "What's your name, trainer?\p"
	.string "{PLAYER}?\p"
	.string "We're in your debt. We can't imagine life\n"
	.string "without each other. Please come visit\l"
	.string "us in our house later. We live next to\l"
	.string "the Gym.$"

SilversunCity_Sewers_NPC1_Text_0:
# 188 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I bet there's no return policy on any\n"
	.string "defected products.$"

SilversunCity_Sewers_NPC2_Text_0:
# 193 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You see that giant filtration device?\n"
	.string "I was in charge of building it!\l"
	.string "My Electrode and I worked around the\l"
	.string "clock to finish it in time.\p"
	.string "It's our biggest accomplishment!$"

SilversunCity_Sewers_Electrode_Text_0:
# 198 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Electrode is beaming with pride!$"

SilversunCity_Sewers_NPC3_Text_0:
# 204 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "There are some creepy-looking fellows\n"
	.string "ahead. I think they're selling something\l"
	.string "illegal, but they won't sell to anyone\l"
	.string "who doesn't have some type of emblem.\p"
	.string "It's like a secret society!$"

SilversunCity_Sewers_NPC4_Text_0:
# 209 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came to find a way to evolve my\n"
	.string "Scyther, but nobody's selling me\l"
	.string "anything! Apparently they need an\l"
	.string "emblem or something to prove we're good\l"
	.string "for our word.$"

SilversunCity_Sewers_NPC5_Text_0:
# 215 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "All this toxic runoff gets filtered\n"
	.string "before entering the Hoya River. Then it\l"
	.string "goes south towards Pelluca City.$"

SilversunCity_Sewers_Trainer_A_Text_0:
# 233 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I'm not like the other rich kids at\n"
	.string "school, because I'm not afraid to get\l"
	.string "my hands dirty!$"

SilversunCity_Sewers_Trainer_A_Text_1:
# 233 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Your hands are dirty too!$"

SilversunCity_Sewers_Trainer_A_Text_2:
# 234 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came down here to catch some POISON\n"
	.string "type Pokémon for my team, but I should\l"
	.string "go back up now. This place stinks.$"

SilversunCity_Sewers_Trainer_B_Text_0:
# 240 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The resonance is strong here...the\n"
	.string "toxic water vapour wafts through your\l"
	.string "nostril...you are suspended...and about\l"
	.string "to lose!$"

SilversunCity_Sewers_Trainer_B_Text_1:
# 240 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The water stinks!$"

SilversunCity_Sewers_Trainer_B_Text_2:
# 241 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I thought the toxicity would help me\n"
	.string "ascend.$"

SilversunCity_Sewers_Trainer_C_Text_0:
# 247 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "This place has the best acoustics, man!\n"
	.string "Lemme show you!$"

SilversunCity_Sewers_Trainer_C_Text_1:
# 247 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Damn, my strings broke!$"

SilversunCity_Sewers_Trainer_C_Text_2:
# 248 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Man! You rock hard!$"

SilversunCity_Sewers_Trainer_C_GiveItem_Text_0:
# 254 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey you're a pretty rocking trainer.\n"
	.string "But you gotta wear it on your sleeves!\l"
	.string "You're probably not ready to rock out\l"
	.string "on an electric guitar yet, but why don't\l"
	.string "you take this Blue Flute? The\l"
	.string "instrument doesn't matter, man!\l"
	.string "It's all about the spirit.$"

SilversunCity_Sewers_NoEmblem_Text_0:
# 278 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "What are you looking at? Are you a cop?\n"
	.string "I'm not selling anything.\p"
	.string "...\p"
	.string "What about all this stuff on the table?\p"
	.string "I'm just displaying them.\n"
	.string "It's not for sale. Haha!$"

SilversunCity_Sewers_Market_A_Text_0:
# 292 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Can't beat Gloria? I'll hook you up with\n"
	.string "the best stuff.$"

SilversunCity_Sewers_Market_A_Text_1:
# 295 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Stay a loser then!$"

SilversunCity_Sewers_Market_B_Text_0:
# 320 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"

SilversunCity_Sewers_Market_B_Text_1:
# 323 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Then scram!$"

SilversunCity_Sewers_Market_C_Text_0:
# 346 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You look like you'd make good use of\n"
	.string "this stuff!$"

SilversunCity_Sewers_Market_C_Text_1:
# 349 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Quit wasting my time!$"

SilversunCity_Sewers_Market_D_Text_0:
# 366 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Trying to get something unsavoury, are\n"
	.string "we? Hehehe...$"

SilversunCity_Sewers_Market_Muk_Text_0:
# 375 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "It's a Muk! It's looking for junk to\n"
	.string "eat...its chomping on Trash!$"

SilversunCity_Sewers_Market_Muk_Text_1:
# 380 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Give Muk some Trash?$"

SilversunCity_Sewers_Market_Muk_Text_2:
# 383 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "{PLAYER} handed some Trash to Muk.\p"
	.string "Muk chomps down on it with joy!\p"
	.string "...\p"
	.string "It spits out something onto the floor.$"

SilversunCity_Sewers_Market_Muk_Reward_Text_0:
# 398 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Which one will you pick up?$"

SilversunCity_Sewers_Market_Muk_Reward_Text_1:
# 401 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Ability Patch$"

SilversunCity_Sewers_Market_Muk_Reward_Text_2:
# 401 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Ability Capsule$"

SilversunCity_Sewers_Market_Muk_GiveReward_Text_0:
# 412 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Are you sure?$"

SilversunCity_Sewers_Market_Muk_End_Text_0:
# 426 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Muk happily chomps on the Trash!$"

SilversunCity_Sewers_Berger_Text_0:
# 433 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Berger$"

SilversunCity_Sewers_Berger_Text_1:
# 433 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey! The statue trainer!\p"
	.string "Bergmite and I came down here because\n"
	.string "we heard they sell rare TMs. But they're\l"
	.string "not letting me buy anything!$"

SilversunCity_Sewers_Bergmite_Text_0:
# 440 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Bergmite is pinching its nose...must be\n"
	.string "hard without hands.$"
