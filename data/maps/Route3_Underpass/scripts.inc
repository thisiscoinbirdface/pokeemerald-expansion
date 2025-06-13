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
# 29 "data//maps/Route3_Underpass/scripts.pory"
	setvar VAR_TEMP_C, 1
# 31 "data//maps/Route3_Underpass/scripts.pory"
	call Common_EventScript_SaveGameBeforeSomber
# 32 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	end

Route3_Underpass_SaveGameTrigger_2:
	end


Route3_Underpass_NPC1::
# 37 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC1_Text_0, MSGBOX_NPC
	end


Route3_Underpass_NPC2::
# 42 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC2_Text_0, MSGBOX_NPC
	end


Route3_Underpass_EvilBattle_Trigger0::
# 47 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger0_2
# 50 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 51 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 53 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger0_Movement_0
# 54 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 55 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger0_2:
	end


Route3_Underpass_EvilBattle_Trigger1::
# 58 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger1_2
# 61 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 62 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 64 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 65 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 66 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger1_2:
	end


Route3_Underpass_EvilBattle_Trigger2::
# 69 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger2_2
# 72 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 73 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 75 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger2_Movement_0
# 76 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 77 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger2_2:
	end


Route3_Underpass_EvilBattle::
# 82 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 84 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 85 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_0
# 86 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 87 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 90 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_1
# 91 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 92 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 93 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_1
# 94 "data//maps/Route3_Underpass/scripts.pory"
	release
# 95 "data//maps/Route3_Underpass/scripts.pory"
	delay 12
# 96 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_2
# 97 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 98 "data//maps/Route3_Underpass/scripts.pory"
	delay 12
# 99 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 100 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_3
# 101 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 102 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_4
# 103 "data//maps/Route3_Underpass/scripts.pory"
	release
# 104 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_3
# 105 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 106 "data//maps/Route3_Underpass/scripts.pory"
	delay 12
# 107 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 108 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_5
# 109 "data//maps/Route3_Underpass/scripts.pory"
	release
# 110 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 111 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_4
# 112 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 113 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_6
# 114 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 115 "data//maps/Route3_Underpass/scripts.pory"
	release
# 116 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 117 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 118 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_8
# 119 "data//maps/Route3_Underpass/scripts.pory"
	release
# 122 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_5
# 123 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 124 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 125 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_9
# 126 "data//maps/Route3_Underpass/scripts.pory"
	release
# 127 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 128 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_6
# 129 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 130 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 131 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 132 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_10
# 133 "data//maps/Route3_Underpass/scripts.pory"
	release
# 134 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Movement_0
# 135 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 136 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 137 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_11
# 138 "data//maps/Route3_Underpass/scripts.pory"
	release
# 139 "data//maps/Route3_Underpass/scripts.pory"
	delay 16
# 140 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_12
# 141 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_13
# 142 "data//maps/Route3_Underpass/scripts.pory"
	release
# 145 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_EvilBattle_Text_14
# 148 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 149 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_7
# 150 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 151 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_8
# 152 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 153 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_12
# 154 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_15
# 155 "data//maps/Route3_Underpass/scripts.pory"
	release
# 156 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_9
# 157 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 158 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_12
# 159 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_16
# 160 "data//maps/Route3_Underpass/scripts.pory"
	release
# 161 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_10
# 162 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 163 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_GAB
# 164 "data//maps/Route3_Underpass/scripts.pory"
	fadedefaultbgm
# 167 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_11
# 168 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_12
# 169 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 170 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 171 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_17
# 172 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 173 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_18
# 174 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 175 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_19
# 176 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 177 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_20
# 178 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 179 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_21
# 180 "data//maps/Route3_Underpass/scripts.pory"
	release
# 181 "data//maps/Route3_Underpass/scripts.pory"
	giveitem ITEM_EVERSTONE
# 182 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 183 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_22
# 184 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 185 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_23
# 186 "data//maps/Route3_Underpass/scripts.pory"
	release
# 187 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 188 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_13
# 189 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_14
# 190 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement LOCALID_CLEF
# 191 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 192 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 193 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_9
# 194 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 195 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 196 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_6
# 197 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 198 "data//maps/Route3_Underpass/scripts.pory"
	release
# 199 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_15
# 200 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 201 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_BREECH
# 202 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_CLEF
# 204 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 205 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_11
# 206 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 207 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 210 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 211 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


# 53 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger0_Movement_0:
# 53 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 53 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 64 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger1_Movement_0:
# 64 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 75 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger2_Movement_0:
# 75 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 75 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 85 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_0:
# 85 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 90 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_1:
# 90 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 96 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_2:
# 96 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 96 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 104 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_3:
# 104 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 111 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_4:
# 111 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
# 111 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
	step_end

# 122 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_5:
# 122 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
# 122 "data//maps/Route3_Underpass/scripts.pory"
	emote_question_mark
	step_end

# 128 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_6:
# 128 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 149 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_7:
# 149 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 151 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_8:
# 151 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 156 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_9:
# 156 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 161 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_10:
# 161 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 161 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 161 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 161 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 161 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 161 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 161 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 167 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_11:
# 167 "data//maps/Route3_Underpass/scripts.pory"
	walk_up
	step_end

# 168 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_12:
# 168 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 168 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 188 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_13:
# 188 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 188 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 188 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 188 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 188 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 188 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 188 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 188 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 189 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_14:
# 189 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 189 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 189 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 189 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 199 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_15:
# 199 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 199 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 199 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 199 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 199 "data//maps/Route3_Underpass/scripts.pory"
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

Route3_Underpass_NPC1_Text_0:
# 37 "data//maps/Route3_Underpass/scripts.pory"
	.string "A hiker with a Clefairy ran past here a\n"
	.string "while ago. He was being chased by some\l"
	.string "weirdo in a dark outfit. The things you\l"
	.string "see while on the road...$"

Route3_Underpass_NPC2_Text_0:
# 42 "data//maps/Route3_Underpass/scripts.pory"
	.string "They say that a rare Pokémon has made\n"
	.string "these caves its home. If it's true,\l"
	.string "then it's probably deeper down.$"

Route3_Underpass_EvilBattle_Text_0:
# 92 "data//maps/Route3_Underpass/scripts.pory"
	.string "???$"

Route3_Underpass_EvilBattle_Text_1:
# 93 "data//maps/Route3_Underpass/scripts.pory"
	.string "Give it to me!$"

Route3_Underpass_EvilBattle_Text_2:
# 99 "data//maps/Route3_Underpass/scripts.pory"
	.string "Breech$"

Route3_Underpass_EvilBattle_Text_3:
# 100 "data//maps/Route3_Underpass/scripts.pory"
	.string "No! Stay away! Clefairy is MY partner!$"

Route3_Underpass_EvilBattle_Text_4:
# 102 "data//maps/Route3_Underpass/scripts.pory"
	.string "I said give it to me! It's holding a\n"
	.string "dreamstone. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_EvilBattle_Text_5:
# 108 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know anything about any\n"
	.string "dreamstones, please! Just stop!$"

Route3_Underpass_EvilBattle_Text_6:
# 113 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy$"

Route3_Underpass_EvilBattle_Text_7:
# 114 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clee!!!$"

Route3_Underpass_EvilBattle_Text_8:
# 118 "data//maps/Route3_Underpass/scripts.pory"
	.string "Hahaha! Your Clefairy wants to protect\n"
	.string "you, but you don't even have the will to\l"
	.string "fight alongside her. Just give up\l"
	.string "before I bring my Pokémon out!$"

Route3_Underpass_EvilBattle_Text_9:
# 125 "data//maps/Route3_Underpass/scripts.pory"
	.string "Who's there? What you do want?$"

Route3_Underpass_EvilBattle_Text_10:
# 132 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER}! It's you! This thug is\n"
	.string "trying to take Clefairy away!\p"
	.string "You have to help me, please!$"

Route3_Underpass_EvilBattle_Text_11:
# 137 "data//maps/Route3_Underpass/scripts.pory"
	.string "Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?$"

Route3_Underpass_EvilBattle_Text_12:
# 140 "data//maps/Route3_Underpass/scripts.pory"
	.string "Gabrielle$"

Route3_Underpass_EvilBattle_Text_13:
# 141 "data//maps/Route3_Underpass/scripts.pory"
	.string "No?\p"
	.string "No?!?!\p"
	.string "Well then...let Gabrielle teach you a\n"
	.string "lesson: don't go sticking your nose\l"
	.string "where it doesn't belong!$"

Route3_Underpass_EvilBattle_Text_14:
# 145 "data//maps/Route3_Underpass/scripts.pory"
	.string "How dare you hurt my Zorua!$"

Route3_Underpass_EvilBattle_Text_15:
# 154 "data//maps/Route3_Underpass/scripts.pory"
	.string "Fine - keep your stupid Clefairy!$"

Route3_Underpass_EvilBattle_Text_16:
# 159 "data//maps/Route3_Underpass/scripts.pory"
	.string "And you! I'll remember this, {PLAYER}.\n"
	.string "You'll regret messing with Team Somber!$"

Route3_Underpass_EvilBattle_Text_17:
# 171 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy and I are in your debt.\n"
	.string "The way you handled that thug...$"

Route3_Underpass_EvilBattle_Text_18:
# 173 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But now that I have a partner,\l"
	.string "I can't be that way.$"

Route3_Underpass_EvilBattle_Text_19:
# 175 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\p"
	.string "...\p"
	.string "I let her down.$"

Route3_Underpass_EvilBattle_Text_20:
# 177 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If Team Somber comes after\l"
	.string "Clefairy again, we'll be ready.$"

Route3_Underpass_EvilBattle_Text_21:
# 179 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - we owe you. As thanks,\n"
	.string "Clefairy and I want to give you the\l"
	.string "stone that Gabrielle person was after...$"

Route3_Underpass_EvilBattle_Text_22:
# 183 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know about dreamstones, but it\n"
	.string "looks like a regular Everstone to me.\l"
	.string "Who knows what she saw?$"

Route3_Underpass_EvilBattle_Text_23:
# 185 "data//maps/Route3_Underpass/scripts.pory"
	.string "Don't worry - Clefairy's bored of that\n"
	.string "stone already. Next, we'll head to Mt.\l"
	.string "Ceram to collect rare stones there!$"
