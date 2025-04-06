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
	msgbox SilversunCity_Sewers_ManLostWife_Trigger0_Text_0, MSGBOX_YESNO
# 55 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger0_4
SilversunCity_Sewers_ManLostWife_Trigger0_3:
# 60 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return

SilversunCity_Sewers_ManLostWife_Trigger0_4:
# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_ManLostWife_Trigger0_Text_1
# 57 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 58 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
	goto SilversunCity_Sewers_ManLostWife_Trigger0_3


SilversunCity_Sewers_ManLostWife_Trigger1::
# 65 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger1_1
	return

SilversunCity_Sewers_ManLostWife_Trigger1_1:
# 66 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0
# 68 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 69 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 70 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 72 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_ManLostWife_Trigger0_Text_0, MSGBOX_YESNO
# 74 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger1_4
SilversunCity_Sewers_ManLostWife_Trigger1_3:
# 79 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return

SilversunCity_Sewers_ManLostWife_Trigger1_4:
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_ManLostWife_Trigger0_Text_1
# 76 "data//maps/SilversunCity_Sewers/scripts.pory"
	startquest QUEST_SILVERSUN_WIFE
# 77 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
	goto SilversunCity_Sewers_ManLostWife_Trigger1_3


SilversunCity_Sewers_Duskull_Trigger0::
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger0_Movement_0
# 86 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 87 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger1::
# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger1_Movement_0
# 93 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 94 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger2::
# 98 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger2_Movement_0
# 100 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 101 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Event::
# 108 "data//maps/SilversunCity_Sewers/scripts.pory"
	special SpawnCameraObject
# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SilversunCity_Sewers_Duskull_Event_Movement_0
# 110 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 111 "data//maps/SilversunCity_Sewers/scripts.pory"
	special RemoveCameraObject
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_1
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_0
# 116 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 15, SilversunCity_Sewers_Duskull_Event_Movement_2
# 120 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 121 "data//maps/SilversunCity_Sewers/scripts.pory"
	setwildbattle SPECIES_VAROOM, 25
# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
	dowildbattle
# 123 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 125 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 15
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_3
# 130 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_1
# 131 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 132 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 3
# 133 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 134 "data//maps/SilversunCity_Sewers/scripts.pory"
	warp MAP_SILVERSUN_CITY_SEWERS, 49, 47
# 135 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_SEWERS_DUSKULL
	return


SilversunCity_Sewers_Duskull_Event_Ending::
# 142 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 144 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxyperm 9, 48, 46
# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxy 9, 48, 46
# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_0
# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_1
# 148 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_0
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
	delay 30
# 157 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_1
# 158 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 159 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto TestScript_Sewers
	return


TestScript_Sewers::
# 163 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 164 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 165 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 1
# 166 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 9
# 167 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL
# 168 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_DUSKULL_NPCS
# 169 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 170 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 171 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC1::
# 191 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 192 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 193 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 194 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC2::
# 199 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 200 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC2_Text_0
# 201 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC3::
# 206 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 207 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 208 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC3_Text_0
# 209 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC4::
# 214 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 215 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 216 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC4_Text_0
# 217 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC5::
# 223 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 224 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 225 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC5_Text_0
# 226 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_A::
# 244 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_Trainer_A_Text_0, SilversunCity_Sewers_Trainer_A_Text_1
# 245 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_A_Text_2
# 246 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 251 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_Trainer_B_Text_0, SilversunCity_Sewers_Trainer_B_Text_1
# 252 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_B_Text_2
# 253 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C::
# 258 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_C, SilversunCity_Sewers_Trainer_C_Text_0, SilversunCity_Sewers_Trainer_C_Text_1, SilversunCity_Sewers_Trainer_C_GiveItem
# 259 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_Text_2
# 260 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C_GiveItem::
# 265 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_C_GiveItem_Text_0
# 266 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 267 "data//maps/SilversunCity_Sewers/scripts.pory"
	giveitem ITEM_BLUE_FLUTE
# 268 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Market_A::
# 289 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 290 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 291 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_A_Text_0
# 292 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 293 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_A_Inventory
# 294 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_A_Text_1, MSGBOX_DEFAULT
# 295 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 299 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_A_Inventory:
# 300 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM16
# 301 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM21
# 302 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM36
# 303 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM41
# 304 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_B::
# 309 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 310 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 311 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_B_Text_0
# 312 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 313 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_B_Inventory
# 314 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_B_Text_1, MSGBOX_DEFAULT
# 315 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 319 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_B_Inventory:
# 320 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ZINC
# 321 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CARBOS
# 322 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_IRON
# 323 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CALCIUM
# 324 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PROTEIN
# 325 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_C::
# 330 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 331 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 332 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 333 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 334 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 335 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 336 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 340 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_C_Inventory:
# 341 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 342 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 343 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 344 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_LUSTER_STONE
	.2byte ITEM_NONE

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

# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0:
# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger0_Movement_0:
# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 85 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger1_Movement_0:
# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger2_Movement_0:
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_left
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_0:
# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_1:
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	jump_in_place_up
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_2:
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_3:
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_0:
# 146 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_left
	step_end

# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_1:
# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_right
	step_end

# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_2:
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
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

SilversunCity_Sewers_ManLostWife_Trigger0_Text_1:
# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Thank you trainer. Please hurry - I\n"
	.string "don't want the SEWER SCOURGE to get\l"
	.string "her!$"

SilversunCity_Sewers_Duskull_Event_Text_0:
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Eek! Help me! I can feel something\n"
	.string "attacking me!$"

SilversunCity_Sewers_Duskull_Event_Text_1:
# 130 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Is...is it gone?\p"
	.string "Oh my, you saved me! Thank you so much!\p"
	.string "I was so worried...I need to return to my\n"
	.string "husband quickly. He must be even more\l"
	.string "worried!\p"
	.string "He sent you?\p"
	.string "Okay, let's go to him together.$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_0:
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You're okay! I'm so glad you aren't hurt.\p"
	.string "This trainer here saved me. I felt\n"
	.string "something weird attacking me, honey! I\l"
	.string "think it might've been the SEWER\l"
	.string "SCOURGE. It was so scary!$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_1:
# 157 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "What's your name, trainer?\p"
	.string "{PLAYER}?\p"
	.string "We're in your debt. We can't imagine life\n"
	.string "without each other. Please come visit\l"
	.string "us in our house later. We live next to\l"
	.string "the Gym.$"

SilversunCity_Sewers_NPC1_Text_0:
# 193 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I bet there's no return policy on any\n"
	.string "defected products.$"

SilversunCity_Sewers_NPC2_Text_0:
# 200 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You see that giant filtration device? I\n"
	.string "was in charge of building it. My\l"
	.string "MAGNEMITE and I worked tirelessly to\l"
	.string "finish it in time. It's our biggest\l"
	.string "accomplishment!$"

SilversunCity_Sewers_NPC3_Text_0:
# 208 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "There are some creepy-looking fellows\n"
	.string "up ahead. I think they're selling\l"
	.string "something illegal.$"

SilversunCity_Sewers_NPC4_Text_0:
# 216 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Don't tell anyone I'm here! I came to\n"
	.string "find a way to evolve my SCYTHER.$"

SilversunCity_Sewers_NPC5_Text_0:
# 225 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "All this toxic runoff gets filtered\n"
	.string "before entering the Hoya River. Then it\l"
	.string "goes south towards Pelluca City.$"

SilversunCity_Sewers_Trainer_A_Text_0:
# 244 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I'm not like the other rich kids at\n"
	.string "school, because I'm not afraid to get my\l"
	.string "hands dirty!$"

SilversunCity_Sewers_Trainer_A_Text_1:
# 244 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Your hands are dirty too!$"

SilversunCity_Sewers_Trainer_A_Text_2:
# 245 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came down here to catch some POISON\n"
	.string "type {PKMN} to round out my team, but I\l"
	.string "should go back up now. This place\l"
	.string "stinks.$"

SilversunCity_Sewers_Trainer_B_Text_0:
# 251 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The resonance is strong here...the\n"
	.string "toxic water vapour wafts through your\l"
	.string "nostril...you are suspended...and about\l"
	.string "to lose!$"

SilversunCity_Sewers_Trainer_B_Text_1:
# 251 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The water stinks!$"

SilversunCity_Sewers_Trainer_B_Text_2:
# 252 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I thought the toxicity would help me\n"
	.string "ascend.$"

SilversunCity_Sewers_Trainer_C_Text_0:
# 258 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "This place has the best acoustics, man!\n"
	.string "Lemme show you!$"

SilversunCity_Sewers_Trainer_C_Text_1:
# 258 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Damn, my strings broke!$"

SilversunCity_Sewers_Trainer_C_Text_2:
# 259 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Man! You rock hard!$"

SilversunCity_Sewers_Trainer_C_GiveItem_Text_0:
# 265 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey you're a pretty rocking trainer. But\n"
	.string "you gotta wear it on your sleeves!\l"
	.string "You're probably not ready to rock out\l"
	.string "on an electric guitar yet, but why don't\l"
	.string "you take this Blue Flute? The\l"
	.string "instrument doesn't matter, man! It's all\l"
	.string "about the spirit.$"

SilversunCity_Sewers_Market_A_Text_0:
# 291 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Can't beat GLORIA? I'll hook you up with\n"
	.string "the best stuff.$"

SilversunCity_Sewers_Market_A_Text_1:
# 294 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Stay a loser then!$"

SilversunCity_Sewers_Market_B_Text_0:
# 311 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"

SilversunCity_Sewers_Market_B_Text_1:
# 314 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Then scram!$"

SilversunCity_Sewers_Market_C_Text_0:
# 332 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You look like you'd make good use of\n"
	.string "this stuff!$"

SilversunCity_Sewers_Market_C_Text_1:
# 335 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Quit wasting my time!$"
