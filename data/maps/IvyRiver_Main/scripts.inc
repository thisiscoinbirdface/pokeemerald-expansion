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
# 78 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_SHIP, 38, 56
# 79 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxyperm LOCALID_SHIP, 38, 56
# 80 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 82 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_1
# 83 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 84 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 87 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F1
# 88 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F1, 38, 57
# 89 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 90 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_2
# 91 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 92 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 95 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F2
# 96 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F2, 38, 57
# 97 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 98 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_3
# 99 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 100 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 103 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_F3
# 104 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_F3, 38, 57
# 105 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 106 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_4
# 107 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 108 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 111 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_0
# 112 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 113 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 114 "data//maps/IvyRiver_Main/scripts.pory"
	removeitem ITEM_GREEN_SCARF
# 115 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_1, MSGBOX_SIGN
# 116 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 117 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 119 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 120 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 121 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 122 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 123 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 125 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_2
# 126 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 127 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 128 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 129 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 130 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_5
# 131 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 132 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 135 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_BRO
# 136 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_BRO, 38, 66
# 138 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 139 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_6
# 140 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 141 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_3
# 144 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 145 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_7
# 146 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 147 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 149 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 150 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_8
# 151 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_9
# 152 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 153 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 156 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 157 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 158 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_4
# 159 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 160 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 162 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_5
# 163 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_5
# 164 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_5
# 165 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 166 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 167 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_5
# 168 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 169 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 171 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 172 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 173 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 174 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_6
# 175 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 176 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 178 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_7
# 179 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_7
# 180 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_7
# 181 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 182 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 183 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_7
# 184 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 185 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 187 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_11
# 188 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_11
# 189 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_11
# 190 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 191 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 192 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_8
# 193 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 194 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 196 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 197 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 198 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 199 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_9
# 200 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 201 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 203 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 204 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_7
# 205 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_7
# 206 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_7
# 207 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_5
# 208 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_7
# 209 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 210 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 213 "data//maps/IvyRiver_Main/scripts.pory"
	addobject LOCALID_ZA
# 214 "data//maps/IvyRiver_Main/scripts.pory"
	setobjectxy LOCALID_ZA, 39, 66
# 215 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 216 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_12
# 217 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 218 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 219 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_13
# 220 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 221 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 223 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_14
# 224 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 225 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 226 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_10
# 227 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 228 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 230 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_15
# 231 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 232 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 234 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 235 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 236 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 237 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_11
# 238 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 239 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 241 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 242 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_16
# 243 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 244 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 246 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 247 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 248 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 249 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_12
# 250 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 251 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 253 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 254 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_17
# 255 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 256 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 258 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_10
# 259 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 260 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 261 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_13
# 262 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 263 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 266 "data//maps/IvyRiver_Main/scripts.pory"
	special SpawnCameraObject
# 269 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_1
# 270 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_18
# 271 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 272 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_0
# 273 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 275 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_14
# 276 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 277 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 278 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 279 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_10
# 280 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 281 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 282 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_19
# 283 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 284 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 287 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_1
# 288 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_20
# 289 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 291 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_15
# 292 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 296 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_21
# 297 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F3, IvyRiver_Main_GreenScarf_Movement_21
# 298 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 299 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 300 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F3
# 301 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F2, IvyRiver_Main_GreenScarf_Movement_22
# 302 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 303 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 304 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F2
# 305 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_F1, IvyRiver_Main_GreenScarf_Movement_23
# 306 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 307 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 308 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_F1
# 310 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_21
# 311 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 312 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 313 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_24
# 314 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 315 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_GreenScarf_Text_16
# 316 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_25
# 318 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 319 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 321 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_BRO, IvyRiver_Main_GreenScarf_Movement_21
# 322 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 323 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 324 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_BRO
# 327 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_8
# 328 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_8
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_SHIP, IvyRiver_Main_GreenScarf_Movement_26
# 330 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Main_GreenScarf_Movement_27
# 334 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_27
# 335 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 336 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Main_GreenScarf_Movement_28
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement LOCALID_ZA, IvyRiver_Main_GreenScarf_Movement_29
# 338 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 340 "data//maps/IvyRiver_Main/scripts.pory"
	special RemoveCameraObject
# 341 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject LOCALID_ZA
# 345 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 346 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_QUEST
# 347 "data//maps/IvyRiver_Main/scripts.pory"
	clearflag FLAG_IVYRIVER_ZARUDE_REAL
# 348 "data//maps/IvyRiver_Main/scripts.pory"
	completequest QUEST_LILYPOND_FISHERMAN
# 350 "data//maps/IvyRiver_Main/scripts.pory"
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

# 82 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_1:
# 82 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 90 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_2:
# 90 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 90 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 98 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_3:
# 98 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 98 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 106 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_4:
# 106 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 119 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_5:
# 119 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 119 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 139 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_6:
# 139 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 139 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 139 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 139 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 139 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 139 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 145 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_7:
# 145 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 150 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_8:
# 150 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 150 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 150 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 151 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_9:
# 151 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 151 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 151 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 151 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 155 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_10:
# 155 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 187 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_11:
# 187 "data//maps/IvyRiver_Main/scripts.pory"
	emote_question_mark
	step_end

# 216 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_12:
# 216 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 216 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 216 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 216 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_up
# 216 "data//maps/IvyRiver_Main/scripts.pory"
	walk_fast_left
# 216 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
	step_end

# 219 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_13:
# 219 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 219 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 219 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 223 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_14:
# 223 "data//maps/IvyRiver_Main/scripts.pory"
	face_up
# 223 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 230 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_15:
# 230 "data//maps/IvyRiver_Main/scripts.pory"
	emote_question_mark
# 230 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 242 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_16:
# 242 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
# 242 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_down
	step_end

# 254 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_17:
# 254 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_down
	step_end

# 270 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_18:
# 270 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 270 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 270 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 270 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 282 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_19:
# 282 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 282 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 282 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 282 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 288 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_20:
# 288 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 288 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 288 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 288 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 288 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 288 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 288 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 296 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_21:
# 296 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 301 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_22:
# 301 "data//maps/IvyRiver_Main/scripts.pory"
	walk_right
# 301 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 305 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_23:
# 305 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 305 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 313 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_24:
# 313 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 317 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_25:
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
# 317 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_up
	step_end

# 329 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_26:
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
# 329 "data//maps/IvyRiver_Main/scripts.pory"
	walk_up
	step_end

# 333 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_27:
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 333 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
	step_end

# 336 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_28:
# 336 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 336 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 337 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_GreenScarf_Movement_29:
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 337 "data//maps/IvyRiver_Main/scripts.pory"
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
# 111 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}, did you find anything?$"

IvyRiver_Main_GreenScarf_Text_1:
# 115 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER} handed the Purple Scarf to\n"
	.string "the fishermen.$"

IvyRiver_Main_GreenScarf_Text_2:
# 125 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Th-this is...it's our brother's scarf!\n"
	.string "This is incredible! We shouldn't have\l"
	.string "given up after all.\p"
	.string "Where did you find it?\p"
	.string "Right here? Then he's got to be\n"
	.string "somewhere -$"

IvyRiver_Main_GreenScarf_Text_3:
# 143 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I left my scarf here somewhere...where\n"
	.string "could it have gone?$"

IvyRiver_Main_GreenScarf_Text_4:
# 158 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Brothers - is that you?$"

IvyRiver_Main_GreenScarf_Text_5:
# 167 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes...are you-are you alright? It's -\n"
	.string "it's just - we're so glad to se you!\p"
	.string "When we lost you all those years ago, we\n"
	.string "thought you were gone for good. How did\l"
	.string "you manage to stay alive?$"

IvyRiver_Main_GreenScarf_Text_6:
# 174 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I was raised by a Pokemon! It took care\n"
	.string "of me, fed me, and raised me. I owe it my\l"
	.string "life.$"

IvyRiver_Main_GreenScarf_Text_7:
# 183 "data//maps/IvyRiver_Main/scripts.pory"
	.string "What a story...where is that Pokemon?\n"
	.string "We owe it too - for keeping our brother\l"
	.string "safe all these years.\p"
	.string "...\p"
	.string "...$"

IvyRiver_Main_GreenScarf_Text_8:
# 192 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Brother - we lost so many years. We\n"
	.string "don't want to lose more.\p"
	.string "Will you come back with us?$"

IvyRiver_Main_GreenScarf_Text_9:
# 199 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Y-yes. Yes of course. You're my family.$"

IvyRiver_Main_GreenScarf_Text_10:
# 226 "data//maps/IvyRiver_Main/scripts.pory"
	.string "No - Dada! It's fine. They're my family.\n"
	.string "The brothers I told you about!$"

IvyRiver_Main_GreenScarf_Text_11:
# 237 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Dada - it's time for me to leave. I'm\n"
	.string "going to go back to the city with them.$"

IvyRiver_Main_GreenScarf_Text_12:
# 249 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I'll be fine.\p"
	.string "...\p"
	.string "Because you raised me to be fine.$"

IvyRiver_Main_GreenScarf_Text_13:
# 261 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I'll miss you too. But my home is\n"
	.string "elsewhere.\p"
	.string "...\p"
	.string "Dada, you made me who I am. I'll never\n"
	.string "forget that.$"

IvyRiver_Main_GreenScarf_Text_14:
# 275 "data//maps/IvyRiver_Main/scripts.pory"
	.string "We want to thank you for taking care of\n"
	.string "our brother. Please keep his purple\l"
	.string "scarf with you.$"

IvyRiver_Main_GreenScarf_Text_15:
# 291 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Shall we go then? We have much to catch\n"
	.string "up on.$"

IvyRiver_Main_GreenScarf_Text_16:
# 315 "data//maps/IvyRiver_Main/scripts.pory"
	.string "See you Dada.\p"
	.string "I-I'll never forget you.$"
