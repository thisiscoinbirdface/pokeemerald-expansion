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
	special SaveGame
# 34 "data//maps/Route3_Underpass/scripts.pory"
	waitstate
# 35 "data//maps/Route3_Underpass/scripts.pory"
	release
	end

Route3_Underpass_SaveGameTrigger_2:
	end


Route3_Underpass_NPC1::
# 40 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC1_Text_0, MSGBOX_NPC
	end


Route3_Underpass_NPC2::
# 45 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC2_Text_0, MSGBOX_NPC
	end


Route3_Underpass_EvilBattle_Trigger0::
# 50 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger0_2
# 53 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 54 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 56 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger0_Movement_0
# 57 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 58 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger0_2:
	end


Route3_Underpass_EvilBattle_Trigger1::
# 61 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger1_2
# 64 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 65 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 67 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 68 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 69 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger1_2:
	end


Route3_Underpass_EvilBattle_Trigger2::
# 72 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger2_2
# 75 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 76 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 78 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger2_Movement_0
# 79 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 80 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger2_2:
	end


Route3_Underpass_EvilBattle::
# 85 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 87 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 88 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_0
# 89 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 90 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 93 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_1
# 94 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 95 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 96 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_1
# 97 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_2
# 98 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 99 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 100 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_3
# 101 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 102 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_4
# 103 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_3
# 104 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 105 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 106 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_5
# 107 "data//maps/Route3_Underpass/scripts.pory"
	release
# 108 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 109 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_4
# 110 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 111 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_6
# 112 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 113 "data//maps/Route3_Underpass/scripts.pory"
	release
# 114 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 115 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 116 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_8
# 117 "data//maps/Route3_Underpass/scripts.pory"
	release
# 120 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_5
# 121 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 122 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 123 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_9
# 124 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_6
# 125 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 126 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 127 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_10
# 128 "data//maps/Route3_Underpass/scripts.pory"
	release
# 129 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Movement_0
# 130 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 131 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_0
# 132 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_11
# 133 "data//maps/Route3_Underpass/scripts.pory"
	release
# 134 "data//maps/Route3_Underpass/scripts.pory"
	delay 16
# 135 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_12
# 136 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_13
# 137 "data//maps/Route3_Underpass/scripts.pory"
	release
# 140 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_EvilBattle_Text_14
# 143 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 144 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_7
# 145 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 146 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_8
# 147 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 148 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_12
# 149 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_15
# 150 "data//maps/Route3_Underpass/scripts.pory"
	release
# 151 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_9
# 152 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 153 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_12
# 154 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_16
# 155 "data//maps/Route3_Underpass/scripts.pory"
	release
# 156 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_10
# 157 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 158 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_GAB
# 159 "data//maps/Route3_Underpass/scripts.pory"
	fadedefaultbgm
# 162 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_11
# 163 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_12
# 164 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 165 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 166 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_17
# 167 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 168 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_18
# 169 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 170 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_19
# 171 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 172 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_20
# 173 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 174 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_21
# 175 "data//maps/Route3_Underpass/scripts.pory"
	release
# 176 "data//maps/Route3_Underpass/scripts.pory"
	giveitem ITEM_EVERSTONE
# 177 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 178 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_22
# 179 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_2
# 180 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_23
# 181 "data//maps/Route3_Underpass/scripts.pory"
	release
# 182 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 183 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_13
# 184 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_14
# 185 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement LOCALID_CLEF
# 186 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 187 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_9
# 188 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 189 "data//maps/Route3_Underpass/scripts.pory"
	delay 8
# 190 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 191 "data//maps/Route3_Underpass/scripts.pory"
	speakername Route3_Underpass_EvilBattle_Text_6
# 192 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 193 "data//maps/Route3_Underpass/scripts.pory"
	release
# 194 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_15
# 195 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 196 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_BREECH
# 197 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_CLEF
# 199 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 200 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_11
# 201 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 202 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 205 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 206 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


# 56 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger0_Movement_0:
# 56 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 56 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 67 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger1_Movement_0:
# 67 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 78 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger2_Movement_0:
# 78 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 78 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 88 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_0:
# 88 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 93 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_1:
# 93 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 97 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_2:
# 97 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 97 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 103 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_3:
# 103 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 109 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_4:
# 109 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
# 109 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
	step_end

# 120 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_5:
# 120 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
# 120 "data//maps/Route3_Underpass/scripts.pory"
	emote_question_mark
	step_end

# 124 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_6:
# 124 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 144 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_7:
# 144 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 146 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_8:
# 146 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 151 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_9:
# 151 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 156 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_10:
# 156 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 156 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 156 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 156 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 156 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 156 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 156 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 162 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_11:
# 162 "data//maps/Route3_Underpass/scripts.pory"
	walk_up
	step_end

# 163 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_12:
# 163 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 163 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 183 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_13:
# 183 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 183 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 183 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 183 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 183 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 183 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 183 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 183 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 184 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_14:
# 184 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 184 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 184 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 184 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 194 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_15:
# 194 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 194 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 194 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 194 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 194 "data//maps/Route3_Underpass/scripts.pory"
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
# 40 "data//maps/Route3_Underpass/scripts.pory"
	.string "A hiker with a Clefairy ran past here a\n"
	.string "while ago. He was being chased by some\l"
	.string "weirdo in a dark outfit. The things you\l"
	.string "see while on the road...$"

Route3_Underpass_NPC2_Text_0:
# 45 "data//maps/Route3_Underpass/scripts.pory"
	.string "They say that a rare Pokémon has made\n"
	.string "these caves its home. I need to go\l"
	.string "deeper down!$"

Route3_Underpass_EvilBattle_Text_0:
# 95 "data//maps/Route3_Underpass/scripts.pory"
	.string "???$"

Route3_Underpass_EvilBattle_Text_1:
# 96 "data//maps/Route3_Underpass/scripts.pory"
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
# 106 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know anything about any\n"
	.string "dreamstones, please! Just stop!$"

Route3_Underpass_EvilBattle_Text_6:
# 111 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy$"

Route3_Underpass_EvilBattle_Text_7:
# 112 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clee!!!$"

Route3_Underpass_EvilBattle_Text_8:
# 116 "data//maps/Route3_Underpass/scripts.pory"
	.string "Hahaha! Your Clefairy wants to protect\n"
	.string "you, but you don't even have the will to\l"
	.string "fight alongside her. Just give up\l"
	.string "before I bring my Pokémon out!$"

Route3_Underpass_EvilBattle_Text_9:
# 123 "data//maps/Route3_Underpass/scripts.pory"
	.string "Who's there? What you do want?$"

Route3_Underpass_EvilBattle_Text_10:
# 127 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER}! It's you! This thug is\n"
	.string "trying to take Clefairy away! Help me,\l"
	.string "please!$"

Route3_Underpass_EvilBattle_Text_11:
# 132 "data//maps/Route3_Underpass/scripts.pory"
	.string "Oh, you're just some stupid kid. How\n"
	.string "about you mind your own business?$"

Route3_Underpass_EvilBattle_Text_12:
# 135 "data//maps/Route3_Underpass/scripts.pory"
	.string "Gabrielle$"

Route3_Underpass_EvilBattle_Text_13:
# 136 "data//maps/Route3_Underpass/scripts.pory"
	.string "No?\p"
	.string "No?!?!\p"
	.string "Well then...let Gabrielle teach you a\n"
	.string "lesson: don't stick your nose where it\l"
	.string "doesn't belong!$"

Route3_Underpass_EvilBattle_Text_14:
# 140 "data//maps/Route3_Underpass/scripts.pory"
	.string "My Pokémon just aren't good enough!$"

Route3_Underpass_EvilBattle_Text_15:
# 149 "data//maps/Route3_Underpass/scripts.pory"
	.string "Fine - keep your stupid Clefairy!$"

Route3_Underpass_EvilBattle_Text_16:
# 154 "data//maps/Route3_Underpass/scripts.pory"
	.string "And you! I'll remember this, {PLAYER}.\n"
	.string "You'll regret messing with Team Somber!$"

Route3_Underpass_EvilBattle_Text_17:
# 166 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - Clefairy and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible.$"

Route3_Underpass_EvilBattle_Text_18:
# 168 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with a partner, I can't be\l"
	.string "that way.$"

Route3_Underpass_EvilBattle_Text_19:
# 170 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\p"
	.string "...\p"
	.string "I let her down.$"

Route3_Underpass_EvilBattle_Text_20:
# 172 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If Team Somber comes after\l"
	.string "Clefairy again, we'll be ready.$"

Route3_Underpass_EvilBattle_Text_21:
# 174 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - we owe you. As thanks,\n"
	.string "Clefairy and I want to give you the\l"
	.string "stone that Gabrielle person was after...$"

Route3_Underpass_EvilBattle_Text_22:
# 178 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know about dreamstones, but it\n"
	.string "looks like a regular Everstone to me.\l"
	.string "Who knows what she saw?$"

Route3_Underpass_EvilBattle_Text_23:
# 180 "data//maps/Route3_Underpass/scripts.pory"
	.string "Don't worry - Clefairy's bored of that\n"
	.string "stone already. Next, we'll head to Mt.\l"
	.string "Ceram to collect rare stones there!$"
