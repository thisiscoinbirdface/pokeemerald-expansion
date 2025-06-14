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
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_STOP_TEAM_SOMBER, SUB_QUEST_4
# 73 "data//maps/SSElegant_Storage/scripts.pory"
	setflag FLAG_HIDE_GAB_BREECH_STORAGE
# 74 "data//maps/SSElegant_Storage/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 5
# 77 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_5
# 78 "data//maps/SSElegant_Storage/scripts.pory"
	setflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 79 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
	return


SSElegant_Storage_GabConfronts::
# 86 "data//maps/SSElegant_Storage/scripts.pory"
	lockall
# 87 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_GabConfronts_Movement_0
# 88 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 89 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 91 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_1
# 92 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 4, SSElegant_Storage_GabConfronts_Movement_1
# 93 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 94 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 95 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_2, SSElegant_Storage_GabConfronts_Text_3
# 97 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_2
# 98 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 99 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 100 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_4
# 102 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 4, SSElegant_Storage_GabConfronts_Movement_3
# 103 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 104 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 105 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_2, SSElegant_Storage_GabConfronts_Text_5
# 107 "data//maps/SSElegant_Storage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 108 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 1
# 109 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 2
# 110 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 3
# 111 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 4
# 112 "data//maps/SSElegant_Storage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 115 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_4
# 116 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 6, SSElegant_Storage_Moonblast_Movement_1
# 117 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 118 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 119 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_6
# 121 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_1
# 122 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 7, SSElegant_Storage_Moonblast_Movement_1
# 123 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_Moonblast_Movement_1
# 124 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 6, SSElegant_Storage_GabConfronts_Movement_5
# 125 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_6
# 126 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 127 "data//maps/SSElegant_Storage/scripts.pory"
	delay 16
# 128 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_GabConfronts_Text_0, SSElegant_Storage_GabConfronts_Text_7
# 129 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 6, SSElegant_Storage_GabConfronts_Movement_7
# 130 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 5, SSElegant_Storage_GabConfronts_Movement_7
# 131 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 133 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_EXIT
# 134 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 5
# 135 "data//maps/SSElegant_Storage/scripts.pory"
	removeobject 6
# 137 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_Moonblast_Movement_1
# 138 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 139 "data//maps/SSElegant_Storage/scripts.pory"
	delay 8
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_GabConfronts_Text_8
# 144 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 8, SSElegant_Storage_GabConfronts_Movement_8
# 145 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement 7, SSElegant_Storage_GabConfronts_Movement_9
# 146 "data//maps/SSElegant_Storage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Storage_GabConfronts_Movement_9
# 147 "data//maps/SSElegant_Storage/scripts.pory"
	waitmovement 0
# 149 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_GabConfronts_Text_9
# 151 "data//maps/SSElegant_Storage/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 152 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_2, SSElegant_Storage_Moonblast_Text_3
# 154 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_0, SSElegant_Storage_GabConfronts_Text_10
# 155 "data//maps/SSElegant_Storage/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 156 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox_delay SSElegant_Storage_Moonblast_Text_2, SSElegant_Storage_Moonblast_Text_3
# 157 "data//maps/SSElegant_Storage/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 160 "data//maps/SSElegant_Storage/scripts.pory"
	setflag FLAG_STORAGE_GAB_ZOROARK
# 161 "data//maps/SSElegant_Storage/scripts.pory"
	clearflag FLAG_HIDE_GAB_BREECH_STORAGE
# 162 "data//maps/SSElegant_Storage/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 3
# 165 "data//maps/SSElegant_Storage/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 166 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_SSELEGANT_STORAGE, VAR_TEMP_2, VAR_TEMP_3
	end


SSElegant_Storage_Catcher1::
# 173 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox SSElegant_Storage_Catcher1_Text_0
# 174 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_SSELEGANT_STORAGE, 2, 2
# 175 "data//maps/SSElegant_Storage/scripts.pory"
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

# 77 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_Moonblast_Movement_5:
# 77 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 77 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
	step_end

# 87 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_0:
# 87 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 87 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 87 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 87 "data//maps/SSElegant_Storage/scripts.pory"
	face_left
	step_end

# 92 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_1:
# 92 "data//maps/SSElegant_Storage/scripts.pory"
	emote_exclamation_mark
# 92 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_right
	step_end

# 97 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_2:
# 97 "data//maps/SSElegant_Storage/scripts.pory"
	jump_in_place_left
	step_end

# 102 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_3:
# 102 "data//maps/SSElegant_Storage/scripts.pory"
	face_left
	step_end

# 115 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_4:
# 115 "data//maps/SSElegant_Storage/scripts.pory"
	face_right
	step_end

# 124 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_5:
# 124 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 124 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 124 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 124 "data//maps/SSElegant_Storage/scripts.pory"
	face_up
	step_end

# 125 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_6:
# 125 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 125 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
# 125 "data//maps/SSElegant_Storage/scripts.pory"
	walk_right
# 125 "data//maps/SSElegant_Storage/scripts.pory"
	face_up
	step_end

# 129 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_7:
# 129 "data//maps/SSElegant_Storage/scripts.pory"
	walk_down
	step_end

# 144 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_8:
# 144 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 144 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 144 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 144 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 144 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 144 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
	step_end

# 145 "data//maps/SSElegant_Storage/scripts.pory"
SSElegant_Storage_GabConfronts_Movement_9:
# 145 "data//maps/SSElegant_Storage/scripts.pory"
	walk_right
# 145 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 145 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 145 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 145 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 145 "data//maps/SSElegant_Storage/scripts.pory"
	walk_up
# 145 "data//maps/SSElegant_Storage/scripts.pory"
	walk_left
# 145 "data//maps/SSElegant_Storage/scripts.pory"
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
# 91 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Gabrielle$"

SSElegant_Storage_GabConfronts_Text_1:
# 91 "data//maps/SSElegant_Storage/scripts.pory"
	.string "...and that's what Raazi wants you to\n"
	.string "do!$"

SSElegant_Storage_GabConfronts_Text_2:
# 95 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Sailor$"

SSElegant_Storage_GabConfronts_Text_3:
# 95 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Yes ma'am!\p"
	.string "And sir!$"

SSElegant_Storage_GabConfronts_Text_4:
# 100 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Now hurry up and get outside, or it'll all\n"
	.string "fall apart!$"

SSElegant_Storage_GabConfronts_Text_5:
# 105 "data//maps/SSElegant_Storage/scripts.pory"
	.string "C'mon, you lot! The Gym Leader's made us\n"
	.string "a special request.\p"
	.string "Let's get to it!$"

SSElegant_Storage_GabConfronts_Text_6:
# 119 "data//maps/SSElegant_Storage/scripts.pory"
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
# 128 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Good luck!$"

SSElegant_Storage_GabConfronts_Text_8:
# 141 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Let's check out the back wall - I'm sure\n"
	.string "we can find a spot to break through!$"

SSElegant_Storage_GabConfronts_Text_9:
# 149 "data//maps/SSElegant_Storage/scripts.pory"
	.string "This wall looks like it can be\n"
	.string "broken...Clefable, can you do it?$"

SSElegant_Storage_GabConfronts_Text_10:
# 154 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Clefable - use Moonblast!$"

SSElegant_Storage_Catcher1_Text_0:
# 173 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Hey! We've got a stowaway!$"
