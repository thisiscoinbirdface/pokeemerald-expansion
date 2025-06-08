# 1 "data//maps/Route3_Underpass/scripts.pory"

# 2 "data//maps/Route3_Underpass/scripts.pory"
    .set LOCALID_GAB, 1
# 3 "data//maps/Route3_Underpass/scripts.pory"
    .set LOCALID_BREECH, 2
# 4 "data//maps/Route3_Underpass/scripts.pory"
    .set LOCALID_CLEF, 5

Route3_Underpass_MapScripts::
	.byte 0


Route3_Underpass_Nurse::
# 10 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Nurse_Text_0, MSGBOX_NPC
	end


Route3_NurseJoy_OnRoute::
# 16 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 17 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 18 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_NurseJoy_OnRoute_Text_0
# 19 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_NurseJoy_OnRoute_Text_1
# 20 "data//maps/Route3_Underpass/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 21 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 22 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	end


Route3_Underpass_SaveGameTrigger::
# 27 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_SaveGameTrigger_2
# 31 "data//maps/Route3_Underpass/scripts.pory"
	setvar VAR_TEMP_C, 1
# 33 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_SaveGameTrigger_Text_0
# 34 "data//maps/Route3_Underpass/scripts.pory"
	special SaveGame
# 35 "data//maps/Route3_Underpass/scripts.pory"
	waitstate
# 36 "data//maps/Route3_Underpass/scripts.pory"
	release
	end

Route3_Underpass_SaveGameTrigger_2:
	end


Route3_Underpass_NPC1::
# 41 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC1_Text_0, MSGBOX_NPC
	end


Route3_Underpass_NPC2::
# 46 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC2_Text_0, MSGBOX_NPC
	end


Route3_Underpass_EvilBattle_Trigger0::
# 51 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger0_2
# 54 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 55 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 57 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger0_Movement_0
# 58 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 59 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger0_2:
	end


Route3_Underpass_EvilBattle_Trigger1::
# 62 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger1_2
# 65 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 66 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 68 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 69 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 70 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger1_2:
	end


Route3_Underpass_EvilBattle_Trigger2::
# 73 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger2_2
# 76 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 77 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 79 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger2_Movement_0
# 80 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 81 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger2_2:
	end


Route3_Underpass_EvilBattle::
# 86 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 88 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 89 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_0
# 90 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 91 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 94 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_1
# 95 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 96 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 97 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_1
# 98 "data//maps/Route3_Underpass/scripts.pory"
	release
# 99 "data//maps/Route3_Underpass/scripts.pory"
	delay 12
# 100 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_2
# 101 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 102 "data//maps/Route3_Underpass/scripts.pory"
	delay 12
# 103 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 104 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_3
# 105 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 106 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_4
# 107 "data//maps/Route3_Underpass/scripts.pory"
	release
# 108 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_3
# 109 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 110 "data//maps/Route3_Underpass/scripts.pory"
	delay 12
# 111 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 112 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_5
# 113 "data//maps/Route3_Underpass/scripts.pory"
	release
# 114 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 115 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_4
# 116 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 117 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_6
# 118 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 119 "data//maps/Route3_Underpass/scripts.pory"
	release
# 120 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 121 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 122 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_8
# 123 "data//maps/Route3_Underpass/scripts.pory"
	release
# 126 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_5
# 127 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 128 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 129 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_9
# 130 "data//maps/Route3_Underpass/scripts.pory"
	release
# 131 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 132 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_6
# 133 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 134 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 135 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 136 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_10
# 137 "data//maps/Route3_Underpass/scripts.pory"
	release
# 138 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Movement_0
# 139 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 140 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 141 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_11
# 142 "data//maps/Route3_Underpass/scripts.pory"
	release
# 143 "data//maps/Route3_Underpass/scripts.pory"
	delay 16
# 144 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_12
# 145 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_13
# 146 "data//maps/Route3_Underpass/scripts.pory"
	release
# 149 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_EvilBattle_Text_14
# 152 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 153 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_7
# 154 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 155 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_8
# 156 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 157 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_12
# 158 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_15
# 159 "data//maps/Route3_Underpass/scripts.pory"
	release
# 160 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_9
# 161 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 162 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_12
# 163 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_16
# 164 "data//maps/Route3_Underpass/scripts.pory"
	release
# 165 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_10
# 166 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 167 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_GAB
# 168 "data//maps/Route3_Underpass/scripts.pory"
	fadedefaultbgm
# 171 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_11
# 172 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_12
# 173 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 174 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 175 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_17
# 176 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 177 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_18
# 178 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 179 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_19
# 180 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 181 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_20
# 182 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 183 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_21
# 184 "data//maps/Route3_Underpass/scripts.pory"
	release
# 185 "data//maps/Route3_Underpass/scripts.pory"
	giveitem ITEM_EVERSTONE
# 186 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 187 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_22
# 188 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 189 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_23
# 190 "data//maps/Route3_Underpass/scripts.pory"
	release
# 191 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 192 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_13
# 193 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_14
# 194 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement LOCALID_CLEF
# 195 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 196 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 197 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_9
# 198 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 199 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 200 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_6
# 201 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 202 "data//maps/Route3_Underpass/scripts.pory"
	release
# 203 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_15
# 204 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 205 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_BREECH
# 206 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_CLEF
# 208 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 209 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_11
# 210 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 211 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 214 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 215 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


# 57 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger0_Movement_0:
# 57 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 57 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 68 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger1_Movement_0:
# 68 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 79 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger2_Movement_0:
# 79 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 79 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 89 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_0:
# 89 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 94 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_1:
# 94 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 100 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_2:
# 100 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 100 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 108 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_3:
# 108 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 115 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_4:
# 115 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
# 115 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
	step_end

# 126 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_5:
# 126 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
# 126 "data//maps/Route3_Underpass/scripts.pory"
	emote_question_mark
	step_end

# 132 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_6:
# 132 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 153 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_7:
# 153 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 155 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_8:
# 155 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 160 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_9:
# 160 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 165 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_10:
# 165 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 165 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 165 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 165 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 165 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 165 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 165 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 171 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_11:
# 171 "data//maps/Route3_Underpass/scripts.pory"
	walk_up
	step_end

# 172 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_12:
# 172 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 172 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 192 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_13:
# 192 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 192 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 192 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 192 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 192 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 192 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 192 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 192 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 193 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_14:
# 193 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 193 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 193 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 193 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 203 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_15:
# 203 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 203 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 203 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 203 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 203 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

Route3_Underpass_Nurse_Text_0:
# 10 "data//maps/Route3_Underpass/scripts.pory"
	.string "This area is closed for the demo.$"

Route3_NurseJoy_OnRoute_Text_0:
# 18 "data//maps/Route3_Underpass/scripts.pory"
	.string "Nurse Joy$"

Route3_NurseJoy_OnRoute_Text_1:
# 19 "data//maps/Route3_Underpass/scripts.pory"
	.string "Chansey and I got the best assignment!\n"
	.string "Up in the hills...clean air...what more\l"
	.string "could a nurse ask for?$"

Route3_Underpass_SaveGameTrigger_Text_0:
# 33 "data//maps/Route3_Underpass/scripts.pory"
	.string "You're about to enter a battle!$"

Route3_Underpass_NPC1_Text_0:
# 41 "data//maps/Route3_Underpass/scripts.pory"
	.string "A hiker with a Clefairy ran past here a\n"
	.string "while ago. He was being chased by some\l"
	.string "weirdo in a dark outfit. The things you\l"
	.string "see while on the road...$"

Route3_Underpass_NPC2_Text_0:
# 46 "data//maps/Route3_Underpass/scripts.pory"
	.string "They say that a rare Pokémon has made\n"
	.string "these caves its home. If it's true, then\l"
	.string "it's probably deeper down.$"

Route3_Underpass_EvilBattle_Text_0:
# 96 "data//maps/Route3_Underpass/scripts.pory"
	.string "???$"

Route3_Underpass_EvilBattle_Text_1:
# 97 "data//maps/Route3_Underpass/scripts.pory"
	.string "Give it to me!$"

Route3_Underpass_EvilBattle_Text_2:
# 103 "data//maps/Route3_Underpass/scripts.pory"
	.string "Breech$"

Route3_Underpass_EvilBattle_Text_3:
# 104 "data//maps/Route3_Underpass/scripts.pory"
	.string "No! Stay away! Clefairy is MY partner!$"

Route3_Underpass_EvilBattle_Text_4:
# 106 "data//maps/Route3_Underpass/scripts.pory"
	.string "I said give it to me! It's holding a\n"
	.string "dreamstone. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_EvilBattle_Text_5:
# 112 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know anything about any\n"
	.string "dreamstones, please! Just stop!$"

Route3_Underpass_EvilBattle_Text_6:
# 117 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy$"

Route3_Underpass_EvilBattle_Text_7:
# 118 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clee!!!$"

Route3_Underpass_EvilBattle_Text_8:
# 122 "data//maps/Route3_Underpass/scripts.pory"
	.string "Hahaha! Your Clefairy wants to protect\n"
	.string "you, but you don't even have the will to\l"
	.string "fight alongside her. Just give up\l"
	.string "before I bring my Pokémon out!$"

Route3_Underpass_EvilBattle_Text_9:
# 129 "data//maps/Route3_Underpass/scripts.pory"
	.string "Who's there? What you do want?$"

Route3_Underpass_EvilBattle_Text_10:
# 136 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER}! It's you! This thug is\n"
	.string "trying to take Clefairy away!\p"
	.string "You have to help me, please!$"

Route3_Underpass_EvilBattle_Text_11:
# 141 "data//maps/Route3_Underpass/scripts.pory"
	.string "Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?$"

Route3_Underpass_EvilBattle_Text_12:
# 144 "data//maps/Route3_Underpass/scripts.pory"
	.string "Gabrielle$"

Route3_Underpass_EvilBattle_Text_13:
# 145 "data//maps/Route3_Underpass/scripts.pory"
	.string "No?\p"
	.string "No?!?!\p"
	.string "Well then...let Gabrielle teach you a\n"
	.string "lesson: don't go sticking your nose\l"
	.string "where it doesn't belong!$"

Route3_Underpass_EvilBattle_Text_14:
# 149 "data//maps/Route3_Underpass/scripts.pory"
	.string "How dare you hurt my Zorua!$"

Route3_Underpass_EvilBattle_Text_15:
# 158 "data//maps/Route3_Underpass/scripts.pory"
	.string "Fine - keep your stupid Clefairy!$"

Route3_Underpass_EvilBattle_Text_16:
# 163 "data//maps/Route3_Underpass/scripts.pory"
	.string "And you! I'll remember this, {PLAYER}.\n"
	.string "You'll regret messing with Team Somber!$"

Route3_Underpass_EvilBattle_Text_17:
# 175 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy and I are in your debt.\n"
	.string "The way you handled that thug...$"

Route3_Underpass_EvilBattle_Text_18:
# 177 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But now that I have a partner,\l"
	.string "I can't be that way.$"

Route3_Underpass_EvilBattle_Text_19:
# 179 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\p"
	.string "...\p"
	.string "I let her down.$"

Route3_Underpass_EvilBattle_Text_20:
# 181 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If Team Somber comes after\l"
	.string "Clefairy again, we'll be ready.$"

Route3_Underpass_EvilBattle_Text_21:
# 183 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - we owe you. As thanks,\n"
	.string "Clefairy and I want to give you the\l"
	.string "stone that Gabrielle person was after...$"

Route3_Underpass_EvilBattle_Text_22:
# 187 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know about dreamstones, but it\n"
	.string "looks like a regular Everstone to me.\l"
	.string "Who knows what she saw?$"

Route3_Underpass_EvilBattle_Text_23:
# 189 "data//maps/Route3_Underpass/scripts.pory"
	.string "Don't worry - Clefairy's bored of that\n"
	.string "stone already. Next, we'll head to Mt.\l"
	.string "Ceram to collect rare stones there!$"
