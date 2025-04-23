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
# 67 "data//maps/IvyRiver_Main/scripts.pory"
	lockall
# 68 "data//maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_IVYRIVER_ZARUDE_QUEST
# 70 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 10
# 71 "data//maps/IvyRiver_Main/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 72 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 73 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 76 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_SHIP
# 77 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_SHIP, 38, 53
# 78 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_SHIP, IvyRiver_Main_GreenScarf_Movement_0
# 79 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 80 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_SHIP, 38, 56
# 81 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxyperm LOCALID_SHIP, 38, 56
# 82 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 84 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_1
# 85 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 86 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 89 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F1
# 90 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F1, 38, 57
# 91 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 92 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_2
# 93 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 94 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 97 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F2
# 98 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F2, 38, 57
# 99 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 100 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_3
# 101 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 102 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 105 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F3
# 106 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F3, 38, 57
# 107 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 108 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_4
# 109 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 110 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 113 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_0
# 114 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 115 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 116 "data//maps/IvyRiver_Main/scripts.pory"
	removeitem ITEM_GREEN_SCARF
# 117 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_1, MSGBOX_SIGN
# 118 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 119 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 121 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 122 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 123 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 124 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 125 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 127 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_2
# 128 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 129 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 130 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 131 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 132 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_5
# 133 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 134 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 137 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_BRO
# 138 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_BRO, 38, 66
# 140 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 141 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_6
# 142 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 145 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_3
# 146 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 147 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_7
# 148 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 149 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 151 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 152 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_8
# 153 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_9
# 154 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 157 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 158 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 159 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 160 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_4
# 161 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 162 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 164 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 165 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 166 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 167 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 168 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 169 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_5
# 170 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 171 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 173 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 174 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 175 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 176 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_6
# 177 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 178 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 180 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_7
# 181 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_7
# 182 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_7
# 183 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 184 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 185 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_7
# 186 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 187 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 189 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_11
# 190 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_11
# 191 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_11
# 192 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 193 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 194 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_8
# 195 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 196 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 198 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 199 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 200 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 201 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_9
# 202 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 203 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 205 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 206 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_7
# 207 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_7
# 208 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_7
# 209 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_5
# 210 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_7
# 211 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 212 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 215 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_ZA
# 216 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_ZA, 39, 66
# 217 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 218 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_12
# 219 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 221 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_13
# 222 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 223 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 225 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_14
# 226 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 227 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 228 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_10
# 229 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 230 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 232 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_15
# 233 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 234 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 236 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 237 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 238 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 239 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_11
# 240 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 241 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 243 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 244 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_16
# 245 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 246 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 248 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 249 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 250 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 251 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_12
# 252 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 253 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 255 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 256 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_17
# 257 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 258 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 260 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 261 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 262 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 263 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_13
# 264 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 265 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 268 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 271 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_1
# 272 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_18
# 273 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 274 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_0
# 275 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 277 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_14
# 278 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 279 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 280 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 281 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_10
# 282 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 283 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 284 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_19
# 285 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 286 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 289 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_1
# 290 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_20
# 291 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 293 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_15
# 294 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 298 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_21
# 299 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_21
# 300 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 301 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 302 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F3
# 303 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_22
# 304 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 305 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 306 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F2
# 307 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_23
# 308 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 309 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 310 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F1
# 312 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_21
# 313 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 314 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 315 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_24
# 316 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_16
# 318 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 319 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_25
# 320 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 321 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 323 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_21
# 324 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 325 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 326 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_BRO
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_8
# 330 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_8
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_SHIP, IvyRiver_Main_GreenScarf_Movement_26
# 332 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 335 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_27
# 336 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_28
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_29
# 339 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_30
# 340 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 342 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 343 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_ZA
# 347 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 348 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_ITEM_IVYRIVER_GREEN_SCARF
# 349 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_QUEST
# 350 "data//maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_IVYRIVER_ZARUDE_REAL
# 351 "data//maps/IvyRiver_Main/scripts.pory"
	completequest QUEST_LILYPOND_FISHERMAN
# 353 "data//maps/IvyRiver_Main/scripts.pory"
	releaseall
	end


IvyRiver_Main_Zarude_Legendary::
# 360 "data//maps/IvyRiver_Main/scripts.pory"
	lockall
# 362 "data//maps/IvyRiver_Main/scripts.pory"
	special SaveGame
# 363 "data//maps/IvyRiver_Main/scripts.pory"
	waitstate
# 364 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 367 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 368 "data//maps/IvyRiver_Main/scripts.pory"
	waitmoncry
# 369 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_REAL
# 371 "data//maps/IvyRiver_Main/scripts.pory"
	setwildbattle SPECIES_ZARUDE_DADA, 40
# 372 "data//maps/IvyRiver_Main/scripts.pory"
	dowildbattle
# 373 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 1
# 375 "data//maps/IvyRiver_Main/scripts.pory"
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

# 78 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_0:
# 78 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 78 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 78 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 84 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_1:
# 84 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 92 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_2:
# 92 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 92 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 100 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_3:
# 100 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 100 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 108 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_4:
# 108 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 121 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_5:
# 121 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 121 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 141 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_6:
# 141 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 141 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 141 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 141 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 141 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 141 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 147 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_7:
# 147 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 152 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_8:
# 152 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 152 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 152 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 153 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_9:
# 153 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 153 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 153 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 153 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 157 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_10:
# 157 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 189 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_11:
# 189 "data//maps/IvyRiver_Main/scripts.pory"
	emote_question_mark
	step_end

# 218 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_12:
# 218 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 218 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 218 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 218 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 218 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_left
# 218 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 221 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_13:
# 221 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 221 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 221 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 225 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_14:
# 225 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
# 225 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 232 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_15:
# 232 "data//maps/IvyRiver_Main/scripts.pory"
	emote_question_mark
# 232 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 244 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_16:
# 244 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 244 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_down
	step_end

# 256 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_17:
# 256 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_down
	step_end

# 272 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_18:
# 272 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 272 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 272 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 272 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 284 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_19:
# 284 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 284 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 284 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 284 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 290 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_20:
# 290 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 290 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 290 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 290 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 290 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 290 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 290 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 298 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_21:
# 298 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 303 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_22:
# 303 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 303 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 307 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_23:
# 307 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 307 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 315 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_24:
# 315 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 319 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_25:
# 319 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 319 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 319 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 319 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 319 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 331 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_26:
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 331 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 335 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_27:
# 335 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 335 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 335 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 335 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 336 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_28:
# 336 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 336 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 336 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 336 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 336 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 338 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_29:
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 339 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_30:
# 339 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 339 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

IvyRiver_Main_Fisherman_AssembleTrigger_Text_0:
# 30 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}! You came! Let's start our\n"
	.string "search...but after so many years, we\l"
	.string "don't remember that day too clearly.\p"
	.string "The only thing we remember that day is\n"
	.string "that it was really cold and we were all\l"
	.string "dressed in purple. Let's spread out and\l"
	.string "search the river for anything we can\l"
	.string "find!$"

IvyRiver_Main_GreenScarf_Text_0:
# 113 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}, did you find anything?$"

IvyRiver_Main_GreenScarf_Text_1:
# 117 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER} handed the Purple Scarf to\n"
	.string "the fishermen.$"

IvyRiver_Main_GreenScarf_Text_2:
# 127 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Th-this is...it's our brother's scarf!\n"
	.string "This is incredible! We shouldn't have\l"
	.string "given up after all.\p"
	.string "Where did you find it?\p"
	.string "Right here? Then he's got to be\n"
	.string "somewhere -$"

IvyRiver_Main_GreenScarf_Text_3:
# 145 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I left my scarf here somewhere...where\n"
	.string "could it have gone?$"

IvyRiver_Main_GreenScarf_Text_4:
# 160 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Brothers - is that you?$"

IvyRiver_Main_GreenScarf_Text_5:
# 169 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes...are you-are you alright? It's -\n"
	.string "it's just - we're so glad to se you!\p"
	.string "When we lost you all those years ago, we\n"
	.string "thought you were gone for good. How did\l"
	.string "you manage to stay alive?$"

IvyRiver_Main_GreenScarf_Text_6:
# 176 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I was raised by a Pokemon! It took care\n"
	.string "of me, fed me, and raised me. I owe it my\l"
	.string "life.$"

IvyRiver_Main_GreenScarf_Text_7:
# 185 "data//maps/IvyRiver_Main/scripts.pory"
	.string "What a story...where is that Pokemon?\n"
	.string "We owe it too - for keeping our brother\l"
	.string "safe all these years.\p"
	.string "...\p"
	.string "...$"

IvyRiver_Main_GreenScarf_Text_8:
# 194 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Brother - we lost so many years. We\n"
	.string "don't want to lose more.\p"
	.string "Will you come back with us?$"

IvyRiver_Main_GreenScarf_Text_9:
# 201 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes. Yes of course. You're my family.$"

IvyRiver_Main_GreenScarf_Text_10:
# 228 "data//maps/IvyRiver_Main/scripts.pory"
	.string "No - Dada! It's fine. They're my family.\n"
	.string "The brothers I told you about!$"

IvyRiver_Main_GreenScarf_Text_11:
# 239 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Dada - it's time for me to leave. I'm\n"
	.string "going to go back to the city with them.$"

IvyRiver_Main_GreenScarf_Text_12:
# 251 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I'll be fine.\p"
	.string "...\p"
	.string "Because you raised me to be fine.$"

IvyRiver_Main_GreenScarf_Text_13:
# 263 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I'll miss you too. But my home is\n"
	.string "elsewhere.\p"
	.string "...\p"
	.string "Dada, you made me who I am. I'll never\n"
	.string "forget that.$"

IvyRiver_Main_GreenScarf_Text_14:
# 277 "data//maps/IvyRiver_Main/scripts.pory"
	.string "We want to thank you for taking care of\n"
	.string "our brother. Please keep his purple\l"
	.string "scarf with you.$"

IvyRiver_Main_GreenScarf_Text_15:
# 293 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Shall we go then? We have much to catch\n"
	.string "up on.$"

IvyRiver_Main_GreenScarf_Text_16:
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	.string "See you Dada.\p"
	.string "I-I'll never forget you.$"
