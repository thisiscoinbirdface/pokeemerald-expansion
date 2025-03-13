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
# 76 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_2
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 1
# 80 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_NoSupplies::
# 90 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_FENNILAHL_MART_SUPPLIES, 0
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_NoSupplies_1
# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 95 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 9
# 96 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 8
# 98 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 102 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 103 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 104 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 105 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 110 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3
# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 113 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 115 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 123 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 124 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2
# 128 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 130 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 131 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7
# 132 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 134 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 136 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8
# 137 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 139 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 143 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9
# 144 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11
# 146 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 153 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 156 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15
# 161 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23
# 169 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 171 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 172 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 174 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4
# 176 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 177 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26
# 183 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 188 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6
# 196 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32
# 205 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 10
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 208 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 209 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 210 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 214 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 215 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39
# 229 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 234 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41
# 235 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 238 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	trainerbattle_no_intro TRAINER_KOHLA_LAB, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42
# 239 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 242 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 244 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 248 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 250 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 251 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 10
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 255 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 2
# 263 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_POLICE_PRESCENCE
# 264 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_LAB_CALLTOACTION
# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY
# 269 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FIRST_DREAMSTONE
# 270 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FIRST_DREAMSTONE, SUB_QUEST_1
# 273 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_NoSupplies_1:
	end


CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric::
# 279 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 280 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 281 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0
# 282 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Pokeball_One::
# 297 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 299 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 10, 3
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1, MSGBOX_YESNO
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5
# 318 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1:
# 322 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2:
# 300 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5:
# 306 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 4
# 307 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY
# 308 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 309 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8:
# 310 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 311 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2
# 312 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 313 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 314 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Two::
# 330 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 332 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2
# 336 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_TIMBURR, 10, 3
# 337 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 338 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5
# 351 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1:
# 355 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2:
# 333 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5:
# 339 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_TIMBURR, 5, ITEM_ORAN_BERRY
# 340 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 341 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 7
# 342 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8:
# 343 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 344 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1
# 345 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 346 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 347 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Three::
# 363 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 365 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2
# 369 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_ZIGZAGOON_GALAR, 10, 3
# 370 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 371 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1:
# 388 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 389 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2:
# 366 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5:
# 372 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALAR, 5, ITEM_ORAN_BERRY
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 374 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 6
# 375 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8:
# 376 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 377 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1
# 378 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 379 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 380 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 396 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 397 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 398 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 399 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 400 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 407 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 408 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 409 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 412 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 410 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon::
# 418 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 420 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_1:
# 426 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2:
# 421 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0
# 422 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0
# 423 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
	goto CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_1


CarabrueTown_TenebrisLab_EventScript_Rue::
# 432 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 433 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Rue_Text_0
# 435 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 436 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist1::
# 441 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 442 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 443 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0
# 444 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist2::
# 448 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 449 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 450 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0
# 451 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist3::
# 455 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 456 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 457 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_LAB_CALLTOACTION, CarabrueTown_TenebrisLab_EventScript_Scientist3_2
# 460 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1
CarabrueTown_TenebrisLab_EventScript_Scientist3_1:
# 462 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_Scientist3_2:
# 458 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Scientist3_1


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

# 103 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0:
# 103 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1:
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2:
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
	step_end

# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3:
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4:
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5:
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6:
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7:
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8:
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
	step_end

# 422 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0:
# 422 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
	.string "FENNILAHL TOWN, past Route 1. Please go\l"
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
# 98 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Good, you're back. Come here.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1:
# 105 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Detectives, meet {PLAYER}, our\n"
	.string "newest assistant.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2:
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: We've met already.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3:
# 110 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: {PLAYER}, Have you got the\n"
	.string "supplies? No?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4:
# 115 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: WHAT?! Professor Tenebris took\n"
	.string "them? But how? When? Oh no...this is a\l"
	.string "disaster. You see, those supplies\l"
	.string "contained something very precious.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5:
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Have you heard of dreamstones?\n"
	.string "No? Hardly surprising, considering that\l"
	.string "there are only three in all of Cormoria.\l"
	.string "You see...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6:
# 124 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Our lab specialises in the research\n"
	.string "of Pokemon psychology - of which the\l"
	.string "Professor was a leading expert, as you\l"
	.string "no doubt know. In particular, the\l"
	.string "subconscious operations within the\l"
	.string "psyche of Pokemon while sleeping is our\l"
	.string "field of interest.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7:
# 131 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: This right here is our lab's pride\n"
	.string "and joy - the Dreamalyser. Once\l"
	.string "powered, it'll allow us to study the\l"
	.string "fluctuations in power and energy that\l"
	.string "Pokemon undergo while in deep sleep.\l"
	.string "The Professor built every single piece\l"
	.string "of this by hand. And something like this\l"
	.string "can't be powered using conventional\l"
	.string "energy methods.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8:
# 136 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: No...this thing needs something far\n"
	.string "more potent. Our plan was to use\l"
	.string "dreamstones to power it. Dreamstones\l"
	.string "are powerful reserves of subconscious\l"
	.string "{PKMN} energy in solidified form. We don't\l"
	.string "know yet how they came to be, and so\l"
	.string "far, we know of only three across all of\l"
	.string "Cormoria. Incredibly rare, you see? And\l"
	.string "power like that in the wrong hands...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9:
# 143 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: And this month we were supposed\n"
	.string "to receive two things in our supplies -\l"
	.string "{PLAYER}, your companion\l"
	.string "Pokemon...and one dreamstone. One of\l"
	.string "the only three dreamstones that exist.\l"
	.string "And just as we would have powered up\l"
	.string "the Dreamalyser for the first time ever,\l"
	.string "the Professor took the dreamstone and\l"
	.string "disappeared! Oh, why did he leave? What\l"
	.string "on earth was he thinking!?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10:
# 144 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: I'm sorry {PLAYER}...I fear that\n"
	.string "destiny has chosen your companion for\l"
	.string "you. But it looks like you two have\l"
	.string "formed a bond already...maybe this is\l"
	.string "for the best after all.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11:
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective: If we could get our hands on\n"
	.string "one of the other dreamstones, we might\l"
	.string "be able to understand why the\l"
	.string "Professor vanished.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12:
# 146 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Maybe...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13:
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Detectives...please. You must find\n"
	.string "the Professor!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14:
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Finding him is what we're\n"
	.string "here for. Again, I can't shake the hunch\l"
	.string "that the other dreamstones could\l"
	.string "provide us with a clue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15:
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Whatever you need to do!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16:
# 161 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: We'll do our best, Rue. But\n"
	.string "we're detectives - we can uncover his\l"
	.string "tracks, but we can't unravel his mind.\l"
	.string "We'll need some help from one of you.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17:
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: What do you plan to do?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18:
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: A two-pronged strategy -\n"
	.string "while we track the Professor, one of\l"
	.string "you should find a dreamstone for us to\l"
	.string "examine for clues.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19:
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: But none of us can leave the lab!\n"
	.string "There's too much work.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20:
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Well...what about this kid?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21:
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: {PLAYER}? It's too dangerous.\n"
	.string "{PLAYER}'s Pokemon aren't strong\l"
	.string "enough yet.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22:
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: What else do you suggest?\n"
	.string "{PLAYER} is the best we've got right\l"
	.string "now.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23:
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Right...yes. You're right.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24:
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} - I know it's only your first\n"
	.string "day, but this is a critical task, and\l"
	.string "none of us can leave the lab.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25:
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: The dreamstones are scattered all\n"
	.string "across Cormoria. Have you ever traveled\l"
	.string "beyond FENNILAHL TOWN? Cormoria is\l"
	.string "vast. Dangerous Pokemon have made the\l"
	.string "mountains, forests and seas their\l"
	.string "territory. I fear you may not be up to\l"
	.string "the task...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26:
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: I don't know how I can\n"
	.string "help...perhaps this may be of use,\l"
	.string "{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27:
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} received a Pokedex from\n"
	.string "Assistant Professor Rue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28:
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: It's a Pokedex. It contains\n"
	.string "information on Pokemon you've\l"
	.string "encountered. And it can store more if\l"
	.string "you catch them.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29:
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Sigh...the Professor missing. The\n"
	.string "dreamstone missing. The lab in shambles.\l"
	.string "My youngest researcher sent off on a\l"
	.string "dangerous journey.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30:
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: I've failed.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31:
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Get it together, Rue. The\n"
	.string "other researchers are counting on you.\l"
	.string "Have some faith in\l"
	.string "us...and...well...{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32:
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Wait right there!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33:
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Sir, I overheard the whole thing!\n"
	.string "And I protest!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34:
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: You can't give this kid a job like\n"
	.string "that! What's your name? {PLAYER}?\l"
	.string "Pshh, whatever. Look at you! Your\l"
	.string "Pokemon look exhausted after a single\l"
	.string "trip to FENNILAHL TOWN!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35:
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Screw this kid sir! Let ME handle\n"
	.string "the dreamstones!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36:
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Excuse me...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37:
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Meet Kohla, this years ace\n"
	.string "rookie from the Detective Academy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38:
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla: Heard that {PLAYER}? ACE.\n"
	.string "ROOKIE. This is serious business. You\l"
	.string "can't handle this. Back off!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39:
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Now hold on Kohla, there's\n"
	.string "no need for all this. {PLAYER} is\l"
	.string "representing the Professor's lab. We\l"
	.string "needed someone from the lab to help us\l"
	.string "track the dreamstones.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40:
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla: I can do it sir! And I'll prove it\n"
	.string "right now!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41:
# 234 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "C'mon {PLAYER}, let's see who's a\n"
	.string "better fit for the job!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42:
# 238 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You won't be this lucky next time!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43:
# 239 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Pah! A single battle means nothing! You\n"
	.string "haven't been through what I have. It\l"
	.string "takes effort and discipline to become\l"
	.string "an Ace Rookie. Just you wait - I'll be\l"
	.string "the one to find the dreamstone!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44:
# 244 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla: Over and out, sir!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45:
# 255 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Well RUE, it looks like your\n"
	.string "assistant's got some guts. {PLAYER},\l"
	.string "we're counting on you and Kohla to get\l"
	.string "the dreamstone while we track\l"
	.string "Professor Tenebris. RUE, do you know\l"
	.string "anything of the whereabouts of the\l"
	.string "other dreamstones?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46:
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: I know of one dreamstone\n"
	.string "somewhere inside MT CERAM. {PLAYER},\l"
	.string "MT CERAM is further east from\l"
	.string "FENNILAHL TOWN. You'll have to cross\l"
	.string "through the tunnel to the other side to\l"
	.string "reach GASTREE CITY, and then make your\l"
	.string "way up north towards the mountain.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47:
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: {PLAYER} - you know\n"
	.string "what to do. Head east to GASTREE CITY.\l"
	.string "From there, make your way to MT CERAM\l"
	.string "and find the dreamstone inside.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48:
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: I'll let your mother know that\n"
	.string "you've been assigned some travel work.\l"
	.string "I wish you all the best.$"

CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0:
# 281 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective: Don't let one victory get to\n"
	.string "your head. Kohla's already got a head\l"
	.string "start on you. You'd better hurry if you\l"
	.string "want to catch up.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0:
# 300 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One of the Lab's Pokemon.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1:
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose GOTHITA?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2:
# 311 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a\n"
	.string "GOTHITA!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0:
# 337 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose TIMBURR?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1:
# 344 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a\n"
	.string "TIMBURR!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0:
# 370 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose ZIGZAGOON?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1:
# 377 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a\n"
	.string "ZIGZAGOON!$"

NicknamePartyMon_Text_0:
# 396 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Give it a nickname?$"

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0:
# 421 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Assistant Professor Rue told me not to\n"
	.string "leave without a Pokemon to protect me!$"

CarabrueTown_TenebrisLab_EventScript_Rue_Text_0:
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We're counting on you!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0:
# 443 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "There's so much work that I don't even\n"
	.string "know where to start! So I'm just staring\l"
	.string "at all these books instead.$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0:
# 450 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm so grateful we have Assistant\n"
	.string "Professor Rue. Without him to step in\l"
	.string "for Professor Tenebris, we'd have had\l"
	.string "to shut the lab down.$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0:
# 458 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "A bit unorthodox for a researcher, but\n"
	.string "you and your new partner are looking\l"
	.string "good together!$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1:
# 460 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry we couldn't offer you the\n"
	.string "standard companion {PKMN}. But they're\l"
	.string "coming in the next batch of supplies!\l"
	.string "Just be patient.$"
