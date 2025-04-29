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
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 24 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_1
# 25 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 28 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 29 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 30 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_3
# 31 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 32 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 33 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 35 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_4
# 37 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 40 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 42 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_REAL_PACKAGE_GET
# 43 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 44 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POTION, 1
# 45 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 46 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 5
# 48 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_5
# 50 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 53 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 55 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 56 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_6
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 62 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_5
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_6
# 65 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 68 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_7
# 69 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 71 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 72 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 73 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 74 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_8
# 75 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_2
# 82 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 1
# 83 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives::
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 90 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 3
# 91 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 92 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0
# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 95 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1
# 96 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1
# 98 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_2
# 100 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 102 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 104 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 2
# 105 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end


CarabrueTown_TenebrisLab_EventScript_NoSupplies::
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_FENNILAHL_MART_SUPPLIES, 0
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_NoSupplies_1
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 9
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 8
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 123 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0
# 124 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 126 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 128 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 130 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 131 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1
# 132 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 133 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 136 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 137 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4
# 139 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 143 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 144 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 148 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	completequest QUEST_LAB_FIRST_DAY
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6
# 153 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 12
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2
# 156 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 157 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3
# 171 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 172 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 176 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9
# 177 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
# 183 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 188 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 189 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 192 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
# 202 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 203 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 208 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 209 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 210 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 213 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 215 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17
# 223 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 228 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20
# 229 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 234 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23
# 235 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 236 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24
# 237 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 239 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 241 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 242 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 244 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 246 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 248 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 250 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 252 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 259 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28
# 263 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6
# 266 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 270 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 271 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29
# 272 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 273 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 274 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 275 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30
# 276 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 277 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 278 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 279 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 280 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 281 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 282 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 283 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31
# 284 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 285 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 288 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 289 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 10
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9
# 293 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 294 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 295 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 297 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 298 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 299 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33
# 300 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 306 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34
# 307 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 308 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 310 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 311 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 312 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 314 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 315 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35
# 316 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 317 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 318 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10
# 319 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 320 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 322 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36
# 324 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 325 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 327 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37
# 328 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 329 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 330 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11
# 331 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 332 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 334 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 335 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39
# 336 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 337 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 338 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 339 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40
# 340 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 341 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 342 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 343 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 344 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 345 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41
# 346 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 347 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 348 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11
# 349 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 351 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 352 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	trainerbattle_no_intro TRAINER_KOHLA_LAB, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43
# 357 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, FALSE
# 358 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 359 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 360 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44
# 361 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 362 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 363 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 364 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 365 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 366 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 367 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45
# 368 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 370 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3
# 371 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 372 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	fadedefaultbgm
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12
# 374 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 375 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 10
# 377 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 378 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 379 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 380 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46
# 381 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 382 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47
# 383 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48
# 385 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 386 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49
# 389 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 3
# 390 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_POLICE_PRESCENCE
# 391 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_LAB_CALLTOACTION
# 395 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	startquest QUEST_DREAMSTONE_MYSTERIES
# 396 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_1
# 398 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_NoSupplies_1:
	end


CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric::
# 404 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 405 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 406 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 407 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0
# 408 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Pokeball_One::
# 423 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 425 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2
# 429 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 10, 3
# 430 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GOTHITA, CRY_MODE_NORMAL
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1, MSGBOX_YESNO
# 432 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5
# 445 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1:
# 449 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 450 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2:
# 426 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5:
# 433 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 4
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY
# 435 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 436 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8:
# 437 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 438 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2
# 439 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 440 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 441 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Two::
# 457 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 459 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2
# 463 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_TIMBURR, 10, 3
# 464 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_TIMBURR, CRY_MODE_NORMAL
# 465 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 466 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5
# 479 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1:
# 483 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 484 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2:
# 460 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5:
# 467 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_TIMBURR, 5, ITEM_ORAN_BERRY
# 468 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 469 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 7
# 470 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8:
# 471 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 472 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1
# 473 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 474 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 475 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Three::
# 491 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 493 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2
# 497 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_ZIGZAGOON_GALAR, 10, 3
# 498 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 499 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 500 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5
# 513 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1:
# 517 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 518 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2:
# 494 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5:
# 501 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALAR, 5, ITEM_ORAN_BERRY
# 502 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 503 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 6
# 504 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8:
# 505 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 506 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1
# 507 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 508 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 509 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 525 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 526 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 527 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 528 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 529 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 536 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 537 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 538 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 541 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 539 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon::
# 547 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 549 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2
# 557 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_LAB_STATE, 1
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4:
# 561 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2:
# 550 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0
# 551 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1
# 552 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 553 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5:
# 558 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives
	goto CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4


CarabrueTown_TenebrisLab_EventScript_Rue::
# 567 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 568 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Rue_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Scientist1::
# 574 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Scientist2::
# 579 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Scientist3::
# 584 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_LAB_CALLTOACTION, CarabrueTown_TenebrisLab_EventScript_Scientist3_2
# 587 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1, MSGBOX_NPC
CarabrueTown_TenebrisLab_EventScript_Scientist3_1:
	end

CarabrueTown_TenebrisLab_EventScript_Scientist3_2:
# 585 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0, MSGBOX_NPC
	goto CarabrueTown_TenebrisLab_EventScript_Scientist3_1


CarabrueTown_TenebrisLab_Gardevoir::
# 595 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_TENEBRIS_GARDEVOIR, CarabrueTown_TenebrisLab_Gardevoir_2
# 598 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 599 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_1, MSGBOX_NPC
# 600 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 601 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 602 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_2
# 603 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_GARDEVOIR
# 604 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
CarabrueTown_TenebrisLab_Gardevoir_1:
	end

CarabrueTown_TenebrisLab_Gardevoir_2:
# 596 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_0, MSGBOX_NPC
	goto CarabrueTown_TenebrisLab_Gardevoir_1


CarabrueTown_TenebrisLab_Metagross::
# 610 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_METAGROSS, CRY_MODE_NORMAL
# 611 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Metagross_Text_0, MSGBOX_NPC
	end


# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_0:
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 32 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_1:
# 32 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 32 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 32 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_2:
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_3:
# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 55 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_4:
# 55 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
	step_end

# 62 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_5:
# 62 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_left
	step_end

# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_6:
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up_down
	step_end

# 71 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_7:
# 71 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0:
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
	step_end

# 95 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1:
# 95 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_2:
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_3:
# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 128 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0:
# 128 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1:
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2:
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3:
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
	step_end

# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4:
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5:
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6:
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7:
# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 278 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8:
# 278 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9:
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 318 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10:
# 318 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 330 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11:
# 330 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_right
	step_end

# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12:
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
	step_end

CarabrueTown_TenebrisLab_EventScript_Start_Text_0:
# 23 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_1:
# 24 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Ah! There you are! Finally.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_2:
# 29 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_3:
# 30 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm Assistant Professor Rue and\n"
	.string "welcome to the Tenebris\l"
	.string "Laboratory...er...{PLAYER}, was it?$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_4:
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry for the mess...we're scrambling\n"
	.string "to get things done, what with the\l"
	.string "Professor gone missing and everything.\l"
	.string "Did you bring your welcome package?\l"
	.string "Yes? Oh wonderful! You see, we sent you\l"
	.string "the wrong package. The one we sent you\l"
	.string "is the evidence bag for the police!\p"
	.string "This bag here is your welcome package.\n"
	.string "Go on - open it!$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_5:
# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Standard supplies for a research\n"
	.string "associate! Now as for the evidence bag,\l"
	.string "we'll have to hand that over to the\l"
	.string "police as quickly as possible.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_6:
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Right, now normally I would brief you on\n"
	.string "your work, but we've got no time. So I'm\l"
	.string "just going to have you start working\l"
	.string "right away. We've been running low on\l"
	.string "supplies and the nearest Poké Mart is\l"
	.string "in Fennilahl Town, past Route 1.\p"
	.string "Please go and pick up our shipment and\n"
	.string "bring it back. Be careful! There are\l"
	.string "some important things in there!$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_7:
# 68 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You'll need a companion Pokémon to\n"
	.string "protect you. Pick up any of the\l"
	.string "Pokéballs lying around the lab. If we\l"
	.string "had our supplies, I could give you the\l"
	.string "standard companion Pokémon, but\l"
	.string "without Professor Tenebris,\l"
	.string "everything's gone haywire here. You'll\l"
	.string "have to make do with what you find lying\l"
	.string "around. But I promise - as soon as you\l"
	.string "bring the supplies back from the Poké\l"
	.string "Mart, we'll pair you with the Pokémon\l"
	.string "you're meant to be with.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_8:
# 74 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Argh! It's all a mess!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0:
# 92 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Wait! I almost forgot!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1:
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "On the way, could you give the evidence\n"
	.string "bag you have to the police? They're\l"
	.string "waiting at the edge of town.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0:
# 123 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Good, you're back. Come here.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1:
# 131 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detectives, meet {PLAYER}, our\n"
	.string "newest assistant.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2:
# 132 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3:
# 133 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We've met already.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4:
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER}, did you get the supplies?\n"
	.string "No? What happened?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5:
# 144 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "WHAT?! Professor Tenebris took them?\p"
	.string "Sigh...at any rate, thanks for telling\n"
	.string "me, {PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6:
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "But how? When? Oh no...this is a\n"
	.string "disaster. You see, those supplies\l"
	.string "contained something very precious.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7:
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Have you heard of dreamstones? No?\n"
	.string "Hardly surprising, considering that\l"
	.string "there are only three in all of Cormoria.\l"
	.string "You see...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8:
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Our lab specialises in the research of\n"
	.string "Pokémon psychology - of which the\l"
	.string "Professor was a leading expert, as you\l"
	.string "no doubt know. In particular, a\l"
	.string "Pokémon's sleeping subconscious\l"
	.string "psyche is our field of interest.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9:
# 176 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "This right here is our lab's pride and\n"
	.string "joy - the Dreamalyser. Once powered,\l"
	.string "it'll allow us to study what Pokémon\l"
	.string "undergo while in deep sleep.\p"
	.string "And something like this can't be\n"
	.string "powered using conventional methods.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10:
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "No...this thing needs something far more\n"
	.string "potent. Our plan was to use\l"
	.string "dreamstones to power it. Dreamstones\l"
	.string "are powerful reserves of subconscious\l"
	.string "Pokémon energy in solidified form.\p"
	.string "We don't know yet how they came to be,\n"
	.string "and so far, we know of only three across\l"
	.string "all of Cormoria.\p"
	.string "Incredibly rare, you see?\p"
	.string "And power like that in the wrong hands...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11:
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "This month, we were supposed to receive\n"
	.string "two things in our supplies - {PLAYER},\l"
	.string "your companion Pokémon...and one\l"
	.string "dreamstone.\p"
	.string "One of only three that exist.\p"
	.string "And just as we would have powered up\n"
	.string "the Dreamalyser for the first time ever,\l"
	.string "the Professor took the dreamstone and\l"
	.string "disappeared!\p"
	.string "Oh, why did she leave? What on earth was\n"
	.string "she thinking!?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12:
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry {PLAYER}...I fear that\n"
	.string "destiny has chosen your companion for\l"
	.string "you. But it looks like you two have\l"
	.string "formed a bond already...maybe this is\l"
	.string "for the best after all.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13:
# 203 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "If we could get our hands on one of the\n"
	.string "other dreamstones, we might be able to\l"
	.string "understand why the Professor vanished.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14:
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detectives...please. You must find the\n"
	.string "Professor!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15:
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Finding her is what we're here for.\n"
	.string "Again, I can't shake the hunch that the\l"
	.string "other dreamstones could give us a clue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16:
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Whatever you need to do!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17:
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We'll do our best, Rue. But we're\n"
	.string "detectives - we can uncover her tracks,\l"
	.string "but we can't unravel her mind. We'll need\l"
	.string "some help from one of you.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18:
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "What do you plan to do?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19:
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "While we track the Professor, one of\n"
	.string "you should find a dreamstone for us to\l"
	.string "examine for clues.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20:
# 228 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "But none of us can leave the lab!\n"
	.string "There's too much work.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21:
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Well...what about the kid?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22:
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER}? It's too dangerous.\n"
	.string "{PLAYER}'s Pokémon aren't strong\l"
	.string "enough yet.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23:
# 234 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "What else do you suggest? {PLAYER} is\n"
	.string "the best we've got.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24:
# 236 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Right...yes. You're right.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25:
# 248 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} - I know it's only your first\n"
	.string "day, but this is a critical task, and\l"
	.string "none of us can leave the lab.\p"
	.string "The dreamstones are scattered all\n"
	.string "across Cormoria. Have you ever traveled\l"
	.string "beyond Fennilahl Town?\p"
	.string "Cormoria is vast and filled with\n"
	.string "dangerous Pokémon. I fear you may not\l"
	.string "be up to the task...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26:
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I don't know how I can help...perhaps\n"
	.string "this may be of use.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27:
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} received a Pokedex from\n"
	.string "Assistant Professor Rue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28:
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "It's a Pokedex. It has information on\n"
	.string "Pokémon you've encountered. You can\l"
	.string "see its moves, how it evolves, and more!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29:
# 271 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Sigh...the Professor missing. The\n"
	.string "dreamstone missing. The lab in shambles.\l"
	.string "My youngest researcher sent off on a\l"
	.string "dangerous journey.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30:
# 275 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I've failed.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31:
# 283 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Get it together, Rue. The other\n"
	.string "researchers are counting on you. Have\l"
	.string "some faith in us...and...\p"
	.string "...well...\p"
	.string "...{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32:
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Wait right there!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33:
# 299 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Sir, I overheard the whole thing! And I\n"
	.string "protest!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34:
# 306 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You can't give this kid a job like that!\n"
	.string "What's your name? {PLAYER}? Pshh,\l"
	.string "whatever. Look at you! Your Pokémon\l"
	.string "look exhausted after a single trip to\l"
	.string "Fennilahl Town!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35:
# 315 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Screw this kid sir! Let ME handle the\n"
	.string "dreamstones!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36:
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Excuse me...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37:
# 327 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Meet Kohla, this years ace rookie from\n"
	.string "the Detective Academy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38:
# 334 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39:
# 335 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Heard that {PLAYER}? ACE. ROOKIE.\n"
	.string "This is serious business. You can't\l"
	.string "handle this. Back off!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40:
# 339 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Now hold on Kohla, there's no need for\n"
	.string "all this. {PLAYER} is representing the\l"
	.string "Professor's lab. We need someone from\l"
	.string "the lab to help track the dreamstones.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41:
# 345 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I can do it sir!\n"
	.string "And I'll prove it right now!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42:
# 352 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "C'mon {PLAYER}, let's see who's a\n"
	.string "better fit for the job!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43:
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You won't be this lucky next time!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44:
# 360 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Pah! A single battle means nothing!\n"
	.string "You haven't been through what I have.\l"
	.string "It takes effort and discipline to\l"
	.string "become an Ace Rookie. Just you wait -\l"
	.string "I'll be the one to find the dreamstone!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45:
# 367 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Over and out, sir!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46:
# 380 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Well Rue, it looks like your assistant's\n"
	.string "got some backbone.\p"
	.string "{PLAYER}, we're counting on you and\n"
	.string "Kohla to get the dreamstone while we\l"
	.string "track Professor Tenebris.\p"
	.string "Rue, do you know anything of the\n"
	.string "whereabouts of the other dreamstones?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47:
# 382 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One lies somewhere inside Mt. Ceram.\n"
	.string "{PLAYER}, Mt. Ceram is further east\l"
	.string "from Fennilahl Town. You'll have to\l"
	.string "reach Gastree City, and then make your\l"
	.string "way up north towards the mountain.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48:
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} - you know what to do. Head\n"
	.string "east to Gastree City. From there, make\l"
	.string "your way to Mt. Ceram and find the\l"
	.string "dreamstone that's there.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49:
# 386 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'll let your mother know that you've\n"
	.string "been assigned some travel work.\p"
	.string "I wish you all the best.$"

CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0:
# 407 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Don't let one victory get to your head.\n"
	.string "Kohla's already got a head start. You'd\l"
	.string "better hurry if you want to catch up.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0:
# 426 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One of the Lab's Pokémon.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1:
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Gothita?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2:
# 438 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Laboratory has gifted you\n"
	.string "a Gothita!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0:
# 465 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Timburr?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1:
# 472 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Laboratory has gifted you\n"
	.string "a Timburr!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0:
# 499 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Zigzagoon?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1:
# 506 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Laboratory has gifted you\n"
	.string "a Zigzagoon!$"

NicknamePartyMon_Text_0:
# 525 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Give it a nickname?$"

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0:
# 550 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Assistant Professor Rue told me not to\n"
	.string "leave without a Pokémon to protect me!$"

CarabrueTown_TenebrisLab_EventScript_Rue_Text_0:
# 568 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We're counting on you!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0:
# 574 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "There's so much work that I don't even\n"
	.string "know where to start! So I'm just staring\l"
	.string "at all these books instead.$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0:
# 579 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm so grateful we have Assistant\n"
	.string "Professor Rue. Without him to step in\l"
	.string "for Professor Tenebris, we'd have had\l"
	.string "to shut the lab down.$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0:
# 585 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "A bit unorthodox for a researcher, but\n"
	.string "you and your new partner are looking\l"
	.string "good together!$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1:
# 587 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry we couldn't offer you the\n"
	.string "standard companion Pokémon.\p"
	.string "But they're coming in the next batch of\n"
	.string "supplies! Just be patient.$"

CarabrueTown_TenebrisLab_Gardevoir_Text_0:
# 596 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Gardevoir regards you intently...$"

CarabrueTown_TenebrisLab_Gardevoir_Text_1:
# 599 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Gardevoir regards you intently...\p"
	.string "Something floats into your hand!$"

CarabrueTown_TenebrisLab_Gardevoir_Text_2:
# 602 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Was this her way of welcoming a new\n"
	.string "member of the lab?\p"
	.string "Thank you, Gardevoir!$"

CarabrueTown_TenebrisLab_Metagross_Text_0:
# 611 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "It's Asst. Prof. Rue's Metagross. It's so\n"
	.string "intimidating!$"
