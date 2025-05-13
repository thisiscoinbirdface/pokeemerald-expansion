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
# 19 "data//maps/IvyRiver_Main/scripts.pory"
	lockall
# 20 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 21 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 22 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 3, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 23 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_1
# 24 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 28 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 29 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2
# 30 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 31 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 32 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_Fisherman_AssembleTrigger_Text_0
# 33 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 37 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 38 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 39 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 3, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 40 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 41 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 42 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 3
# 44 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_4
# 45 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_5
# 46 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 47 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 48 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 2
# 50 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_6
# 51 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 52 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 53 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 1
# 55 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 4, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_7
# 56 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 57 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 4
# 61 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 62 "data//maps/IvyRiver_Main/scripts.pory"
	releaseall
	end

IvyRiver_Main_Fisherman_AssembleTrigger_2:
	end


IvyRiver_Main_GreenScarf::
# 69 "data//maps/IvyRiver_Main/scripts.pory"
	lockall
# 70 "data//maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_IVYRIVER_ZARUDE_QUEST
# 72 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 10
# 73 "data//maps/IvyRiver_Main/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 74 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 75 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 78 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_SHIP
# 79 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_SHIP, 38, 53
# 80 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_SHIP, IvyRiver_Main_GreenScarf_Movement_0
# 81 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 82 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_SHIP, 38, 56
# 83 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxyperm LOCALID_SHIP, 38, 56
# 84 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 86 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_1
# 87 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 88 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 91 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F1
# 92 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F1, 38, 57
# 93 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 94 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_2
# 95 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 96 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 99 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F2
# 100 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F2, 38, 57
# 101 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 102 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_3
# 103 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 104 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 107 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F3
# 108 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F3, 38, 57
# 109 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 110 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_4
# 111 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 112 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 115 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_0
# 116 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 117 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 118 "data//maps/IvyRiver_Main/scripts.pory"
	removeitem ITEM_GREEN_SCARF
# 119 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_1, MSGBOX_SIGN
# 120 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 121 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 123 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 124 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 125 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 126 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 127 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 129 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_2
# 130 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 131 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 132 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 133 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 134 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_5
# 135 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 136 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 139 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_BRO
# 140 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_BRO, 38, 66
# 142 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_6
# 144 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 145 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 147 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_3
# 148 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 149 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_7
# 150 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 151 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 153 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 154 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_8
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_9
# 156 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 157 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 159 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 160 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 161 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 162 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_4
# 163 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 164 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 166 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 167 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 168 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 169 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 170 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 171 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_5
# 172 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 173 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 175 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 176 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 177 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 178 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_6
# 179 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 180 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 182 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_7
# 183 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_7
# 184 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_7
# 185 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 186 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 187 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_7
# 188 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 189 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 191 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_11
# 192 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_11
# 193 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_11
# 194 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 195 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 196 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_8
# 197 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 198 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 200 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 201 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 202 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 203 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_9
# 204 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 205 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 207 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 208 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_7
# 209 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_7
# 210 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_7
# 211 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_5
# 212 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_7
# 213 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 214 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 217 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_ZA
# 218 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_ZA, 39, 66
# 219 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_12
# 221 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 222 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 223 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_13
# 224 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 225 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 227 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_14
# 228 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 229 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 230 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_10
# 231 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 232 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 234 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_15
# 235 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 236 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 238 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 239 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 240 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 241 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_11
# 242 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 243 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 245 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 246 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_16
# 247 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 248 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 250 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 251 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 252 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 253 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_12
# 254 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 255 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 257 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 258 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_17
# 259 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 260 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 262 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 263 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 264 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 265 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_13
# 266 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 267 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 270 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 273 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_1
# 274 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_18
# 275 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 276 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_0
# 277 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 279 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_14
# 280 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 281 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 282 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 283 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_10
# 284 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 285 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 286 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_19
# 287 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 288 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 291 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_1
# 292 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_20
# 293 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 295 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_15
# 296 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 300 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_21
# 301 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_21
# 302 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 303 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 304 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F3
# 305 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_22
# 306 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 307 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 308 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F2
# 309 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_23
# 310 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 311 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 312 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F1
# 314 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_21
# 315 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 316 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_24
# 318 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 319 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_16
# 320 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 321 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_25
# 322 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 323 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 325 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_21
# 326 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 327 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 328 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_BRO
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_8
# 332 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_8
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_SHIP, IvyRiver_Main_GreenScarf_Movement_26
# 334 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_27
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_28
# 339 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 340 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_29
# 341 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_30
# 342 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 344 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 345 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_ZA
# 349 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 350 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_ITEM_IVYRIVER_GREEN_SCARF
# 351 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_QUEST
# 352 "data//maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_IVYRIVER_ZARUDE_REAL
# 353 "data//maps/IvyRiver_Main/scripts.pory"
	completequest QUEST_LILYPOND_FISHERMAN
# 355 "data//maps/IvyRiver_Main/scripts.pory"
	releaseall
	end


IvyRiver_Main_Zarude_Legendary::
# 362 "data//maps/IvyRiver_Main/scripts.pory"
	lockall
# 364 "data//maps/IvyRiver_Main/scripts.pory"
	special SaveGame
# 365 "data//maps/IvyRiver_Main/scripts.pory"
	waitstate
# 366 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 369 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 370 "data//maps/IvyRiver_Main/scripts.pory"
	waitmoncry
# 371 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_REAL
# 373 "data//maps/IvyRiver_Main/scripts.pory"
	setwildbattle SPECIES_ZARUDE_DADA, 40
# 374 "data//maps/IvyRiver_Main/scripts.pory"
	dowildbattle
# 375 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 1
# 377 "data//maps/IvyRiver_Main/scripts.pory"
	releaseall
	end


# 20 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0:
# 20 "data//maps/IvyRiver_Main/scripts.pory"
	face_right
# 20 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 23 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_1:
# 23 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 23 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
	step_end

# 29 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2:
# 29 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_right
	step_end

# 37 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3:
# 37 "data//maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 44 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_4:
# 44 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 44 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 44 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 45 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_5:
# 45 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 45 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 45 "data//maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 50 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_6:
# 50 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 50 "data//maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 55 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_7:
# 55 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 55 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 55 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 55 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
	step_end

# 80 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_0:
# 80 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 80 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 80 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 86 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_1:
# 86 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 94 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_2:
# 94 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 94 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 102 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_3:
# 102 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 102 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 110 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_4:
# 110 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 123 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_5:
# 123 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 123 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 143 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_6:
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 149 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_7:
# 149 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 154 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_8:
# 154 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 154 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 154 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 155 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_9:
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 159 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_10:
# 159 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 191 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_11:
# 191 "data//maps/IvyRiver_Main/scripts.pory"
	emote_question_mark
	step_end

# 220 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_12:
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_left
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 223 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_13:
# 223 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 223 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 223 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 227 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_14:
# 227 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
# 227 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 234 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_15:
# 234 "data//maps/IvyRiver_Main/scripts.pory"
	emote_question_mark
# 234 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 246 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_16:
# 246 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 246 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_down
	step_end

# 258 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_17:
# 258 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_down
	step_end

# 274 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_18:
# 274 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 274 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 274 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 274 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 286 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_19:
# 286 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 286 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 286 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 286 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 292 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_20:
# 292 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 292 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 292 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 292 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 292 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 292 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 292 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 300 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_21:
# 300 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 305 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_22:
# 305 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 305 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 309 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_23:
# 309 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 309 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 317 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_24:
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 321 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_25:
# 321 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 321 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 321 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 321 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 321 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 333 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_26:
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 337 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_27:
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 338 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_28:
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 340 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_29:
# 340 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 340 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 341 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_30:
# 341 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 341 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 341 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 341 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 341 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 341 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 341 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

IvyRiver_Main_Fisherman_AssembleTrigger_Text_0:
# 32 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}! You came! Let's start our\n"
	.string "search...but after so many years, we\l"
	.string "don't remember that day too clearly.\p"
	.string "The only thing we remember that day is\n"
	.string "that it was really cold and we were all\l"
	.string "dressed in purple. Let's spread out and\l"
	.string "search the river for anything we can\l"
	.string "find!$"

IvyRiver_Main_GreenScarf_Text_0:
# 115 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}, did you find anything?$"

IvyRiver_Main_GreenScarf_Text_1:
# 119 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER} handed the Purple Scarf to\n"
	.string "the fishermen.$"

IvyRiver_Main_GreenScarf_Text_2:
# 129 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Th-this is...it's our brother's scarf!\n"
	.string "This is incredible! We shouldn't have\l"
	.string "given up after all.\p"
	.string "Where did you find it?\p"
	.string "Right here? Then he's got to be\n"
	.string "somewhere -$"

IvyRiver_Main_GreenScarf_Text_3:
# 147 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I left my scarf here somewhere...where\n"
	.string "could it have gone?$"

IvyRiver_Main_GreenScarf_Text_4:
# 162 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Brothers - is that you?$"

IvyRiver_Main_GreenScarf_Text_5:
# 171 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes...are you-are you alright? It's -\n"
	.string "it's just - we're so glad to se you!\p"
	.string "When we lost you all those years ago, we\n"
	.string "thought you were gone for good. How did\l"
	.string "you manage to stay alive?$"

IvyRiver_Main_GreenScarf_Text_6:
# 178 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I was raised by a Pokémon! It took care\n"
	.string "of me, fed me, and raised me. I owe it my\l"
	.string "life.$"

IvyRiver_Main_GreenScarf_Text_7:
# 187 "data//maps/IvyRiver_Main/scripts.pory"
	.string "What a story...where is that Pokémon?\n"
	.string "We owe it too - for keeping our brother\l"
	.string "safe all these years.\p"
	.string "...\p"
	.string "...$"

IvyRiver_Main_GreenScarf_Text_8:
# 196 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Brother - we lost so many years. We\n"
	.string "don't want to lose more.\p"
	.string "Will you come back with us?$"

IvyRiver_Main_GreenScarf_Text_9:
# 203 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes. Yes of course. You're my family.$"

IvyRiver_Main_GreenScarf_Text_10:
# 230 "data//maps/IvyRiver_Main/scripts.pory"
	.string "No - Dada! It's fine. They're my family.\n"
	.string "The brothers I told you about!$"

IvyRiver_Main_GreenScarf_Text_11:
# 241 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Dada - it's time for me to leave. I'm\n"
	.string "going to go back to the city with them.$"

IvyRiver_Main_GreenScarf_Text_12:
# 253 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I'll be fine.\p"
	.string "...\p"
	.string "Because you raised me to be fine.$"

IvyRiver_Main_GreenScarf_Text_13:
# 265 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I'll miss you too. But my home is\n"
	.string "elsewhere.\p"
	.string "...\p"
	.string "Dada, you made me who I am. I'll never\n"
	.string "forget that.$"

IvyRiver_Main_GreenScarf_Text_14:
# 279 "data//maps/IvyRiver_Main/scripts.pory"
	.string "We want to thank you for taking care of\n"
	.string "our brother. Please keep his purple\l"
	.string "scarf with you.$"

IvyRiver_Main_GreenScarf_Text_15:
# 295 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Shall we go then? We have much to catch\n"
	.string "up on.$"

IvyRiver_Main_GreenScarf_Text_16:
# 319 "data//maps/IvyRiver_Main/scripts.pory"
	.string "See you Dada.\p"
	.string "I-I'll never forget you.$"

IvyRiver_Trainer_A_Text_0:
# 396 "data//maps/IvyRiver_Main/scripts.pory"
	.string "$"
