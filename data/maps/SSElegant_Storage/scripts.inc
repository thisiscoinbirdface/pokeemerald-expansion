SSElegant_Storage_MapScripts::
# 7 "data//maps/SSElegant_Storage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SSElegant_Storage_SetPositions
# 2 "data//maps/SSElegant_Storage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSElegant_Storage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SSElegant_Storage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/SSElegant_Storage/scripts.pory"
	map_script_2 VAR_SSELEGANT_CUTSCENES, 2, SSElegant_Storage_GabConfronts
# 4 "data//maps/SSElegant_Storage/scripts.pory"
	map_script_2 VAR_SSELEGANT_CUTSCENES, 4, SSElegant_Storage_Moonblast
	.2byte 0


SSElegant_Storage_SetPositions::
# 11 "data//maps/SSElegant_Storage/scripts.pory"
	compare VAR_SSELEGANT_CUTSCENES, 2
	goto_if_eq SSElegant_Storage_SetPositions_2
SSElegant_Storage_SetPositions_1:
# 23 "data//maps/SSElegant_Storage/scripts.pory"
	compare VAR_SSELEGANT_CUTSCENES, 3
	goto_if_eq SSElegant_Storage_SetPositions_5
SSElegant_Storage_SetPositions_4:
# 27 "data//maps/SSElegant_Storage/scripts.pory"
	compare VAR_SSELEGANT_CUTSCENES, 4
	goto_if_eq SSElegant_Storage_SetPositions_8
SSElegant_Storage_SetPositions_7:
	end

SSElegant_Storage_SetPositions_2:
# 12 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectxyperm 1, 10, 8
# 13 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectxyperm 2, 10, 9
# 14 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectxyperm 3, 10, 10
# 15 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectxyperm 4, 11, 9
# 17 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 19 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 20 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	goto SSElegant_Storage_SetPositions_1

SSElegant_Storage_SetPositions_5:
# 24 "data//maps/SSElegant_Storage/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 4
	goto SSElegant_Storage_SetPositions_4

SSElegant_Storage_SetPositions_8:
# 28 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectxyperm 8, 14, 2
# 29 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectxyperm 7, 13, 2
# 30 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 31 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 32 "data//maps/SSElegant_Storage/scripts.pory"
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_UP
# 33 "data//maps/SSElegant_Storage/scripts.pory"
	setmaplayoutindex LAYOUT_SSELEGANT_STORAGE_BUSTED
	goto SSElegant_Storage_SetPositions_7


SSElegant_Storage_Moonblast::
# 40 "data//maps/SSElegant_Storage/scripts.pory"
	lockall
# 41 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_0
# 42 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 7, SSElegant_Storage_Moonblast_Movement_1
# 43 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_Moonblast_Movement_1
# 44 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 45 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 46 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_Moonblast_Text_1
# 49 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 7, SSElegant_Storage_Moonblast_Movement_2
# 50 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_Moonblast_Movement_3
# 51 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 52 "data//maps/SSElegant_Storage/scripts.pory"
	delay 8
# 54 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_EXIT
# 55 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 7
# 57 "data//maps/SSElegant_Storage/scripts.pory"
	delay 30
# 59 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_Moonblast_Movement_4
# 60 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 61 "data//maps/SSElegant_Storage/scripts.pory"
	delay 8
# 63 "data//maps/SSElegant_Storage/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 64 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_2, SSElegant_Storage_Moonblast_Text_3
# 66 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_Moonblast_Movement_2
# 67 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 68 "data//maps/SSElegant_Storage/scripts.pory"
	delay 8
# 70 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_EXIT
# 71 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 8
# 72 "data//maps/SSElegant_Storage/scripts.pory"
	waitse
# 73 "data//maps/SSElegant_Storage/scripts.pory"
	delay 24
# 76 "data//maps/SSElegant_Storage/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_STOP_TEAM_SOMBER, SUB_QUEST_4
# 77 "data//maps/SSElegant_Storage/scripts.pory"
	setflag FLAG_HIDE_GAB_BREECH_STORAGE
# 78 "data//maps/SSElegant_Storage/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 5
# 81 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_5
# 82 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 83 "data//maps/SSElegant_Storage/scripts.pory"
	setflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 84 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_EXIT
# 85 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
	return


SSElegant_Storage_GabConfronts::
# 92 "data//maps/SSElegant_Storage/scripts.pory"
	lockall
# 93 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_GabConfronts_Movement_0
# 94 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 95 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 97 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_1
# 98 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 4, SSElegant_Storage_GabConfronts_Movement_1
# 99 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 100 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 101 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_2, SSElegant_Storage_GabConfronts_Text_3
# 103 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_2
# 104 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 105 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 106 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_4
# 108 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 4, SSElegant_Storage_GabConfronts_Movement_3
# 109 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 110 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 111 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_2, SSElegant_Storage_GabConfronts_Text_5
# 113 "data//maps/SSElegant_Storage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 1
# 115 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 2
# 116 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 3
# 117 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 4
# 118 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_EXIT
# 119 "data//maps/SSElegant_Storage/scripts.pory"
	waitse
# 120 "data//maps/SSElegant_Storage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 123 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_4
# 124 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 6, SSElegant_Storage_Moonblast_Movement_1
# 125 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 126 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 127 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_6
# 129 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_1
# 130 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 7, SSElegant_Storage_Moonblast_Movement_1
# 131 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_Moonblast_Movement_1
# 132 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 6, SSElegant_Storage_GabConfronts_Movement_5
# 133 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_6
# 134 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 135 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 136 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_7
# 137 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 6, SSElegant_Storage_GabConfronts_Movement_7
# 138 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_7
# 139 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_EXIT
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 5
# 143 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 6
# 145 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_1
# 146 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 147 "data//maps/SSElegant_Storage/scripts.pory"
	delay 24
# 149 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_GabConfronts_Text_8
# 152 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_GabConfronts_Movement_8
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 7, SSElegant_Storage_GabConfronts_Movement_9
# 154 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_GabConfronts_Movement_9
# 155 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 157 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_GabConfronts_Text_9
# 159 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Storage_GabConfronts_Movement_10
# 160 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 161 "data//maps/SSElegant_Storage/scripts.pory"
	delay 20
# 162 "data//maps/SSElegant_Storage/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 163 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_2, SSElegant_Storage_Moonblast_Text_3
# 165 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_GabConfronts_Text_10
# 167 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Storage_GabConfronts_Movement_11
# 168 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 169 "data//maps/SSElegant_Storage/scripts.pory"
	delay 20
# 170 "data//maps/SSElegant_Storage/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 171 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_2, SSElegant_Storage_Moonblast_Text_3
# 172 "data//maps/SSElegant_Storage/scripts.pory"
	waitmoncry
# 173 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 174 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 175 "data//maps/SSElegant_Storage/scripts.pory"
	waitse
# 178 "data//maps/SSElegant_Storage/scripts.pory"
	setflag FLAG_STORAGE_GAB_ZOROARK
# 179 "data//maps/SSElegant_Storage/scripts.pory"
	clearflag FLAG_HIDE_GAB_BREECH_STORAGE
# 180 "data//maps/SSElegant_Storage/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 3
# 183 "data//maps/SSElegant_Storage/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 184 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_SSELEGANT_STORAGE, VAR_TEMP_2, VAR_TEMP_3
	end


SSElegant_Storage_Catcher1::
# 191 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox SSElegant_Storage_Catcher1_Text_0
# 192 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_SSELEGANT_STORAGE, 2, 2
# 193 "data//maps/SSElegant_Storage/scripts.pory"
	delay 60
	return


# 41 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_Moonblast_Movement_0:
# 41 "data//maps/SSElegant_Storage/scripts.pory"
	face_up
	step_end

# 42 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_Moonblast_Movement_1:
# 42 "data//maps/SSElegant_Storage/scripts.pory"
	face_down
	step_end

# 49 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_Moonblast_Movement_2:
# 49 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
	step_end

# 50 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_Moonblast_Movement_3:
# 50 "data//maps/SSElegant_Storage/scripts.pory"
	walk_left
	step_end

# 59 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_Moonblast_Movement_4:
# 59 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_down
	step_end

# 81 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_Moonblast_Movement_5:
# 81 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 81 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
	step_end

# 93 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_0:
# 93 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 93 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 93 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 93 "data//maps/SSElegant_Storage/scripts.pory"
	face_left
	step_end

# 98 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_1:
# 98 "data//maps/SSElegant_Storage/scripts.pory"
	emote_exclamation_mark
# 98 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_right
	step_end

# 103 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_2:
# 103 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_left
	step_end

# 108 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_3:
# 108 "data//maps/SSElegant_Storage/scripts.pory"
	face_left
	step_end

# 123 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_4:
# 123 "data//maps/SSElegant_Storage/scripts.pory"
	face_right
	step_end

# 132 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_5:
# 132 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 132 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 132 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 132 "data//maps/SSElegant_Storage/scripts.pory"
	face_up
	step_end

# 133 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_6:
# 133 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 133 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 133 "data//maps/SSElegant_Storage/scripts.pory"
	walk_right
# 133 "data//maps/SSElegant_Storage/scripts.pory"
	face_up
	step_end

# 137 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_7:
# 137 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
	step_end

# 152 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_8:
# 152 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 152 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 152 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 152 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 152 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 152 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
	step_end

# 153 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_9:
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	walk_right
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	walk_left
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
	step_end

# 159 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_10:
# 159 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_up
	step_end

# 167 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_11:
# 167 "data//maps/SSElegant_Storage/scripts.pory"
	emote_exclamation_mark
# 167 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_up
	step_end

SSElegant_Storage_Moonblast_Text_0:
# 46 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Breech$"

SSElegant_Storage_Moonblast_Text_1:
# 46 "data//maps/SSElegant_Storage/scripts.pory"
	.string "We can jump out through this wall!\p"
	.string "Clefable and I will go on ahead and make\n"
	.string "sure nobody's around.\p"
	.string "Keep your Pokémon hidden, okay?$"

SSElegant_Storage_Moonblast_Text_2:
# 64 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Clefable$"

SSElegant_Storage_Moonblast_Text_3:
# 64 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Cleee!!!$"

SSElegant_Storage_GabConfronts_Text_0:
# 97 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Gabrielle$"

SSElegant_Storage_GabConfronts_Text_1:
# 97 "data//maps/SSElegant_Storage/scripts.pory"
	.string "...and that's what Raazi needs\n"
	.string "all of you to do!$"

SSElegant_Storage_GabConfronts_Text_2:
# 101 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Sailor$"

SSElegant_Storage_GabConfronts_Text_3:
# 101 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Yes ma'am!\p"
	.string "And sir!$"

SSElegant_Storage_GabConfronts_Text_4:
# 106 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Now hurry up and get outside, or it'll\n"
	.string "all fall apart!$"

SSElegant_Storage_GabConfronts_Text_5:
# 111 "data//maps/SSElegant_Storage/scripts.pory"
	.string "C'mon, you lot! The Rivetshore\n"
	.string "Gym Leader's made us a special request.\p"
	.string "Let's get to it!$"

SSElegant_Storage_GabConfronts_Text_6:
# 127 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Zoroark and I will go outside and keep\n"
	.string "them from entering the storage hold.\p"
	.string "You two find a way out from here!\p"
	.string "...\p"
	.string "{PLAYER} - don't do anything stupid!\n"
	.string "And hide your Pokémon once you get off,\l"
	.string "or the leaders might catch you.\p"
	.string "...$"

SSElegant_Storage_GabConfronts_Text_7:
# 136 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Good luck!$"

SSElegant_Storage_GabConfronts_Text_8:
# 149 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Let's check out the back wall - I'm sure\n"
	.string "we can find a spot to break through!$"

SSElegant_Storage_GabConfronts_Text_9:
# 157 "data//maps/SSElegant_Storage/scripts.pory"
	.string "This wall looks like it can be broken...\n"
	.string "Clefable, can you do it?$"

SSElegant_Storage_GabConfronts_Text_10:
# 165 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Clefable - use Moonblast!$"

SSElegant_Storage_Catcher1_Text_0:
# 191 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Hey! We've got a stowaway!$"
