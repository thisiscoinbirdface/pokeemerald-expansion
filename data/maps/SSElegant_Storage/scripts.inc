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
	applymovement 8, SSElegant_Storage_Moonblast_Movement_4
# 58 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 59 "data//maps/SSElegant_Storage/scripts.pory"
	delay 8
# 61 "data//maps/SSElegant_Storage/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 62 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_2, SSElegant_Storage_Moonblast_Text_3
# 64 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_Moonblast_Movement_2
# 65 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 66 "data//maps/SSElegant_Storage/scripts.pory"
	delay 8
# 68 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_EXIT
# 69 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 8
# 72 "data//maps/SSElegant_Storage/scripts.pory"
	setflag FLAG_HIDE_GAB_BREECH_STORAGE
# 73 "data//maps/SSElegant_Storage/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 5
# 76 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_5
# 77 "data//maps/SSElegant_Storage/scripts.pory"
	setflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 78 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
	return


SSElegant_Storage_GabConfronts::
# 83 "data//maps/SSElegant_Storage/scripts.pory"
	lockall
# 84 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_GabConfronts_Movement_0
# 85 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 86 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 88 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_1
# 89 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 4, SSElegant_Storage_GabConfronts_Movement_1
# 90 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 91 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 92 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_2, SSElegant_Storage_GabConfronts_Text_3
# 94 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_2
# 95 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 96 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 97 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_4
# 99 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 4, SSElegant_Storage_GabConfronts_Movement_3
# 100 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 101 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 102 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_2, SSElegant_Storage_GabConfronts_Text_5
# 104 "data//maps/SSElegant_Storage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 105 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 1
# 106 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 2
# 107 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 3
# 108 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 4
# 109 "data//maps/SSElegant_Storage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 112 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_4
# 113 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 6, SSElegant_Storage_Moonblast_Movement_1
# 114 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 115 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 116 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_6
# 118 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_1
# 119 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 7, SSElegant_Storage_Moonblast_Movement_1
# 120 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_Moonblast_Movement_1
# 121 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 6, SSElegant_Storage_GabConfronts_Movement_5
# 122 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_6
# 123 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 124 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 125 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_7
# 126 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 6, SSElegant_Storage_GabConfronts_Movement_7
# 127 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_7
# 128 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 130 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_EXIT
# 131 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 5
# 132 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 6
# 134 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_1
# 135 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 136 "data//maps/SSElegant_Storage/scripts.pory"
	delay 8
# 138 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_GabConfronts_Text_8
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_GabConfronts_Movement_8
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 7, SSElegant_Storage_GabConfronts_Movement_9
# 143 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_GabConfronts_Movement_9
# 144 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 146 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_GabConfronts_Text_9
# 148 "data//maps/SSElegant_Storage/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 149 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_2, SSElegant_Storage_Moonblast_Text_3
# 151 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_GabConfronts_Text_10
# 152 "data//maps/SSElegant_Storage/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 153 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_2, SSElegant_Storage_Moonblast_Text_3
# 154 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 157 "data//maps/SSElegant_Storage/scripts.pory"
	setflag FLAG_STORAGE_GAB_ZOROARK
# 158 "data//maps/SSElegant_Storage/scripts.pory"
	clearflag FLAG_HIDE_GAB_BREECH_STORAGE
# 159 "data//maps/SSElegant_Storage/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 3
# 162 "data//maps/SSElegant_Storage/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 163 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_SSELEGANT_STORAGE, VAR_TEMP_2, VAR_TEMP_3
	end


SSElegant_Storage_Catcher1::
# 170 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox SSElegant_Storage_Catcher1_Text_0
# 171 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_SSELEGANT_STORAGE, 2, 2
# 172 "data//maps/SSElegant_Storage/scripts.pory"
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

# 57 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_Moonblast_Movement_4:
# 57 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_down
	step_end

# 76 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_Moonblast_Movement_5:
# 76 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 76 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
	step_end

# 84 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_0:
# 84 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 84 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 84 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 84 "data//maps/SSElegant_Storage/scripts.pory"
	face_left
	step_end

# 89 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_1:
# 89 "data//maps/SSElegant_Storage/scripts.pory"
	emote_exclamation_mark
# 89 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_right
	step_end

# 94 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_2:
# 94 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_left
	step_end

# 99 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_3:
# 99 "data//maps/SSElegant_Storage/scripts.pory"
	face_left
	step_end

# 112 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_4:
# 112 "data//maps/SSElegant_Storage/scripts.pory"
	face_right
	step_end

# 121 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_5:
# 121 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant_Storage/scripts.pory"
	face_up
	step_end

# 122 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_6:
# 122 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 122 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 122 "data//maps/SSElegant_Storage/scripts.pory"
	walk_right
# 122 "data//maps/SSElegant_Storage/scripts.pory"
	face_up
	step_end

# 126 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_7:
# 126 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
	step_end

# 141 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_8:
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
	step_end

# 142 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_9:
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	walk_right
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	walk_left
# 142 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
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
# 62 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Clefable$"

SSElegant_Storage_Moonblast_Text_3:
# 62 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Cleee!!!$"

SSElegant_Storage_GabConfronts_Text_0:
# 88 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Gabrielle$"

SSElegant_Storage_GabConfronts_Text_1:
# 88 "data//maps/SSElegant_Storage/scripts.pory"
	.string "...and that's what Raazi wants you to\n"
	.string "do!$"

SSElegant_Storage_GabConfronts_Text_2:
# 92 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Sailor$"

SSElegant_Storage_GabConfronts_Text_3:
# 92 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Yes ma'am!\p"
	.string "And sir!$"

SSElegant_Storage_GabConfronts_Text_4:
# 97 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Now hurry up and get outside, or it'll all\n"
	.string "fall apart!$"

SSElegant_Storage_GabConfronts_Text_5:
# 102 "data//maps/SSElegant_Storage/scripts.pory"
	.string "C'mon, you lot! The Gym Leader's made us\n"
	.string "a special request.\p"
	.string "Let's get to it!$"

SSElegant_Storage_GabConfronts_Text_6:
# 116 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Zoroark and I will go outside and keep\n"
	.string "them from entering the storage hold.\p"
	.string "You two find a way out from here!\p"
	.string "...\p"
	.string "{PLAYER} - don't do anything stupid!\n"
	.string "And hide your Pokémon once you get off\l"
	.string "the ship, or the leaders might catch\l"
	.string "you.\p"
	.string "...$"

SSElegant_Storage_GabConfronts_Text_7:
# 125 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Good luck!$"

SSElegant_Storage_GabConfronts_Text_8:
# 138 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Let's check out the back wall - I'm sure\n"
	.string "we can find a spot to break through!$"

SSElegant_Storage_GabConfronts_Text_9:
# 146 "data//maps/SSElegant_Storage/scripts.pory"
	.string "This wall looks like it can be\n"
	.string "broken...Clefable, can you do it?$"

SSElegant_Storage_GabConfronts_Text_10:
# 151 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Clefable - use Moonblast!$"

SSElegant_Storage_Catcher1_Text_0:
# 170 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Hey! We've got a stowaway!$"
