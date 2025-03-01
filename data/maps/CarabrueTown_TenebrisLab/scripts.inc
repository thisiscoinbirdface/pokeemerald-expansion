CarabrueTown_TenebrisLab_MapScripts::
# 5 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CarabrueTown_TenebrisLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 10 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CarabrueTown_TenebrisLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CarabrueTown_TenebrisLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	map_script_2 VAR_LAB_STATE, 0, CarabrueTown_TenebrisLab_EventScript_Start
# 7 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	map_script_2 VAR_LAB_STATE, 1, CarabrueTown_TenebrisLab_EventScript_NoSupplies
	.2byte 0

CarabrueTown_TenebrisLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 11 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, CarabrueTown_TenebrisLab_EventScript_OnWarp
	.2byte 0


CarabrueTown_TenebrisLab_EventScript_OnWarp::
# 15 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 8
# 16 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 9
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 10
	return


CarabrueTown_TenebrisLab_EventScript_Start::
# 22 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 23 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 24 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 29 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_1
# 30 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 31 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 32 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 34 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 35 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 37 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 38 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 40 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_REAL_PACKAGE_GET
# 41 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 42 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POTION, 1
# 43 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 5
# 45 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_3
# 46 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 48 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 51 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_4
# 55 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 57 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_5
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_5
# 61 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_6
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_6
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 69 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 70 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 71 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_7
# 72 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 74 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 1
# 75 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_NoSupplies::
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_FENNILAHL_MART_SUPPLIES, 0
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_NoSupplies_1
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 90 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 9
# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 8
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0
# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 96 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1
# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 102 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 103 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 104 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4
# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 112 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 113 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5
# 115 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 121 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7
# 123 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2
# 126 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 128 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8
# 130 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 132 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 133 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 134 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 137 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 139 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11
# 143 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12
# 144 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3
# 148 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 153 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 156 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14
# 157 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18
# 161 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 169 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 171 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 172 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4
# 174 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 176 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 183 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 188 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29
# 189 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 192 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 196 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 202 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33
# 203 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 10
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7
# 205 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 208 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 209 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34
# 210 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 213 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 214 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 223 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 228 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 229 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 236 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	trainerbattle_no_intro TRAINER_KOHLA_LAB, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43
# 237 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44
# 238 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 241 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 242 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 246 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 248 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 10
# 251 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 252 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47
# 255 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 2
# 259 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_LAB_CALLTOACTION
# 260 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_NoSupplies_1:
	end


CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric::
# 266 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0
# 269 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Pokeball_One::
# 284 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 286 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_RIOLU, 10, 3
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1, MSGBOX_YESNO
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1:
# 309 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 310 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2:
# 287 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5:
# 293 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 4
# 294 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_RIOLU, 5, ITEM_POKE_BALL
# 295 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8:
# 297 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 298 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2
# 299 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 300 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Two::
# 317 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 319 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_ROCKRUFF, 10, 3
# 324 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 325 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5
# 338 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1:
# 342 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 343 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2:
# 320 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5:
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_ROCKRUFF, 5, ITEM_POKE_BALL
# 327 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 328 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 7
# 329 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8:
# 330 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 331 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1
# 332 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 333 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 334 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Three::
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 352 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_RUFFLET, 10, 3
# 357 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 358 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5
# 371 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1:
# 375 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 376 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2:
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5:
# 359 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_RUFFLET, 5, ITEM_POKE_BALL
# 360 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 361 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 6
# 362 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8:
# 363 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 364 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1
# 365 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 366 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 367 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 383 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 385 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 386 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 387 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 394 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 395 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 396 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 399 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 397 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon::
# 405 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 407 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_1:
# 413 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2:
# 408 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0
# 409 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0
# 410 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
	goto CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_1


CarabrueTown_TenebrisLab_EventScript_Rue::
# 419 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 420 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 421 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Rue_Text_0
# 422 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 423 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist1::
# 428 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 429 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 430 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist2::
# 435 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 436 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 437 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0
# 438 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_0:
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 31 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_1:
# 31 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 31 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 31 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 37 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_2:
# 37 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 37 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 48 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_3:
# 48 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 48 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 51 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_4:
# 51 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
	step_end

# 57 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_5:
# 57 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_left
	step_end

# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_6:
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up_down
	step_end

# 69 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_7:
# 69 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0:
# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1:
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2:
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
	step_end

# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3:
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4:
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5:
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6:
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7:
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8:
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
	step_end

# 409 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0:
# 409 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

CarabrueTown_TenebrisLab_EventScript_Start_Text_0:
# 23 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Ah! There you are! Finally.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_1:
# 29 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm Assistant Professor Rue and\n"
	.string "welcome to Tenebris Lab...\l"
	.string "er..{PLAYER}, was it?$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_2:
# 34 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry for the mess...we're scrambling\n"
	.string "to get things done, what with the\l"
	.string "Professor gone missing and everything.\l"
	.string "Did you bring your welcome package?\l"
	.string "Yes? Oh thank god! You see, we sent you\l"
	.string "the wrong package. The one we sent you\l"
	.string "is the evidence bag for the police! And\l"
	.string "this bag next to me is your welcome\l"
	.string "package. Go on - open it.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_3:
# 45 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Standard supplies for a research\n"
	.string "associate! Now as for the evidence bag,\l"
	.string "we'll have to hand that over to the\l"
	.string "police as quickly as possible.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_4:
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Right, now normally I would brief you on\n"
	.string "your work, but we've got no time. So I'm\l"
	.string "just going to have you start working\l"
	.string "right away. We've been running low on\l"
	.string "supplies and the nearest Pokemart is in\l"
	.string "Fennilahl Town, past Route 1. Please go\l"
	.string "and pick up our shipment and bring it\l"
	.string "back. Be careful! There are some\l"
	.string "important things in there!$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_5:
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "And on the way, could you give the\n"
	.string "evidence bag you have to the police?\l"
	.string "They're waiting at the edge of town.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_6:
# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You'll need a companion Pokemon to\n"
	.string "protect you. Pick up any of the\l"
	.string "Pokeballs lying around the lab. If we\l"
	.string "had our supplies, I could give you the\l"
	.string "standard companion Pokemon, but\l"
	.string "without Professor Tenebris,\l"
	.string "everything's gone haywire here. You'll\l"
	.string "have to make do with what you find lying\l"
	.string "around. But I promise - as soon as you\l"
	.string "bring the supplies back from the\l"
	.string "Pokemart, we'll pair you with the\l"
	.string "Pokemon you're meant to be with.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_7:
# 71 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Argh! It's all a mess!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0:
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Good, you're back. Come here.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1:
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: As you can see, we have visitors.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2:
# 103 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Detectives, meet our newest\n"
	.string "assistant.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3:
# 104 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: We've met already. Thanks\n"
	.string "again for the evidence, kid.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4:
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Have you got the supplies? No?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5:
# 113 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: WHAT?! Professor Tenebris took\n"
	.string "them? But how? When? Oh no...this is a\l"
	.string "disaster. You see, those supplies\l"
	.string "contained something very precious.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6:
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Have you heard of dreamstones?\n"
	.string "No? Hardly surprising, considering that\l"
	.string "there are only three in all of Cormoria.\l"
	.string "You see...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7:
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Our lab specialises in the research\n"
	.string "of Pokemon psychology - of which the\l"
	.string "Professor was a leading expert, as you\l"
	.string "no doubt know. In particular, the\l"
	.string "subconscious operations within the\l"
	.string "psyche of Pokemon while sleeping is our\l"
	.string "field of interest.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8:
# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: This baby right here is our lab's\n"
	.string "pride and joy - the Dreamalyser. Once\l"
	.string "powered, it'll allow us to study the\l"
	.string "fluctuations in power and energy that\l"
	.string "Pokemon undergo while in deep sleep.\l"
	.string "The Professor built every single piece\l"
	.string "of this by hand. And something like this\l"
	.string "can't be powered using conventional\l"
	.string "energy methods.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9:
# 134 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: No...this thing needs something far\n"
	.string "more potent. We plan to use\l"
	.string "dreamstones to power it. Put simply -\l"
	.string "dreamstones are powerful reserves of\l"
	.string "subconscious energy in solidified form.\l"
	.string "So far, we know of only three across all\l"
	.string "of Cormoria. They're rare. Rare and\l"
	.string "valuable. So rare that none of you know\l"
	.string "about it. So valuable that people would\l"
	.string "pay a fortune to obtain one. And in the\l"
	.string "wrong hands...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10:
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: And this time we were supposed to\n"
	.string "receive two things in our supplies -\l"
	.string "your companion Pokemon...and one\l"
	.string "dreamstone. One of the only three\l"
	.string "dreamstones that exist. And just as we\l"
	.string "would have powered up the Dreamalyser\l"
	.string "for the first time ever, the Professor\l"
	.string "took the dreamstone and disappeared!\l"
	.string "Oh, why did he leave? What on earth was\l"
	.string "he thinking!?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11:
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I'm sorry {PLAYER}...I fear that\n"
	.string "destiny has chosen your companion for\l"
	.string "you. But it looks like you two have\l"
	.string "formed a bond already...maybe this is\l"
	.string "for the best after all.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12:
# 143 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective: If we could get our hands on\n"
	.string "one of the other dreamstones, we might\l"
	.string "be able to understand why the\l"
	.string "Professor vanished.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13:
# 144 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Maybe...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14:
# 156 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Detectives...please. You must find\n"
	.string "the Professor!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15:
# 157 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Finding him is what we're\n"
	.string "here for. Again, I can't shake the hunch\l"
	.string "that the other dreamstones could\l"
	.string "provide us with a clue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16:
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Whatever you need to do!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17:
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: We'll do our best, Rue. But\n"
	.string "we're detectives, not researchers. We\l"
	.string "can uncover his tracks, but we can't\l"
	.string "unravel his mind. We'll need some help\l"
	.string "from one of you.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18:
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Anything. What do you plan to do?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19:
# 161 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: A two-pronged strategy -\n"
	.string "while we track the Professor, we want\l"
	.string "one of you to go and retrieve one of\l"
	.string "the other dreamstones for us to\l"
	.string "examine for clues.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20:
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: But none of us can leave the lab!\n"
	.string "There's too much work.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21:
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Well...there is one who\n"
	.string "can...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22:
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: {PLAYER}? It's too dangerous.\n"
	.string "{PLAYER}'s Pokemon aren't strong\l"
	.string "enough yet.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23:
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: What else do you suggest?\n"
	.string "Perhaps not ideal, but {PLAYER} is the\l"
	.string "best we've got right now.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24:
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Right...yes. You're right.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25:
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} - I know it's only your first\n"
	.string "day, but finding Professor Tenebris is\l"
	.string "the most important thing right now. And\l"
	.string "none of us can leave the lab.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26:
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: The three dreamstones are\n"
	.string "scattered all across Cormoria. Have you\l"
	.string "ever traveled beyond Fennilahl Town?\l"
	.string "Cormoria is vast. Very vast. Dangerous\l"
	.string "Pokemon have made the mountains,\l"
	.string "forests and seas their territory. It\l"
	.string "won't be easy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27:
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I don't know how I can\n"
	.string "help...perhaps this may be of use,\l"
	.string "{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28:
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} received a Pokedex from\n"
	.string "Assistant Professor Rue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29:
# 188 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: A Pokedex. It contains information\n"
	.string "on Pokemon you've encountered. And it\l"
	.string "can store more if you catch them.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30:
# 196 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Sigh...the Professor missing. The\n"
	.string "dreamstone missing. The lab in shambles.\l"
	.string "My youngest researcher sent off on a\l"
	.string "dangerous journey.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31:
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I've failed.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32:
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Get it together, Rue. You\n"
	.string "still have work to do. The other\l"
	.string "researchers are counting on you. Have\l"
	.string "some faith in us...and...well...{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33:
# 202 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Wait right there!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34:
# 209 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Sir, I overheard the whole thing!\n"
	.string "And I protest!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35:
# 214 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: You can't give this kid a job like\n"
	.string "that! What's your name? {PLAYER}?\l"
	.string "Pshh, whatever. Look at you! Your\l"
	.string "Pokemon look exhausted after a single\l"
	.string "trip to Fennilahl Town!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36:
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Screw this kid sir! Let ME handle\n"
	.string "the dreamstones!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37:
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Excuse me...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38:
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Meet Kohla, this years ace\n"
	.string "rookie from the Detective Academy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39:
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla: Heard that {PLAYER}? ACE.\n"
	.string "ROOKIE. This is serious business. You\l"
	.string "can't handle this. Back off!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40:
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Now hold on Zohra, there's\n"
	.string "no need for all this. {PLAYER} is\l"
	.string "representing the Professor's lab. We\l"
	.string "needed someone from the lab to help us\l"
	.string "track the dreamstones.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41:
# 229 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla: I can do it sir! And I'll prove it\n"
	.string "right now!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42:
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "C'mon {PLAYER}, let's see who's a\n"
	.string "better fit for the job!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43:
# 236 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You won't be this lucky next time, {PLAYER}!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44:
# 237 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Pah! A single battle means nothing! You\n"
	.string "haven't been through what I have. It\l"
	.string "takes effort and discipline to become\l"
	.string "an Ace Rookie. Just you wait - I'll be\l"
	.string "the one to find the dreamstone!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45:
# 242 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla: Over and out, sir!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46:
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Well Rue, looks like your\n"
	.string "assistant's got some guts. {PLAYER},\l"
	.string "you aren't too shabby after all. We're\l"
	.string "counting on you and Kohla to get the\l"
	.string "dreamstone while we track Professor\l"
	.string "Tenebris. Rue, do you know anything of\l"
	.string "the whereabouts of the other\l"
	.string "dreamstones?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47:
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I know of one dreamstone\n"
	.string "somewhere inside Mt. Ceram. {PLAYER},\l"
	.string "Mt. Ceram is further east from Fennilahl\l"
	.string "Town. You'll have to cross through the\l"
	.string "tunnel to the other side to reach\l"
	.string "Gastree City, and then make your way up\l"
	.string "north towards the mountain.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48:
# 255 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: {PLAYER} - you know\n"
	.string "what to do. Head to Mt. Ceram and find\l"
	.string "the dreamstone inside.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49:
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I'll let your mother know that\n"
	.string "you've been assigned some travel work.\l"
	.string "I wish you all the best.$"

CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0:
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective: What are you waiting for?\n"
	.string "Don't let one victory get to your head.\l"
	.string "Kohla's already got a head start on you.\l"
	.string "You'd better hurry if you wnat to catch\l"
	.string "up.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0:
# 287 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One of the Lab's Pokemon.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1:
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Riolu?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2:
# 298 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a Riolu!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0:
# 324 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Rockruff?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1:
# 331 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a\n"
	.string "Rockruff!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0:
# 357 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Rufflet?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1:
# 364 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a\n"
	.string "Rufflet!$"

NicknamePartyMon_Text_0:
# 383 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Give it a nickname?$"

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0:
# 408 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Assistant Professor Rue told me not to\n"
	.string "leave without a Pokemon to protect me!$"

CarabrueTown_TenebrisLab_EventScript_Rue_Text_0:
# 421 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We're counting on you!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0:
# 430 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "There's so much work that I don't even\n"
	.string "know where to start!$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0:
# 437 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm so grateful we have Assistant\n"
	.string "Professor Rue. Without him to step in\l"
	.string "for Professor Tenebris, we'd have had\l"
	.string "to shut the lab down.$"
