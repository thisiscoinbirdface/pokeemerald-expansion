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
# 52 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_ManLostWife_Trigger0_Text_0
# 53 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 54 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_ManLostWife_Trigger1::
# 59 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger1_1
	return

SilversunCity_Sewers_ManLostWife_Trigger1_1:
# 60 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 61 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0
# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 63 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 64 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 65 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_ManLostWife_Trigger1_Text_0
# 66 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger1_Movement_1
# 68 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 69 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_Duskull_Trigger0::
# 74 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger0_Movement_0
# 76 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 77 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger1::
# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 82 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger1_Movement_0
# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger2::
# 88 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 89 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger2_Movement_0
# 90 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Event::
# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_0
# 98 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_0
# 100 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 103 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 15, SilversunCity_Sewers_Duskull_Event_Movement_1
# 104 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 105 "data//maps/SilversunCity_Sewers/scripts.pory"
	setwildbattle SPECIES_VAROOM, 25
# 106 "data//maps/SilversunCity_Sewers/scripts.pory"
	dowildbattle
# 107 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 15
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_2
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_1
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 116 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 3
# 117 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	warp MAP_SILVERSUN_CITY_SEWERS, 49, 47
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_SEWERS_DUSKULL
	return


SilversunCity_Sewers_Duskull_Event_Ending::
# 126 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxyperm 9, 48, 46
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxy 9, 48, 46
# 130 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_0
# 131 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_1
# 132 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 135 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_0
# 136 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 137 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 138 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_Duskull_Event_Ending_Movement_2
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 140 "data//maps/SilversunCity_Sewers/scripts.pory"
	delay 30
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Ending_Text_1
# 142 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 143 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto TestScript_Sewers
	return


TestScript_Sewers::
# 147 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 148 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 1
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 9
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_DUSKULL_NPCS
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC1::
# 175 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 176 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 177 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 178 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC2::
# 183 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 184 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC2_Text_0
# 185 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC3::
# 190 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 191 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 192 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC3_Text_0
# 193 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC4::
# 198 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 199 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 200 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC4_Text_0
# 201 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC5::
# 207 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 208 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 209 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC5_Text_0
# 210 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_A::
# 228 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_Trainer_A_Text_0, SilversunCity_Sewers_Trainer_A_Text_1
# 229 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_A_Text_2
# 230 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 235 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_Trainer_B_Text_0, SilversunCity_Sewers_Trainer_B_Text_1
# 236 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_B_Text_2
# 237 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Market_A::
# 258 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 259 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 260 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_A_Text_0
# 261 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 262 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_A_Inventory
# 263 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_A_Text_1, MSGBOX_DEFAULT
# 264 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 268 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_A_Inventory:
# 269 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM16
# 270 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM21
# 271 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM36
# 272 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM41
# 273 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_B::
# 278 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 279 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 280 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_B_Text_0
# 281 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 282 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_B_Inventory
# 283 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_B_Text_1, MSGBOX_DEFAULT
# 284 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 288 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_B_Inventory:
# 289 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ZINC
# 290 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CARBOS
# 291 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_IRON
# 292 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CALCIUM
# 293 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PROTEIN
# 294 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_C::
# 299 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 300 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 301 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 302 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 303 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 304 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 305 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 309 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_C_Inventory:
# 310 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 311 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 312 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 313 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_FLOAT_STONE
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

# 61 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0:
# 61 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
# 61 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger1_Movement_1:
# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger0_Movement_0:
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 82 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger1_Movement_0:
# 82 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 89 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger2_Movement_0:
# 89 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 89 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_left
# 89 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_0:
# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
	jump_in_place_up
# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 103 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_1:
# 103 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 103 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_2:
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 130 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_0:
# 130 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_left
	step_end

# 131 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_1:
# 131 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_right
	step_end

# 137 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Ending_Movement_2:
# 137 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

SilversunCity_Sewers_NPC6_Text_0:
# 40 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Please hurry. I don't want her to be\n"
	.string "attacked by the SEWER SCOURGE!$"

SilversunCity_Sewers_ManLostWife_Trigger0_Text_0:
# 52 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey - are you a trainer? Look, I need\n"
	.string "your help. My wife and I came down here\l"
	.string "to buy some illegal -\p"
	.string "I mean some furniture. We came down to\n"
	.string "buy some furniture but we got\l"
	.string "separated and now I can't find her at\l"
	.string "all!\p"
	.string "I'm really worried. What if the SEWEK\n"
	.string "SKULL gets her? Please help me find\l"
	.string "her!$"

SilversunCity_Sewers_ManLostWife_Trigger1_Text_0:
# 65 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey - are you a trainer? Look, I need\n"
	.string "your help. My wife and I came down here\l"
	.string "to buy some illegal -\p"
	.string "I mean some furniture. We came down to\n"
	.string "buy some furniture but we got\l"
	.string "separated and now I can't find her at\l"
	.string "all!\p"
	.string "I'm really worried because this place is\n"
	.string "teeming with dangerous {PKMN}. Please help\l"
	.string "me find her!$"

SilversunCity_Sewers_Duskull_Event_Text_0:
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Eek! Help me! I can feel something\n"
	.string "attacking me!$"

SilversunCity_Sewers_Duskull_Event_Text_1:
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Is...is it gone?\p"
	.string "Oh my, you saved me! Thank you so much!\p"
	.string "I was so worried...I need to return to my\n"
	.string "husband quickly. He must be even more\l"
	.string "worried!\p"
	.string "He sent you?\p"
	.string "Okay, let's go to him together.$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_0:
# 135 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You're okay! I'm so glad you aren't hurt.\p"
	.string "This trainer here saved me. I felt\n"
	.string "something weird attacking me, honey! I\l"
	.string "think it might've been the SEWER\l"
	.string "SCOURGE. It was so scary!$"

SilversunCity_Sewers_Duskull_Event_Ending_Text_1:
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "What's your name, trainer?\p"
	.string "{PLAYER}?\p"
	.string "We're in your debt. We can't imagine life\n"
	.string "without each other. Please come visit\l"
	.string "us in our house later. We live next to\l"
	.string "the Gym.$"

SilversunCity_Sewers_NPC1_Text_0:
# 177 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I bet there's no return policy on any\n"
	.string "defected products.$"

SilversunCity_Sewers_NPC2_Text_0:
# 184 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You see that giant filtration device? I\n"
	.string "was in charge of building it. My\l"
	.string "MAGNEMITE and I worked tirelessly to\l"
	.string "finish it in time. It's our biggest\l"
	.string "accomplishment!$"

SilversunCity_Sewers_NPC3_Text_0:
# 192 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "There are some creepy-looking fellows\n"
	.string "up ahead. I think they're selling\l"
	.string "something illegal.$"

SilversunCity_Sewers_NPC4_Text_0:
# 200 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Don't tell anyone I'm here! I came to\n"
	.string "find a way to evolve my SCYTHER.$"

SilversunCity_Sewers_NPC5_Text_0:
# 209 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "All this toxic runoff gets filtered\n"
	.string "before entering the HOYA RIVER. Then it\l"
	.string "goes south towards PELLUCA CITY.$"

SilversunCity_Sewers_Trainer_A_Text_0:
# 228 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I'm not like the other rich kids at\n"
	.string "school, because I'm not afraid to get my\l"
	.string "hands dirty!$"

SilversunCity_Sewers_Trainer_A_Text_1:
# 228 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Your hands are dirty too!$"

SilversunCity_Sewers_Trainer_A_Text_2:
# 229 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came down here to catch some POISON\n"
	.string "type {PKMN} to round out my team, but I\l"
	.string "should go back up now. This place\l"
	.string "stinks.$"

SilversunCity_Sewers_Trainer_B_Text_0:
# 235 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The resonance is strong here...the\n"
	.string "toxic water vapour wafts through your\l"
	.string "nostril...you are suspended...and about\l"
	.string "to lose!$"

SilversunCity_Sewers_Trainer_B_Text_1:
# 235 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The water stinks!$"

SilversunCity_Sewers_Trainer_B_Text_2:
# 236 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I thought the toxicity would help me\n"
	.string "ascend.$"

SilversunCity_Sewers_Market_A_Text_0:
# 260 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Can't beat GLORIA? I'll hook you up with\n"
	.string "the best stuff.$"

SilversunCity_Sewers_Market_A_Text_1:
# 263 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Stay a loser then!$"

SilversunCity_Sewers_Market_B_Text_0:
# 280 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"

SilversunCity_Sewers_Market_B_Text_1:
# 283 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Then scram!$"

SilversunCity_Sewers_Market_C_Text_0:
# 301 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You look like you'd make good use of\n"
	.string "this stuff!$"

SilversunCity_Sewers_Market_C_Text_1:
# 304 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Quit wasting my time!$"
