# 1 "data/maps/IvyRiver_Main/scripts.pory"

# 2 "data/maps/IvyRiver_Main/scripts.pory"

# 3 "data/maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_BRO, 5
# 4 "data/maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_ZA, 6
# 5 "data/maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_F1, 7
# 6 "data/maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_F2, 8
# 7 "data/maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_F3, 9
# 8 "data/maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_SHIP, 11

IvyRiver_Main_MapScripts::
	.byte 0


IvyRiver_Main_Fisherman_AssembleTrigger::
# 15 "data/maps/IvyRiver_Main/scripts.pory"
	goto_if_set FLAG_HIDE_IVYRIVER_FISHERMEN, IvyRiver_Main_Fisherman_AssembleTrigger_2
# 19 "data/maps/IvyRiver_Main/scripts.pory"
	lockall
# 20 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 21 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 22 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 3, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 23 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_1
# 24 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 28 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 29 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2
# 30 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 31 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 32 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_Fisherman_AssembleTrigger_Text_0
# 33 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 37 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 38 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 39 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 3, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 40 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 41 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 42 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject 3
# 44 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_4
# 45 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_5
# 46 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 47 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 48 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject 2
# 50 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_6
# 51 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 52 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 53 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject 1
# 55 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement 4, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_7
# 56 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 57 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject 4
# 61 "data/maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 62 "data/maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_ITEM_IVYRIVER_GREEN_SCARF
# 63 "data/maps/IvyRiver_Main/scripts.pory"
	releaseall
	end

IvyRiver_Main_Fisherman_AssembleTrigger_2:
	end


IvyRiver_Main_GreenScarf::
# 70 "data/maps/IvyRiver_Main/scripts.pory"
	lockall
# 71 "data/maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_IVYRIVER_ZARUDE_QUEST
# 73 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject 10
# 74 "data/maps/IvyRiver_Main/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 75 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 76 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 79 "data/maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_SHIP
# 80 "data/maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_SHIP, 38, 53
# 81 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_SHIP, IvyRiver_Main_GreenScarf_Movement_0
# 82 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 83 "data/maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_SHIP, 38, 56
# 84 "data/maps/IvyRiver_Main/scripts.pory"
	setobjectxyperm LOCALID_SHIP, 38, 56
# 85 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 87 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_1
# 88 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 89 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 92 "data/maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F1
# 93 "data/maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F1, 38, 57
# 94 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 95 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_2
# 96 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 97 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 100 "data/maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F2
# 101 "data/maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F2, 38, 57
# 102 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 103 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_3
# 104 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 105 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 108 "data/maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F3
# 109 "data/maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F3, 38, 57
# 110 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 111 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_4
# 112 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 113 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 116 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_0
# 117 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 118 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 119 "data/maps/IvyRiver_Main/scripts.pory"
	removeitem ITEM_GREEN_SCARF
# 120 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_1, MSGBOX_SIGN
# 121 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 122 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 124 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 125 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 126 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 127 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 128 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 130 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_2
# 131 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 132 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 133 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 134 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 135 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_5
# 136 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 137 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 140 "data/maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_BRO
# 141 "data/maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_BRO, 38, 66
# 143 "data/maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 144 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_6
# 145 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 146 "data/maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 148 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_3
# 149 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 150 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_7
# 151 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 152 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 154 "data/maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 155 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_8
# 156 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_9
# 157 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 158 "data/maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 160 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 161 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 162 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 163 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_4
# 164 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 165 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 167 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 168 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 169 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 170 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 171 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 172 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_5
# 173 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 174 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 176 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 177 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 178 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 179 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_6
# 180 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 181 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 183 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_7
# 184 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_7
# 185 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_7
# 186 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 187 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 188 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_7
# 189 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 190 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 192 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_11
# 193 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_11
# 194 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_11
# 195 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 196 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 197 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_8
# 198 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 199 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 201 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 202 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 203 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 204 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_9
# 205 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 206 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 208 "data/maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 209 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_7
# 210 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_7
# 211 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_7
# 212 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_5
# 213 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_7
# 214 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 215 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 218 "data/maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_ZA
# 219 "data/maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_ZA, 39, 66
# 220 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 221 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_12
# 222 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 223 "data/maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 224 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_13
# 225 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 226 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 228 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_14
# 229 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 230 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 231 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_10
# 232 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 233 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 235 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_15
# 236 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 237 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 239 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 240 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 241 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 242 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_11
# 243 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 244 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 246 "data/maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 247 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_16
# 248 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 249 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 251 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 252 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 253 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 254 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_12
# 255 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 256 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 258 "data/maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 259 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_17
# 260 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 261 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 263 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 264 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 265 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 266 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_13
# 267 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 268 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 271 "data/maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 274 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_1
# 275 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_18
# 276 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 277 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_0
# 278 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 280 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_14
# 281 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 282 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 283 "data/maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 284 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_10
# 285 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 286 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 287 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_19
# 288 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 289 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 292 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_1
# 293 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_20
# 294 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 296 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_15
# 297 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 301 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_21
# 302 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_21
# 303 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 304 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 305 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F3
# 306 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_22
# 307 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 308 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 309 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F2
# 310 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_23
# 311 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 312 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 313 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F1
# 315 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_21
# 316 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 317 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 318 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_24
# 319 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 320 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_16
# 321 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 322 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_25
# 323 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 324 "data/maps/IvyRiver_Main/scripts.pory"
	delay 16
# 326 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_21
# 327 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 328 "data/maps/IvyRiver_Main/scripts.pory"
	delay 8
# 329 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_BRO
# 332 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_8
# 333 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_8
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_SHIP, IvyRiver_Main_GreenScarf_Movement_26
# 335 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 338 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_27
# 339 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_28
# 340 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 341 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_29
# 342 "data/maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_30
# 343 "data/maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 345 "data/maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 346 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_ZA
# 350 "data/maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 351 "data/maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_ITEM_IVYRIVER_GREEN_SCARF
# 352 "data/maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_QUEST
# 353 "data/maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_ZARUDE
# 354 "data/maps/IvyRiver_Main/scripts.pory"
	completequest QUEST_LILYPOND_FISHERMAN
# 356 "data/maps/IvyRiver_Main/scripts.pory"
	releaseall
	end


IvyRiver_Main_Zarude_Legendary::
# 363 "data/maps/IvyRiver_Main/scripts.pory"
	lockall
# 365 "data/maps/IvyRiver_Main/scripts.pory"
	special SaveGame
# 366 "data/maps/IvyRiver_Main/scripts.pory"
	waitstate
# 367 "data/maps/IvyRiver_Main/scripts.pory"
	release
# 370 "data/maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 371 "data/maps/IvyRiver_Main/scripts.pory"
	waitmoncry
# 372 "data/maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_ZARUDE
# 374 "data/maps/IvyRiver_Main/scripts.pory"
	setwildbattle SPECIES_ZARUDE_DADA, 40
# 375 "data/maps/IvyRiver_Main/scripts.pory"
	dowildbattle
# 376 "data/maps/IvyRiver_Main/scripts.pory"
	removeobject 1
# 378 "data/maps/IvyRiver_Main/scripts.pory"
	releaseall
	end


IvyRiver_Trainer_A::
# 397 "data/maps/IvyRiver_Main/scripts.pory"
	trainerbattle_single TRAINER_IVY_RIVER_A, IvyRiver_Trainer_A_Text_0, IvyRiver_Trainer_A_Text_1
# 403 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_A_Text_2
# 404 "data/maps/IvyRiver_Main/scripts.pory"
	release
	end


IvyRiver_Trainer_B::
# 410 "data/maps/IvyRiver_Main/scripts.pory"
	trainerbattle_single TRAINER_IVY_RIVER_B, IvyRiver_Trainer_B_Text_0, IvyRiver_Trainer_B_Text_1
# 416 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_B_Text_2
# 417 "data/maps/IvyRiver_Main/scripts.pory"
	release
	end


IvyRiver_Trainer_C::
# 423 "data/maps/IvyRiver_Main/scripts.pory"
	trainerbattle_single TRAINER_IVY_RIVER_C, IvyRiver_Trainer_C_Text_0, IvyRiver_Trainer_C_Text_1
# 429 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_C_Text_2
# 430 "data/maps/IvyRiver_Main/scripts.pory"
	release
	end


IvyRiver_Trainer_D::
# 435 "data/maps/IvyRiver_Main/scripts.pory"
	trainerbattle_single TRAINER_IVY_RIVER_D, IvyRiver_Trainer_D_Text_0, IvyRiver_Trainer_D_Text_1
# 441 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_D_Text_2
# 442 "data/maps/IvyRiver_Main/scripts.pory"
	release
	end


IvyRiver_Trainer_D_Pinsir::
# 446 "data/maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_PINSIR, CRY_MODE_NORMAL
# 447 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_D_Pinsir_Text_0, MSGBOX_NPC
	end


IvyRiver_NPC1::
# 453 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_NPC1_Text_0, MSGBOX_NPC
	end


IvyRiver_NPC2::
# 457 "data/maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_NPC2_Text_0, MSGBOX_NPC
	end


# 20 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0:
# 20 "data/maps/IvyRiver_Main/scripts.pory"
	face_right
# 20 "data/maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 23 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_1:
# 23 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 23 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
	step_end

# 29 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2:
# 29 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_right
	step_end

# 37 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3:
# 37 "data/maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 44 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_4:
# 44 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 44 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 44 "data/maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 45 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_5:
# 45 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 45 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 45 "data/maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 50 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_6:
# 50 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 50 "data/maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 55 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_7:
# 55 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 55 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 55 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 55 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
	step_end

# 81 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_0:
# 81 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 81 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 81 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_1:
# 87 "data/maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 95 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_2:
# 95 "data/maps/IvyRiver_Main/scripts.pory"
	walk_right
# 95 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 103 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_3:
# 103 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 103 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_4:
# 111 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 124 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_5:
# 124 "data/maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 124 "data/maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 144 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_6:
# 144 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 144 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 144 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 144 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 144 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 144 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 150 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_7:
# 150 "data/maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 155 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_8:
# 155 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 155 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 155 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 156 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_9:
# 156 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 156 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 156 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 156 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 160 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_10:
# 160 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 192 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_11:
# 192 "data/maps/IvyRiver_Main/scripts.pory"
	emote_question_mark
	step_end

# 221 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_12:
# 221 "data/maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 221 "data/maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 221 "data/maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 221 "data/maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 221 "data/maps/IvyRiver_Main/scripts.pory"
	walk_fast_left
# 221 "data/maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 224 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_13:
# 224 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 224 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 224 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 228 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_14:
# 228 "data/maps/IvyRiver_Main/scripts.pory"
	face_up
# 228 "data/maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 235 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_15:
# 235 "data/maps/IvyRiver_Main/scripts.pory"
	emote_question_mark
# 235 "data/maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 247 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_16:
# 247 "data/maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 247 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_down
	step_end

# 259 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_17:
# 259 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_down
	step_end

# 275 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_18:
# 275 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 275 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 275 "data/maps/IvyRiver_Main/scripts.pory"
	walk_right
# 275 "data/maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 287 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_19:
# 287 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 287 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 287 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 287 "data/maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 293 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_20:
# 293 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 293 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 293 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 293 "data/maps/IvyRiver_Main/scripts.pory"
	walk_right
# 293 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 293 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 293 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 301 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_21:
# 301 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 306 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_22:
# 306 "data/maps/IvyRiver_Main/scripts.pory"
	walk_right
# 306 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 310 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_23:
# 310 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 310 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 318 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_24:
# 318 "data/maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 322 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_25:
# 322 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 322 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 322 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 322 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 322 "data/maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 334 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_26:
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
# 334 "data/maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 338 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_27:
# 338 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 338 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 338 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 338 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 339 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_28:
# 339 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 341 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_29:
# 341 "data/maps/IvyRiver_Main/scripts.pory"
	walk_left
# 341 "data/maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 342 "data/maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_30:
# 342 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 342 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 342 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 342 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 342 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 342 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
# 342 "data/maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

IvyRiver_Main_Fisherman_AssembleTrigger_Text_0:
# 32 "data/maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}! You came! Let's start our\n"
	.string "search...but after so many years, we\l"
	.string "don't remember that day too clearly.\p"
	.string "The only thing we remember that day is\n"
	.string "that it was really cold and we were all\l"
	.string "dressed in purple clothes.\p"
	.string "Let's spread out and search for\n"
	.string "anything we can find!$"

IvyRiver_Main_GreenScarf_Text_0:
# 116 "data/maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}, did you find anything?$"

IvyRiver_Main_GreenScarf_Text_1:
# 120 "data/maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER} handed the Purple Scarf to\n"
	.string "the fishermen.$"

IvyRiver_Main_GreenScarf_Text_2:
# 130 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Th-this is...it's our brother's scarf!\n"
	.string "This is incredible! We shouldn't have\l"
	.string "given up after all.\p"
	.string "Where did you find it?\p"
	.string "Right here? Then he's got to be\n"
	.string "somewhere -$"

IvyRiver_Main_GreenScarf_Text_3:
# 148 "data/maps/IvyRiver_Main/scripts.pory"
	.string "I left my scarf here somewhere...where\n"
	.string "could it have gone?$"

IvyRiver_Main_GreenScarf_Text_4:
# 163 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Brothers - is that you?$"

IvyRiver_Main_GreenScarf_Text_5:
# 172 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes...are you-are you alright? It's -\n"
	.string "it's just - we're so glad to se you!\p"
	.string "When we lost you all those years ago, we\n"
	.string "thought you were gone for good. How did\l"
	.string "you manage to stay alive?$"

IvyRiver_Main_GreenScarf_Text_6:
# 179 "data/maps/IvyRiver_Main/scripts.pory"
	.string "I was raised by a Pokémon! It took care\n"
	.string "of me, fed me, and raised me. I owe it my\l"
	.string "life.$"

IvyRiver_Main_GreenScarf_Text_7:
# 188 "data/maps/IvyRiver_Main/scripts.pory"
	.string "What a story...where is that Pokémon?\n"
	.string "We owe it too - for keeping our brother\l"
	.string "safe all these years.\p"
	.string "...\p"
	.string "...$"

IvyRiver_Main_GreenScarf_Text_8:
# 197 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Brother - we lost so many years. We\n"
	.string "don't want to lose more.\p"
	.string "Will you come back with us?$"

IvyRiver_Main_GreenScarf_Text_9:
# 204 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes. Yes of course. You're my family.$"

IvyRiver_Main_GreenScarf_Text_10:
# 231 "data/maps/IvyRiver_Main/scripts.pory"
	.string "No - Dada! It's fine. They're my family.\n"
	.string "The brothers I told you about!$"

IvyRiver_Main_GreenScarf_Text_11:
# 242 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Dada - it's time for me to leave. I'm\n"
	.string "going to go back to the city with them.$"

IvyRiver_Main_GreenScarf_Text_12:
# 254 "data/maps/IvyRiver_Main/scripts.pory"
	.string "I'll be fine.\p"
	.string "...\p"
	.string "Because you raised me to be fine.$"

IvyRiver_Main_GreenScarf_Text_13:
# 266 "data/maps/IvyRiver_Main/scripts.pory"
	.string "I'll miss you too. But my home is\n"
	.string "elsewhere.\p"
	.string "...\p"
	.string "Dada, you made me who I am. I'll never\n"
	.string "forget that.$"

IvyRiver_Main_GreenScarf_Text_14:
# 280 "data/maps/IvyRiver_Main/scripts.pory"
	.string "We want to thank you for taking care of\n"
	.string "our brother. Please keep his purple\l"
	.string "scarf with you.$"

IvyRiver_Main_GreenScarf_Text_15:
# 296 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Shall we go then? We have much to catch\n"
	.string "up on.$"

IvyRiver_Main_GreenScarf_Text_16:
# 320 "data/maps/IvyRiver_Main/scripts.pory"
	.string "See you Dada.\p"
	.string "I-I'll never forget you.$"

IvyRiver_Trainer_A_Text_0:
# 399 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Are you collecting rare Pokémon too?$"

IvyRiver_Trainer_A_Text_1:
# 400 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Wow, your Pokémon are rare!$"

IvyRiver_Trainer_A_Text_2:
# 403 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Because Ivy River is untouched by\n"
	.string "people, rare Pokémon can thrive.$"

IvyRiver_Trainer_B_Text_0:
# 412 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Swimming in this river is only for the\n"
	.string "toughest swimmers like me.\p"
	.string "I don't even need the HM Flip Turn!$"

IvyRiver_Trainer_B_Text_1:
# 413 "data/maps/IvyRiver_Main/scripts.pory"
	.string "I bet I could beat you if you weren't\n"
	.string "surfing on your Pokémon!$"

IvyRiver_Trainer_B_Text_2:
# 416 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Swimming is the best full-body\n"
	.string "exercise!$"

IvyRiver_Trainer_C_Text_0:
# 425 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Deep in the river lurks an unknown\n"
	.string "malaise...keep your eyes wide open or\l"
	.string "it'll eat your mind!$"

IvyRiver_Trainer_C_Text_1:
# 426 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Your mind can't be eaten!$"

IvyRiver_Trainer_C_Text_2:
# 429 "data/maps/IvyRiver_Main/scripts.pory"
	.string "To be honest with you, there's no\n"
	.string "malaise. There are strong currents, and\l"
	.string "that's about it.$"

IvyRiver_Trainer_D_Text_0:
# 437 "data/maps/IvyRiver_Main/scripts.pory"
	.string "You're the trainer who beat me back in\n"
	.string "Vilethorn Woods!\p"
	.string "I wanted to become the first BUG type\n"
	.string "Gym Leader but guess what - I've\l"
	.string "changed my dream. Now I'm going to be\l"
	.string "the first BUG type Pokémon Champion!$"

IvyRiver_Trainer_D_Text_1:
# 438 "data/maps/IvyRiver_Main/scripts.pory"
	.string "How could I lose to you twice?$"

IvyRiver_Trainer_D_Text_2:
# 441 "data/maps/IvyRiver_Main/scripts.pory"
	.string "I lost to you today, but I'll beat you at\n"
	.string "the Pokémon Championship!$"

IvyRiver_Trainer_D_Pinsir_Text_0:
# 447 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Pinsir looks grumpy it lost.$"

IvyRiver_NPC1_Text_0:
# 453 "data/maps/IvyRiver_Main/scripts.pory"
	.string "You can't navigate the strong currents\n"
	.string "here without HM Flip Turn.\p"
	.string "Oh, you don't have it?\p"
	.string "Too bad.$"

IvyRiver_NPC2_Text_0:
# 457 "data/maps/IvyRiver_Main/scripts.pory"
	.string "Most people you'll meet here are either\n"
	.string "collecting rare Pokémon...or lost!\p"
	.string "Like me...$"
