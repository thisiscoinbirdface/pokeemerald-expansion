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
	map_script_2 VAR_LAB_STATE, 2, CarabrueTown_TenebrisLab_EventScript_NoSupplies
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
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_6
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 62 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_5
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 65 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_6
# 68 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 72 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_2
# 75 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 1
# 76 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives::
# 82 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 83 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 3
# 84 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 87 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1
# 88 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1
# 90 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 2
# 92 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end


CarabrueTown_TenebrisLab_EventScript_NoSupplies::
# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_FENNILAHL_MART_SUPPLIES, 0
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_NoSupplies_1
# 105 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 9
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 8
# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0
# 110 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 112 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 113 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 115 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 121 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 124 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 126 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 130 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	completequest QUEST_LAB_FIRST_DAY
# 131 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 133 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3
# 136 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 137 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7
# 143 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4
# 146 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 148 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 153 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9
# 156 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 161 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 169 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 171 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 172 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 174 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 177 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19
# 183 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24
# 188 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 192 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 196 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27
# 202 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 205 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 209 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29
# 210 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7
# 213 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 214 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 215 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 223 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 10
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10
# 234 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 235 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 236 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 237 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 238 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 239 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 241 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 244 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35
# 246 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 250 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 251 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36
# 252 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11
# 255 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 259 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 260 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12
# 263 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 264 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39
# 266 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40
# 269 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 270 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 271 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 272 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 273 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41
# 274 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 275 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 276 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12
# 277 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 278 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 279 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42
# 280 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 283 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	trainerbattle_no_intro TRAINER_KOHLA_LAB, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43
# 284 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9
# 285 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44
# 286 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 287 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 288 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 289 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 294 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 295 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_13
# 297 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 298 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 10
# 300 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 302 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49
# 308 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 3
# 309 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_POLICE_PRESCENCE
# 310 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_LAB_CALLTOACTION
# 314 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	startquest QUEST_DREAMSTONE_MYSTERIES
# 315 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_1
# 317 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_NoSupplies_1:
	end


CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric::
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 324 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 325 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Pokeball_One::
# 341 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 343 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2
# 347 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 10, 3
# 348 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GOTHITA, CRY_MODE_NORMAL
# 349 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1, MSGBOX_YESNO
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5
# 363 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1:
# 367 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 368 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2:
# 344 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5:
# 351 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 4
# 352 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 354 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8:
# 355 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2
# 357 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 358 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 359 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Two::
# 375 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 377 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2
# 381 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_TIMBURR, 10, 3
# 382 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_TIMBURR, CRY_MODE_NORMAL
# 383 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5
# 397 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1:
# 401 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 402 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2:
# 378 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5:
# 385 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_TIMBURR, 5, ITEM_ORAN_BERRY
# 386 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 387 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 7
# 388 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8:
# 389 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 390 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1
# 391 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 392 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 393 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Three::
# 409 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 411 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2
# 415 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_ZIGZAGOON_GALAR, 10, 3
# 416 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 417 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 418 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1:
# 435 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 436 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2:
# 412 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5:
# 419 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALAR, 5, ITEM_ORAN_BERRY
# 420 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 421 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 6
# 422 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8:
# 423 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 424 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1
# 425 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 426 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 427 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 443 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 444 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 445 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 446 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 447 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 454 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 455 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 456 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 459 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 457 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon::
# 465 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 467 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2
# 475 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_LAB_STATE, 1
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4:
# 479 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2:
# 468 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0
# 469 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0
# 470 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 471 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5:
# 476 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives
	goto CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4


CarabrueTown_TenebrisLab_EventScript_Rue::
# 485 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 486 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 487 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Rue_Text_0
# 488 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 489 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist1::
# 494 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 495 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 496 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0
# 497 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist2::
# 501 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 502 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 503 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0
# 504 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist3::
# 508 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 509 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 510 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_LAB_CALLTOACTION, CarabrueTown_TenebrisLab_EventScript_Scientist3_2
# 513 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1
CarabrueTown_TenebrisLab_EventScript_Scientist3_1:
# 515 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_Scientist3_2:
# 511 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Scientist3_1


CarabrueTown_TenebrisLab_Gardevoir::
# 521 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 522 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 523 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 525 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_TENEBRIS_GARDEVOIR, CarabrueTown_TenebrisLab_Gardevoir_2
# 528 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_1
# 529 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 530 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_2
# 531 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_GARDEVOIR
CarabrueTown_TenebrisLab_Gardevoir_1:
# 533 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_Gardevoir_2:
# 526 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_0
	goto CarabrueTown_TenebrisLab_Gardevoir_1


CarabrueTown_TenebrisLab_Metagross::
# 538 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 539 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 540 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_METAGROSS, CRY_MODE_NORMAL
# 541 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Metagross_Text_0
# 542 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end


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

# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_6:
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up_down
	step_end

# 65 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_7:
# 65 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0:
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
	step_end

# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1:
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0:
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1:
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 124 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2:
# 124 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
# 124 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3:
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4:
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
	step_end

# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5:
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6:
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7:
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 214 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8:
# 214 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 223 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9:
# 223 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10:
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11:
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12:
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_right
	step_end

# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_13:
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
	step_end

# 469 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0:
# 469 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 62 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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

CarabrueTown_TenebrisLab_EventScript_Start_Text_6:
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Argh! It's all a mess!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0:
# 84 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Wait! I almost forgot!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1:
# 87 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: On the way, could you give the\n"
	.string "evidence bag you have to the police?\l"
	.string "They're waiting at the edge of town.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0:
# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Good, you're back. Come here.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1:
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Detectives, meet {PLAYER}, our\n"
	.string "newest assistant.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2:
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: We've met already.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3:
# 121 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: {PLAYER}, Have you got the\n"
	.string "supplies?\n"
	.string "No?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4:
# 126 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: WHAT?! Professor Tenebris took\n"
	.string "them?\p"
	.string "...\p"
	.string "RUE: Sigh...at any rate, thanks for\n"
	.string "telling me, {PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5:
# 133 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "But how? When? Oh no...this is a\n"
	.string "disaster. You see, those supplies\l"
	.string "contained something very precious.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6:
# 137 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Have you heard of dreamstones?\n"
	.string "No? Hardly surprising, considering that\l"
	.string "there are only three in all of Cormoria.\l"
	.string "You see...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7:
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Our lab specialises in the research\n"
	.string "of Pokemon psychology - of which the\l"
	.string "Professor was a leading expert, as you\l"
	.string "no doubt know. In particular, a\l"
	.string "Pokemon's sleeping subconscious\l"
	.string "psyche is our field of interest.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8:
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: This right here is our lab's pride\n"
	.string "and joy - the DREAMALYSER. Once\l"
	.string "powered, it'll allow us to study what\l"
	.string "Pokemon undergo while in deep sleep. We\l"
	.string "built every single piece of this by\l"
	.string "hand. And something like this can't be\l"
	.string "powered using conventional energy\l"
	.string "methods.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9:
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: No...this thing needs something far\n"
	.string "more potent. Our plan was to use\l"
	.string "dreamstones to power it. Dreamstones\l"
	.string "are powerful reserves of subconscious\l"
	.string "Pokemon energy in solidified form. We\l"
	.string "don't know yet how they came to be, and\l"
	.string "so far, we know of only three across all\l"
	.string "of Cormoria. Incredibly rare, you see?\l"
	.string "And power like that in the wrong hands...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10:
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: And this month we were supposed\n"
	.string "to receive two things in our supplies -\l"
	.string "{PLAYER}, your companion\l"
	.string "Pokemon...and one dreamstone. One of\l"
	.string "the only three dreamstones that exist.\l"
	.string "And just as we would have powered up\l"
	.string "the DREAMALYSER for the first time\l"
	.string "ever, the Professor took the\l"
	.string "dreamstone and disappeared! Oh, why did\l"
	.string "she leave? What on earth was she\l"
	.string "thinking!?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11:
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I'm sorry {PLAYER}...I fear that\n"
	.string "destiny has chosen your companion for\l"
	.string "you. But it looks like you two have\l"
	.string "formed a bond already...maybe this is\l"
	.string "for the best after all.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12:
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: If we could get our hands\n"
	.string "on one of the other dreamstones, we\l"
	.string "might be able to understand why the\l"
	.string "Professor vanished.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13:
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Maybe...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14:
# 177 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Detectives...please. You must find\n"
	.string "the Professor!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15:
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Finding him is what we're\n"
	.string "here for. Again, I can't shake the hunch\l"
	.string "that the other dreamstones could\l"
	.string "provide us with a clue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16:
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Whatever you need to do!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17:
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: We'll do our best, Rue. But\n"
	.string "we're detectives - we can uncover her\l"
	.string "tracks, but we can't unravel her mind.\l"
	.string "We'll need some help from one of you.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18:
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: What do you plan to do?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19:
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: While we track the\n"
	.string "Professor, one of you should find a\l"
	.string "dreamstone for us to examine for clues.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20:
# 183 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: But none of us can leave the lab!\n"
	.string "There's too much work.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21:
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Well...what about this kid?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22:
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: {PLAYER}? It's too dangerous.\n"
	.string "{PLAYER}'s Pokemon aren't strong\l"
	.string "enough yet.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23:
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: What else do you suggest?\n"
	.string "{PLAYER} is the best we've got.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24:
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Right...yes. You're right.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25:
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} - I know it's only your first\n"
	.string "day, but this is a critical task, and\l"
	.string "none of us can leave the lab.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26:
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: The dreamstones are scattered all\n"
	.string "across Cormoria. Have you ever traveled\l"
	.string "beyond Fennilahl Town? Cormoria is\l"
	.string "vast. Dangerous Pokemon inhabit the\l"
	.string "many routes. I fear you may not be up to\l"
	.string "the task...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27:
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I don't know how I can\n"
	.string "help...perhaps this may be of use.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28:
# 205 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} received a Pokedex from\n"
	.string "Assistant Professor Rue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29:
# 209 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: It's a Pokedex. It contains\n"
	.string "information on Pokemon you've\l"
	.string "encountered. And it can store more if\l"
	.string "you catch them.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30:
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Sigh...the Professor missing. The\n"
	.string "dreamstone missing. The lab in shambles.\l"
	.string "My youngest researcher sent off on a\l"
	.string "dangerous journey.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31:
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I've failed.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32:
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Get it together, Rue. The\n"
	.string "other researchers are counting on you.\l"
	.string "Have some faith in us...and...\p"
	.string "...well...\p"
	.string "...{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33:
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Wait right there!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34:
# 239 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Sir, I overheard the whole thing!\n"
	.string "And I protest!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35:
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: You can't give this kid a job like\n"
	.string "that! What's your name? {PLAYER}?\l"
	.string "Pshh, whatever. Look at you! Your\l"
	.string "Pokemon look exhausted after a single\l"
	.string "trip to Fennilahl Town!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36:
# 251 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Screw this kid sir! Let ME handle\n"
	.string "the dreamstones!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37:
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Excuse me...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38:
# 259 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Meet Kohla, this years ace\n"
	.string "rookie from the Detective Academy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39:
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "KOHLA: Heard that {PLAYER}? ACE.\n"
	.string "ROOKIE. This is serious business. You\l"
	.string "can't handle this. Back off!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40:
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Now hold on Kohla, there's\n"
	.string "no need for all this. {PLAYER} is\l"
	.string "representing the Professor's lab. We\l"
	.string "need someone from the lab to help us\l"
	.string "track the dreamstones.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41:
# 273 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "KOHLA: I can do it sir! And I'll prove it\n"
	.string "right now!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42:
# 279 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "KOHLA: C'mon {PLAYER}, let's see who's\n"
	.string "a better fit for the job!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43:
# 283 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You won't be this lucky next time!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44:
# 285 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Pah! A single battle means nothing! You\n"
	.string "haven't been through what I have. It\l"
	.string "takes effort and discipline to become\l"
	.string "an Ace Rookie. Just you wait - I'll be\l"
	.string "the one to find the dreamstone!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45:
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "KOHLA: Over and out, sir!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46:
# 302 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Well Rue, it looks like your\n"
	.string "assistant's got some backbone.\l"
	.string "{PLAYER}, we're counting on you and\l"
	.string "Kohla to get the dreamstone while we\l"
	.string "track Professor Tenebris. Rue, do you\l"
	.string "know anything of the whereabouts of\l"
	.string "the other dreamstones?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47:
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: One lies somewhere inside Mt.\n"
	.string "Ceram. {PLAYER}, Mt. Ceram is further\l"
	.string "east from Fennilahl Town. You'll have to\l"
	.string "reach Gastree City, and then make your\l"
	.string "way up north towards the mountain.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48:
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: {PLAYER} - you know what\n"
	.string "to do. Head east to Gastree City. From\l"
	.string "there, make your way to Mt. Ceram and\l"
	.string "find the dreamstone inside.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49:
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I'll let your mother know that\n"
	.string "you've been assigned some travel work.\l"
	.string "I wish you all the best.$"

CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0:
# 325 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Don't let one victory get to\n"
	.string "your head. KOHLA's already got a head\l"
	.string "start on you. You'd better hurry if you\l"
	.string "want to catch up.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0:
# 344 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One of the Lab's Pokemon.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1:
# 349 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose GOTHITA?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2:
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The TENEBRIS LAB has gifted you a\n"
	.string "GOTHITA!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0:
# 383 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose TIMBURR?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1:
# 390 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The TENEBRIS LAB has gifted you a\n"
	.string "TIMBURR!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0:
# 417 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose ZIGZAGOON?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1:
# 424 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The TENEBRIS LAB has gifted you a\n"
	.string "ZIGZAGOON!$"

NicknamePartyMon_Text_0:
# 443 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Give it a nickname?$"

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0:
# 468 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Assistant Professor Rue told me not to\n"
	.string "leave without a Pokemon to protect me!$"

CarabrueTown_TenebrisLab_EventScript_Rue_Text_0:
# 487 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We're counting on you!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0:
# 496 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "There's so much work that I don't even\n"
	.string "know where to start! So I'm just staring\l"
	.string "at all these books instead.$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0:
# 503 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm so grateful we have Assistant\n"
	.string "Professor Rue. Without him to step in\l"
	.string "for Professor Tenebris, we'd have had\l"
	.string "to shut the lab down.$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0:
# 511 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "A bit unorthodox for a researcher, but\n"
	.string "you and your new partner are looking\l"
	.string "good together!$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1:
# 513 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry we couldn't offer you the\n"
	.string "standard companion Pokemon. But\l"
	.string "they're coming in the next batch of\l"
	.string "supplies! Just be patient.$"

CarabrueTown_TenebrisLab_Gardevoir_Text_0:
# 526 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "GARDEVOIR regards you intently...$"

CarabrueTown_TenebrisLab_Gardevoir_Text_1:
# 528 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "GARDEVOIR regards you intently...\p"
	.string "Something floats into your hand!$"

CarabrueTown_TenebrisLab_Gardevoir_Text_2:
# 530 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Was this her way of welcoming a new\n"
	.string "member of the lab?\p"
	.string "Thank you, GARDEVOIR!$"

CarabrueTown_TenebrisLab_Metagross_Text_0:
# 541 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "It's Asst. Prof. Rue's METAGROSS. It's\n"
	.string "so intimidating!$"
