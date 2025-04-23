# 1 "data//maps/IvyRiver_Main/scripts.pory"

# 2 "data//maps/IvyRiver_Main/scripts.pory"

# 3 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_BRO, 5
# 4 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_ZA, 6
# 5 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_F1, 7
# 6 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_F2, 8
# 7 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_F3, 9
# 8 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_SHIP, 11

IvyRiver_Main_MapScripts::
	.byte 0


IvyRiver_Main_Fisherman_AssembleTrigger::
# 15 "data//maps/IvyRiver_Main/scripts.pory"
	goto_if_set FLAG_HIDE_IVYRIVER_FISHERMEN, IvyRiver_Main_Fisherman_AssembleTrigger_2
# 17 "data//maps/IvyRiver_Main/scripts.pory"
	lockall
# 18 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 19 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 20 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 3, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 21 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_1
# 22 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 26 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 27 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2
# 28 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 29 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 30 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_Fisherman_AssembleTrigger_Text_0
# 31 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 35 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 36 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 37 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 3, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 38 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 39 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 40 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 3
# 42 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_4
# 43 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_5
# 44 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 45 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 46 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 2
# 48 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_6
# 49 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 50 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 51 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 1
# 53 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 4, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_7
# 54 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 55 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 4
# 59 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 60 "data//maps/IvyRiver_Main/scripts.pory"
	releaseall
	end

IvyRiver_Main_Fisherman_AssembleTrigger_2:
	end


IvyRiver_Main_GreenScarf::
# 65 "data//maps/IvyRiver_Main/scripts.pory"
	lockall
# 66 "data//maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_IVYRIVER_ZARUDE_QUEST
# 68 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 10
# 69 "data//maps/IvyRiver_Main/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 70 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 71 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 74 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_SHIP
# 75 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_SHIP, 38, 53
# 76 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_SHIP, IvyRiver_Main_GreenScarf_Movement_0
# 77 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 79 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_1
# 80 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 81 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 84 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F1
# 85 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F1, 38, 57
# 86 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 87 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_2
# 88 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 89 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 92 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F2
# 93 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F2, 38, 57
# 94 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 95 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_3
# 96 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 97 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 100 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F3
# 101 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F3, 38, 57
# 102 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 103 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_4
# 104 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 105 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 108 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_0
# 109 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 110 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 111 "data//maps/IvyRiver_Main/scripts.pory"
	removeitem ITEM_GREEN_SCARF
# 112 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_1, MSGBOX_SIGN
# 113 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 114 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 116 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 117 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 118 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 119 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 120 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 122 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_2
# 123 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 124 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 125 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 126 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 127 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_6
# 128 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 129 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 132 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_BRO
# 133 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_BRO, 38, 66
# 135 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 136 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_7
# 137 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 138 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 140 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_3
# 141 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 142 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_5
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 144 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 146 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 147 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_8
# 148 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_9
# 149 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 150 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 152 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 153 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 154 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_4
# 156 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 157 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 159 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 160 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 161 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 162 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 163 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 164 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_5
# 165 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 166 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 168 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 169 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 170 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 171 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_6
# 172 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 173 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 175 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 176 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 177 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 178 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 179 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 180 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_7
# 181 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 182 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 184 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 185 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 186 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 187 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_8
# 188 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 189 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 191 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 192 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 193 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 194 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 195 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_6
# 196 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_5
# 197 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 198 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 201 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_ZA
# 202 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_ZA, 39, 66
# 203 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 204 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_11
# 205 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 206 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 208 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_5
# 209 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 210 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 211 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_9
# 212 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 213 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 215 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_12
# 216 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 217 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 219 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 221 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 222 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_10
# 223 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 224 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 226 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 227 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_13
# 228 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 229 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 231 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_11
# 232 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 233 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 237 "data//maps/IvyRiver_Main/scripts.pory"
	setwildbattle SPECIES_ZARUDE_DADA, 40
# 238 "data//maps/IvyRiver_Main/scripts.pory"
	dowildbattle
# 242 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 243 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_QUEST
# 244 "data//maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_IVYRIVER_ZARUDE_REAL
# 245 "data//maps/IvyRiver_Main/scripts.pory"
	completequest QUEST_LILYPOND_FISHERMAN
# 247 "data//maps/IvyRiver_Main/scripts.pory"
	releaseall
	end


# 18 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0:
# 18 "data//maps/IvyRiver_Main/scripts.pory"
	face_right
# 18 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 21 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_1:
# 21 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 21 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
	step_end

# 27 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2:
# 27 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_right
	step_end

# 35 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3:
# 35 "data//maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 42 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_4:
# 42 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 42 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 42 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 43 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_5:
# 43 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 43 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 43 "data//maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 48 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_6:
# 48 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 48 "data//maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 53 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_7:
# 53 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 53 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 53 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 53 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
	step_end

# 76 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_0:
# 76 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 76 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 76 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 79 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_1:
# 79 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 87 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_2:
# 87 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 87 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 95 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_3:
# 95 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 95 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 103 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_4:
# 103 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 116 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_5:
# 116 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 127 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_6:
# 127 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 127 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 136 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_7:
# 136 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 136 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 136 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 136 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 136 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 136 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 147 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_8:
# 147 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 147 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 147 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 148 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_9:
# 148 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 148 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 148 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 148 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 148 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 148 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 152 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_10:
# 152 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 204 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_11:
# 204 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 204 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 204 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 204 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 204 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 204 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 215 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_12:
# 215 "data//maps/IvyRiver_Main/scripts.pory"
	emote_question_mark
# 215 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 227 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_13:
# 227 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 227 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_down
	step_end

IvyRiver_Main_Fisherman_AssembleTrigger_Text_0:
# 30 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}! You came! Let's start our\n"
	.string "search...but after so many years, we\l"
	.string "don't remember that day too clearly.\p"
	.string "The only thing we remember that day is\n"
	.string "that it was really cold and we were all\l"
	.string "dressed in green. Let's spread out and\l"
	.string "search the river for anything we can\l"
	.string "find!$"

IvyRiver_Main_GreenScarf_Text_0:
# 108 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}, did you find anything?$"

IvyRiver_Main_GreenScarf_Text_1:
# 112 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER} handed the Green Scarf to\n"
	.string "the fishermen.$"

IvyRiver_Main_GreenScarf_Text_2:
# 122 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Th-this is...it's our brother's scarf!\n"
	.string "This is incredible! We shouldn't have\l"
	.string "given up after all.\p"
	.string "Where did you find it?\p"
	.string "Right here? Then he's got to be\n"
	.string "somewhere -$"

IvyRiver_Main_GreenScarf_Text_3:
# 140 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I left my scarf here somewhere...where\n"
	.string "could it have gone?$"

IvyRiver_Main_GreenScarf_Text_4:
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Brothers - is that you?$"

IvyRiver_Main_GreenScarf_Text_5:
# 164 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes...are you-are you alright? It's -\n"
	.string "it's just - we're so glad to se you!\p"
	.string "When we lost you all those years ago, we\n"
	.string "thought you were gone for good. How did\l"
	.string "you manage to stay alive?$"

IvyRiver_Main_GreenScarf_Text_6:
# 171 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I was raised by a Pokemon! It took care\n"
	.string "of me, fed me, and raised me. I owe it my\l"
	.string "life.$"

IvyRiver_Main_GreenScarf_Text_7:
# 180 "data//maps/IvyRiver_Main/scripts.pory"
	.string "What a story...where is that Pokemon?\n"
	.string "We owe it too - for keeping our brother\l"
	.string "safe all these years.\p"
	.string "Brother, will you come back with us?$"

IvyRiver_Main_GreenScarf_Text_8:
# 187 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes. Yes of course. You're my family.$"

IvyRiver_Main_GreenScarf_Text_9:
# 211 "data//maps/IvyRiver_Main/scripts.pory"
	.string "No - Dada! It's fine. They're my family.\n"
	.string "The brothers I told you about!$"

IvyRiver_Main_GreenScarf_Text_10:
# 222 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Dada - it's time for me to leave. I'm\n"
	.string "going to go back to the city with them.$"

IvyRiver_Main_GreenScarf_Text_11:
# 231 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I'll be fine.\p"
	.string "...\p"
	.string "Because you raised me to be fine.$"
