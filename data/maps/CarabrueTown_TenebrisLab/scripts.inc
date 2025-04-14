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
	giveitem ITEM_TOWN_MAP
# 44 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 5
# 46 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_3
# 47 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 50 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 53 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 55 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_4
# 56 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_5
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_6
# 61 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_5
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 68 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_6
# 69 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 73 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_2
# 76 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 1
# 77 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives::
# 83 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 84 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 3
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0
# 87 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 88 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1
# 90 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_2
# 92 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 96 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 2
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end


CarabrueTown_TenebrisLab_EventScript_NoSupplies::
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_FENNILAHL_MART_SUPPLIES, 0
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_NoSupplies_1
# 110 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 9
# 112 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 8
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0
# 115 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 121 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 124 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 126 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 130 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 131 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4
# 132 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	completequest QUEST_LAB_FIRST_DAY
# 136 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6
# 143 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 146 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7
# 148 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 153 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 157 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9
# 161 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11
# 169 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
# 172 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4
# 176 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 177 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16
# 188 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17
# 189 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20
# 192 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 202 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 203 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25
# 208 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26
# 209 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27
# 213 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 214 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30
# 228 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 229 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31
# 234 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 237 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 238 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32
# 239 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 10
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9
# 241 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 242 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 244 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 246 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 248 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 250 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 251 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 252 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35
# 259 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 260 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 263 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36
# 264 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 266 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37
# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 269 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11
# 270 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 271 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 272 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 273 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 274 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 275 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39
# 276 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 277 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 278 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 279 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 280 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40
# 281 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 282 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 283 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11
# 284 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 285 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 286 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41
# 287 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	trainerbattle_no_intro TRAINER_KOHLA_LAB, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43
# 293 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 294 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 295 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 297 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 298 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44
# 299 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 302 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 10
# 307 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 308 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 309 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45
# 310 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46
# 311 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47
# 312 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48
# 315 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 3
# 316 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_POLICE_PRESCENCE
# 317 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_LAB_CALLTOACTION
# 321 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	startquest QUEST_DREAMSTONE_MYSTERIES
# 322 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_1
# 324 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_NoSupplies_1:
	end


CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric::
# 330 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 331 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 332 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0
# 333 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Pokeball_One::
# 348 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2
# 354 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 10, 3
# 355 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GOTHITA, CRY_MODE_NORMAL
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1, MSGBOX_YESNO
# 357 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5
# 370 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1:
# 374 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 375 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2:
# 351 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5:
# 358 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 4
# 359 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY
# 360 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 361 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8:
# 362 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 363 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2
# 364 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 365 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 366 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Two::
# 382 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2
# 388 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_TIMBURR, 10, 3
# 389 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_TIMBURR, CRY_MODE_NORMAL
# 390 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 391 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5
# 404 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1:
# 408 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 409 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2:
# 385 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5:
# 392 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_TIMBURR, 5, ITEM_ORAN_BERRY
# 393 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 394 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 7
# 395 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8:
# 396 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 397 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1
# 398 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 399 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 400 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Three::
# 416 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 418 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2
# 422 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_ZIGZAGOON_GALAR, 10, 3
# 423 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 424 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 425 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5
# 438 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1:
# 442 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 443 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2:
# 419 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5:
# 426 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALAR, 5, ITEM_ORAN_BERRY
# 427 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 428 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 6
# 429 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8:
# 430 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1
# 432 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 433 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 450 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 451 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 452 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 453 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 454 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 461 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 462 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 463 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 466 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 464 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon::
# 472 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 474 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2
# 482 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_LAB_STATE, 1
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4:
# 486 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2:
# 475 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0
# 476 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1
# 477 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 478 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5:
# 483 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives
	goto CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4


CarabrueTown_TenebrisLab_EventScript_Rue::
# 492 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 493 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 494 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Rue_Text_0
# 495 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 496 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist1::
# 501 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Scientist2::
# 506 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Scientist3::
# 511 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_LAB_CALLTOACTION, CarabrueTown_TenebrisLab_EventScript_Scientist3_2
# 514 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1, MSGBOX_NPC
CarabrueTown_TenebrisLab_EventScript_Scientist3_1:
	end

CarabrueTown_TenebrisLab_EventScript_Scientist3_2:
# 512 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0, MSGBOX_NPC
	goto CarabrueTown_TenebrisLab_EventScript_Scientist3_1


CarabrueTown_TenebrisLab_Gardevoir::
# 522 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_TENEBRIS_GARDEVOIR, CarabrueTown_TenebrisLab_Gardevoir_2
# 525 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 526 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_1, MSGBOX_NPC
# 527 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 528 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 529 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_2
# 530 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_GARDEVOIR
# 531 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
CarabrueTown_TenebrisLab_Gardevoir_1:
	end

CarabrueTown_TenebrisLab_Gardevoir_2:
# 523 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_0, MSGBOX_NPC
	goto CarabrueTown_TenebrisLab_Gardevoir_1


CarabrueTown_TenebrisLab_Metagross::
# 537 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_METAGROSS, CRY_MODE_NORMAL
# 538 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Metagross_Text_0, MSGBOX_NPC
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

# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_3:
# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_4:
# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
	step_end

# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_5:
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_left
	step_end

# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_6:
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up_down
	step_end

# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_7:
# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0:
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
	step_end

# 88 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1:
# 88 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_2:
# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3:
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0:
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1:
# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2:
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3:
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
	step_end

# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4:
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5:
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6:
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7:
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8:
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9:
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10:
# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 269 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11:
# 269 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_right
	step_end

# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12:
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
	step_end

CarabrueTown_TenebrisLab_EventScript_Start_Text_0:
# 23 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Ah! There you are! Finally.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_1:
# 29 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm Assistant Professor Rue and\n"
	.string "welcome to the Tenebris\l"
	.string "Laboratory...er...\n"
	.string "{PLAYER}, was it?$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_2:
# 34 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry for the mess...we're scrambling\n"
	.string "to get things done, what with the\l"
	.string "Professor gone missing and everything.\l"
	.string "Did you bring your welcome package?\l"
	.string "Yes? Oh wonderful! You see, we sent you\l"
	.string "the wrong package. The one we sent you\l"
	.string "is the evidence bag for the police! This\l"
	.string "bag next to me is your welcome package.\l"
	.string "Go on - open it.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_3:
# 46 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Standard supplies for a research\n"
	.string "associate! Now as for the evidence bag,\l"
	.string "we'll have to hand that over to the\l"
	.string "police as quickly as possible.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_4:
# 55 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Right, now normally I would brief you on\n"
	.string "your work, but we've got no time. So I'm\l"
	.string "just going to have you start working\l"
	.string "right away. We've been running low on\l"
	.string "supplies and the nearest Poké Mart is\l"
	.string "in Fennilahl Town, past Route 1. Please\l"
	.string "go and pick up our shipment and bring it\l"
	.string "back. Be careful! There are some\l"
	.string "important things in there!$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_5:
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You'll need a companion Pokémon to\n"
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
	.string "Pokémon you're meant to be with.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_6:
# 68 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Argh! It's all a mess!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0:
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Wait! I almost forgot!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1:
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: On the way, could you give the\n"
	.string "evidence bag you have to the police?\l"
	.string "They're waiting at the edge of town.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0:
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Good, you're back. Come here.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1:
# 121 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Detectives, meet {PLAYER}, our\n"
	.string "newest assistant.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2:
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: We've met already.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3:
# 126 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: {PLAYER}, Have you got the\n"
	.string "supplies?\n"
	.string "No?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4:
# 131 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: WHAT?! Professor Tenebris took\n"
	.string "them?\p"
	.string "...\p"
	.string "RUE: Sigh...at any rate, thanks for\n"
	.string "telling me, {PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5:
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "But how? When? Oh no...this is a\n"
	.string "disaster. You see, those supplies\l"
	.string "contained something very precious.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6:
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Have you heard of dreamstones?\n"
	.string "No? Hardly surprising, considering that\l"
	.string "there are only three in all of Cormoria.\l"
	.string "You see...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7:
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Our lab specialises in the research\n"
	.string "of Pokémon psychology - of which the\l"
	.string "Professor was a leading expert, as you\l"
	.string "no doubt know. In particular, a\l"
	.string "Pokemon's sleeping subconscious\l"
	.string "psyche is our field of interest.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8:
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: This right here is our lab's pride\n"
	.string "and joy - the DREAMALYSER. Once\l"
	.string "powered, it'll allow us to study what\l"
	.string "Pokémon undergo while in deep sleep. We\l"
	.string "built every single piece of this by\l"
	.string "hand. And something like this can't be\l"
	.string "powered using conventional methods.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9:
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: No...this thing needs something far\n"
	.string "more potent. Our plan was to use\l"
	.string "dreamstones to power it. Dreamstones\l"
	.string "are powerful reserves of subconscious\l"
	.string "Pokémon energy in solidified form. We\l"
	.string "don't know yet how they came to be, and\l"
	.string "so far, we know of only three across all\l"
	.string "of Cormoria. Incredibly rare, you see?\l"
	.string "And power like that in the wrong hands...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10:
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: And this month we were supposed\n"
	.string "to receive two things in our supplies -\l"
	.string "{PLAYER}, your companion Pokemon...\l"
	.string "and one dreamstone. One of only three\l"
	.string "that exist. And just as we would have\l"
	.string "powered up the DREAMALYSER for the\l"
	.string "first time ever, the Professor took the\l"
	.string "dreamstone and disappeared! Oh, why did\l"
	.string "she leave? What on earth was she\l"
	.string "thinking!?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11:
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: I'm sorry {PLAYER}...I fear that\n"
	.string "destiny has chosen your companion for\l"
	.string "you. But it looks like you two have\l"
	.string "formed a bond already...maybe this is\l"
	.string "for the best after all.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12:
# 172 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: If we could get our hands\n"
	.string "on one of the other dreamstones, we\l"
	.string "might be able to understand why the\l"
	.string "Professor vanished.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13:
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Detectives...please. You must find\n"
	.string "the Professor!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14:
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Finding her is what we're\n"
	.string "here for. Again, I can't shake the hunch\l"
	.string "that the other dreamstones could\l"
	.string "provide us with a clue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15:
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Whatever you need to do!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16:
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: We'll do our best, Rue. But\n"
	.string "we're detectives - we can uncover her\l"
	.string "tracks, but we can't unravel her mind.\l"
	.string "We'll need some help from one of you.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17:
# 188 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: What do you plan to do?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18:
# 189 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: While we track the\n"
	.string "Professor, one of you should find a\l"
	.string "dreamstone for us to examine for clues.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19:
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: But none of us can leave the lab!\n"
	.string "There's too much work.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20:
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Well...what about this kid?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21:
# 192 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: {PLAYER}? It's too dangerous.\n"
	.string "{PLAYER}'s Pokémon aren't strong\l"
	.string "enough yet.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22:
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: What else do you suggest?\n"
	.string "{PLAYER} is the best we've got.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23:
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Right...yes. You're right.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24:
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: {PLAYER} - I know it's only your\n"
	.string "first day, but this is a critical task,\l"
	.string "and none of us can leave the lab.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25:
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: The dreamstones are scattered all\n"
	.string "across Cormoria. Have you ever traveled\l"
	.string "beyond Fennilahl Town? Cormoria is vast\l"
	.string "and filled with dangerous Pokemon. I\l"
	.string "fear you may not be up to the task...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26:
# 208 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: I don't know how I can\n"
	.string "help...perhaps this may be of use.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27:
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} received a Pokedex from\n"
	.string "Assistant Professor Rue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28:
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: It's a Pokedex. It contains\n"
	.string "information on Pokémon you've\l"
	.string "encountered. You can see its moves, how\l"
	.string "it evolves, and much more!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29:
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Sigh...the Professor missing. The\n"
	.string "dreamstone missing. The lab in shambles.\l"
	.string "My youngest researcher sent off on a\l"
	.string "dangerous journey.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30:
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: I've failed.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31:
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Get it together, Rue. The\n"
	.string "other researchers are counting on you.\l"
	.string "Have some faith in us...and...\p"
	.string "...well...\p"
	.string "...{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32:
# 238 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Wait right there!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33:
# 246 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Sir, I overheard the whole thing!\n"
	.string "And I protest!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34:
# 252 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: You can't give this kid a job like\n"
	.string "that! What's your name? {PLAYER}?\l"
	.string "Pshh, whatever. Look at you! Your\l"
	.string "Pokémon look exhausted after a single\l"
	.string "trip to Fennilahl Town!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35:
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Screw this kid sir! Let ME handle\n"
	.string "the dreamstones!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36:
# 263 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: Excuse me...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37:
# 266 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Meet Kohla, this years ace\n"
	.string "rookie from the Detective Academy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38:
# 272 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "KOHLA: Heard that {PLAYER}? ACE.\n"
	.string "ROOKIE. This is serious business. You\l"
	.string "can't handle this. Back off!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39:
# 275 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Now hold on Kohla, there's\n"
	.string "no need for all this. {PLAYER} is\l"
	.string "representing the Professor's lab. We\l"
	.string "need someone from the lab to help us\l"
	.string "track the dreamstones.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40:
# 280 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "KOHLA: I can do it sir! And I'll prove it\n"
	.string "right now!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41:
# 286 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "KOHLA: C'mon {PLAYER}, let's see who's\n"
	.string "a better fit for the job!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42:
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You won't be this lucky next time!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43:
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Pah! A single battle means nothing! You\n"
	.string "haven't been through what I have. It\l"
	.string "takes effort and discipline to become\l"
	.string "an Ace Rookie. Just you wait - I'll be\l"
	.string "the one to find the dreamstone!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44:
# 298 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "KOHLA: Over and out, sir!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45:
# 309 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Well Rue, it looks like your\n"
	.string "assistant's got some backbone.\l"
	.string "{PLAYER}, we're counting on you and\l"
	.string "Kohla to get the dreamstone while we\l"
	.string "track Professor Tenebris. Rue, do you\l"
	.string "know anything of the whereabouts of\l"
	.string "the other dreamstones?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46:
# 310 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: One lies somewhere inside Mt.\n"
	.string "Ceram. {PLAYER}, Mt. Ceram is further\l"
	.string "east from Fennilahl Town. You'll have to\l"
	.string "reach Gastree City, and then make your\l"
	.string "way up north towards the mountain.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47:
# 311 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: {PLAYER} - you know what\n"
	.string "to do. Head east to Gastree City. From\l"
	.string "there, make your way to Mt. Ceram and\l"
	.string "find the dreamstone inside.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48:
# 312 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "RUE: I'll let your mother know that\n"
	.string "you've been assigned some travel work.\l"
	.string "I wish you all the best.$"

CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0:
# 332 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "DETECTIVE: Don't let one victory get to\n"
	.string "your head. KOHLA's already got a head\l"
	.string "start on you. You'd better hurry if you\l"
	.string "want to catch up.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0:
# 351 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One of the Lab's Pokemon.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1:
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose GOTHITA?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2:
# 363 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The TENEBRIS LAB has gifted you a\n"
	.string "GOTHITA!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0:
# 390 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose TIMBURR?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1:
# 397 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The TENEBRIS LAB has gifted you a\n"
	.string "TIMBURR!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0:
# 424 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose ZIGZAGOON?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1:
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The TENEBRIS LAB has gifted you a\n"
	.string "ZIGZAGOON!$"

NicknamePartyMon_Text_0:
# 450 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Give it a nickname?$"

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0:
# 475 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Assistant Professor Rue told me not to\n"
	.string "leave without a Pokémon to protect me!$"

CarabrueTown_TenebrisLab_EventScript_Rue_Text_0:
# 494 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We're counting on you!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0:
# 501 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "There's so much work that I don't even\n"
	.string "know where to start! So I'm just staring\l"
	.string "at all these books instead.$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0:
# 506 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm so grateful we have Assistant\n"
	.string "Professor Rue. Without him to step in\l"
	.string "for Professor Tenebris, we'd have had\l"
	.string "to shut the lab down.$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0:
# 512 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "A bit unorthodox for a researcher, but\n"
	.string "you and your new partner are looking\l"
	.string "good together!$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1:
# 514 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry we couldn't offer you the\n"
	.string "standard companion Pokemon. But\l"
	.string "they're coming in the next batch of\l"
	.string "supplies! Just be patient.$"

CarabrueTown_TenebrisLab_Gardevoir_Text_0:
# 523 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "GARDEVOIR regards you intently...$"

CarabrueTown_TenebrisLab_Gardevoir_Text_1:
# 526 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "GARDEVOIR regards you intently...\p"
	.string "Something floats into your hand!$"

CarabrueTown_TenebrisLab_Gardevoir_Text_2:
# 529 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Was this her way of welcoming a new\n"
	.string "member of the lab?\p"
	.string "Thank you, GARDEVOIR!$"

CarabrueTown_TenebrisLab_Metagross_Text_0:
# 538 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "It's Asst. Prof. Rue's METAGROSS. It's\n"
	.string "so intimidating!$"
