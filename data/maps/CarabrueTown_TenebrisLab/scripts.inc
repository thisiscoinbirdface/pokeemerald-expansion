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
# 33 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 34 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 35 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 37 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 38 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 40 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 41 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 43 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 44 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_4
# 45 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 47 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 48 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 50 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_REAL_PACKAGE_GET
# 51 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POTION, 1
# 53 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 5
# 56 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_5
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 62 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_5
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_6
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 69 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 70 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 72 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 73 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_6
# 74 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 76 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 77 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 78 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_8
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 81 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 82 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_7
# 83 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_5
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 87 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 88 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_8
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_2
# 96 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 1
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives::
# 103 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 104 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 3
# 105 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	message CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1
# 110 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1
# 113 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_2
# 115 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 2
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end


CarabrueTown_TenebrisLab_EventScript_NoSupplies::
# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_FENNILAHL_MART_SUPPLIES, 0
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_NoSupplies_1
# 133 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 134 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 9
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 8
# 137 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0
# 139 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 143 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 144 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 146 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 148 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 156 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 157 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	completequest QUEST_LAB_FIRST_DAY
# 171 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 175 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 176 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6
# 177 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 12
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 183 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 188 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8
# 192 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 196 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 203 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 205 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 208 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10
# 209 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 213 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 214 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12
# 223 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13
# 228 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 234 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 235 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 236 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 237 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 239 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14
# 241 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 242 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 244 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4
# 246 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 248 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16
# 250 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 251 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 252 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 255 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 259 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 260 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 263 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 264 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20
# 266 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 269 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21
# 270 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 271 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 24
# 272 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 273 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 274 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 275 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 276 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 40
# 278 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 279 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 280 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 281 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 282 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 284 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 285 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22
# 286 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 287 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 288 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 289 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 293 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24
# 294 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 295 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 297 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 298 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 299 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 300 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6
# 302 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 306 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25
# 307 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 308 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 310 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 311 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26
# 312 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 314 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 315 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27
# 316 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 317 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 319 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 320 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28
# 321 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7
# 324 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 325 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 328 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 329 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29
# 330 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 331 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 36
# 332 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 333 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30
# 334 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 335 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 336 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 337 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 338 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 339 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 340 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 341 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31
# 342 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 343 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 346 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 347 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 348 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32
# 349 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 10
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9
# 351 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 352 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 354 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 355 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 357 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33
# 358 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 359 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 361 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 362 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 363 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 364 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34
# 365 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 366 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 368 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 369 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 370 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 372 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35
# 374 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 375 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 376 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10
# 377 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 378 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 380 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 381 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36
# 382 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 383 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 385 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37
# 386 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 387 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 388 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11
# 389 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 390 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 392 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 393 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39
# 394 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 395 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 396 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 397 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40
# 398 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 399 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 400 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 401 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 402 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 403 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41
# 404 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 405 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 406 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11
# 407 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 408 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 409 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 410 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42
# 411 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 414 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	trainerbattle_no_intro TRAINER_KOHLA_LAB, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43
# 415 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, FALSE
# 416 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 417 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 418 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44
# 419 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 420 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 421 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 422 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 423 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 424 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 425 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45
# 426 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 428 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 429 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 430 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	fadedefaultbgm
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12
# 432 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 433 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 10
# 435 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 436 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 437 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 438 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46
# 439 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 440 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 441 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 442 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47
# 443 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 444 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 445 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 446 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48
# 447 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 448 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 449 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 450 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49
# 453 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 3
# 454 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_POLICE_PRESCENCE
# 455 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_LAB_CALLTOACTION
# 459 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	startquest QUEST_DREAMSTONE_MYSTERIES
# 460 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_1
# 462 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_NoSupplies_1:
	end


CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric::
# 468 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 469 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Pokeball_One::
# 485 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 487 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2
# 491 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 10, 3
# 492 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GOTHITA, CRY_MODE_NORMAL
# 493 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1, MSGBOX_YESNO
# 494 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5
# 508 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1:
# 512 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 513 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2:
# 488 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5:
# 495 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 4
# 496 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY
# 497 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 498 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8:
# 499 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 500 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2
# 501 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 502 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 503 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 504 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Two::
# 520 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 522 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2
# 526 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_TIMBURR, 10, 3
# 527 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_TIMBURR, CRY_MODE_NORMAL
# 528 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 529 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5
# 543 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1:
# 547 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 548 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2:
# 523 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5:
# 530 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_TIMBURR, 5, ITEM_ORAN_BERRY
# 531 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 532 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 7
# 533 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8:
# 534 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 535 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1
# 536 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 537 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 538 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 539 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Three::
# 555 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 557 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2
# 561 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_ZIGZAGOON_GALAR, 10, 3
# 562 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 563 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 564 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5
# 578 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1:
# 582 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 583 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2:
# 558 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5:
# 565 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALAR, 5, ITEM_ORAN_BERRY
# 566 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 567 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 6
# 568 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8:
# 569 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 570 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1
# 571 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 572 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 573 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 574 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 589 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_POKENAV
# 590 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
	return


NicknameBoxMon::
# 603 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
# 604 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 605 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 608 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 606 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon::
# 614 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 616 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2
# 624 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_LAB_STATE, 1
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4:
# 628 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2:
# 617 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0
# 618 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1
# 619 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 620 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5:
# 625 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives
	goto CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4


CarabrueTown_TenebrisLab_EventScript_Rue::
# 634 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 635 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Rue_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Scientist1::
# 641 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_POST_FINALE_CUTSCENE, CarabrueTown_TenebrisLab_EventScript_Scientist1_2
# 646 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_1, MSGBOX_NPC
	end

CarabrueTown_TenebrisLab_EventScript_Scientist1_2:
# 642 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0
	end


CarabrueTown_TenebrisLab_EventScript_Scientist2::
# 651 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_POST_FINALE_CUTSCENE, CarabrueTown_TenebrisLab_EventScript_Scientist2_2
# 656 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_1, MSGBOX_NPC
	end

CarabrueTown_TenebrisLab_EventScript_Scientist2_2:
# 652 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0
	end


CarabrueTown_TenebrisLab_EventScript_Scientist3::
# 661 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_POST_FINALE_CUTSCENE, CarabrueTown_TenebrisLab_EventScript_Scientist3_2
# 666 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_LAB_CALLTOACTION, CarabrueTown_TenebrisLab_EventScript_Scientist3_5
# 669 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_2, MSGBOX_NPC
CarabrueTown_TenebrisLab_EventScript_Scientist3_4:
	end

CarabrueTown_TenebrisLab_EventScript_Scientist3_2:
# 662 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0
	end

CarabrueTown_TenebrisLab_EventScript_Scientist3_5:
# 667 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1, MSGBOX_NPC
	goto CarabrueTown_TenebrisLab_EventScript_Scientist3_4


CarabrueTown_TenebrisLab_Gardevoir::
# 677 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_TENEBRIS_GARDEVOIR, CarabrueTown_TenebrisLab_Gardevoir_2
# 680 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 681 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_1, MSGBOX_NPC
# 682 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 683 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 684 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_2
# 685 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_GARDEVOIR
# 686 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
CarabrueTown_TenebrisLab_Gardevoir_1:
	end

CarabrueTown_TenebrisLab_Gardevoir_2:
# 678 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_0, MSGBOX_NPC
	goto CarabrueTown_TenebrisLab_Gardevoir_1


CarabrueTown_TenebrisLab_Metagross::
# 692 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_METAGROSS, CRY_MODE_NORMAL
# 693 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Metagross_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_Tenebris::
# 699 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_Tenebris_Text_0, CarabrueTown_TenebrisLab_Tenebris_Text_1
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

# 33 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_1:
# 33 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_2:
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
	step_end

# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_3:
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 47 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_4:
# 47 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 47 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_5:
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_6:
# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 76 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_7:
# 76 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_left
	step_end

# 78 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_8:
# 78 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 78 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 78 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
# 78 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
# 78 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up_down
	step_end

# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0:
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
	step_end

# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1:
# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_2:
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0:
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1:
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2:
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
	step_end

# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3:
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4:
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up
	step_end

# 280 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5:
# 280 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6:
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7:
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 336 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8:
# 336 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9:
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 376 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10:
# 376 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 388 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11:
# 388 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_right
	step_end

# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12:
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
	.string "welcome to the Tenebris Laboratory...\n"
	.string "...er...{PLAYER}, was it?$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_4:
# 44 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry for the mess...we're scrambling\n"
	.string "to get things done, what with the\l"
	.string "Professor gone missing and everything.\p"
	.string "Did you bring your welcome package?\p"
	.string "Yes?\p"
	.string "Oh wonderful! You see, we sent you the\n"
	.string "wrong package. The one we sent you is\l"
	.string "the evidence bag for the police!\p"
	.string "This bag here is your welcome package.\n"
	.string "Go on - open it!$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_5:
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Standard supplies for a research\n"
	.string "associate! Now as for the evidence bag,\l"
	.string "we'll have to hand that over to the\l"
	.string "police as quickly as possible.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_6:
# 73 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Right, now normally I would brief you on\n"
	.string "your work, but we've got no time.\p"
	.string "So I'm just going to have you start\n"
	.string "working right away, okay?\p"
	.string "We've been running low on supplies and\n"
	.string "the nearest Poké Mart is in Fennilahl\l"
	.string "Town, past Route 1.\p"
	.string "Please go and pick up our shipment and\n"
	.string "bring it back.\p"
	.string "Be careful! There are some important\n"
	.string "things in there.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_7:
# 82 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You'll need a companion Pokémon to\n"
	.string "protect you. Pick up any of the\l"
	.string "Pokéballs lying around the lab.\p"
	.string "If we had our supplies, I could give you\n"
	.string "the standard companion Pokémon, but\l"
	.string "without Professor Tenebris,\l"
	.string "everything's gone haywire here.\p"
	.string "You'll have to make do with what you\n"
	.string "find lying around.\p"
	.string "But I promise - once you bring the\n"
	.string "supplies from the Poké Mart, we'll pair\l"
	.string "you with the Pokémon you're meant to be\l"
	.string "with.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_8:
# 88 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Argh! It's all a mess!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0:
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Wait! I almost forgot!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1:
# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "On the way, could you give the evidence\n"
	.string "bag you have to the detectives?\l"
	.string "They're waiting by the Route 1 exit.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0:
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Good, you're back. Come here.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1:
# 148 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detectives, meet {PLAYER}, our\n"
	.string "newest assistant.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2:
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3:
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We've met already.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4:
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER}, did you get the supplies?\p"
	.string "No?\p"
	.string "What happened?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5:
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "WHAT?! Professor Tenebris took them?\p"
	.string "Sigh...thanks for telling me, {PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6:
# 176 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "But how? When? This is a disaster...\p"
	.string "You see, those supplies contained\n"
	.string "something very precious.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7:
# 183 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Have you ever heard of something\n"
	.string "called a dreamstone?\p"
	.string "No?\p"
	.string "Hardly surprising, considering that\n"
	.string "there are only three in all of Cormoria.\n"
	.string "You see...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8:
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Our lab specialises in the research of\n"
	.string "Pokémon psychology - of which the\l"
	.string "Professor was a leading expert, as you\l"
	.string "no doubt know. In particular, a\l"
	.string "Pokémon's sleeping subconscious\l"
	.string "psyche is our field of interest.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9:
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "This right here is our lab's pride and\n"
	.string "joy - the Dreamalyser. Once powered,\l"
	.string "it'll allow us to study what Pokémon\l"
	.string "undergo while in deep sleep.\l"
	.string "And something like this can't be\l"
	.string "powered using conventional methods.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10:
# 208 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "No...this thing needs something far more\n"
	.string "potent. Our plan was to use\l"
	.string "dreamstones to power it.\p"
	.string "Dreamstones are powerful reserves of\n"
	.string "subconscious Pokémon energy.\p"
	.string "We don't know yet how they came to be,\n"
	.string "and so far, we know of only three across\l"
	.string "all of Cormoria.\p"
	.string "Incredibly rare, you see?\p"
	.string "And power like that in the wrong hands...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11:
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "This month, we were supposed to receive\n"
	.string "two things in our supplies - {PLAYER},\l"
	.string "your Pokémon...and one dreamstone.\p"
	.string "One of only three that exist.\p"
	.string "And just as we would have powered up\n"
	.string "the Dreamalyser for the first time ever,\l"
	.string "the Professor took it and disappeared!\p"
	.string "Oh, why did she leave like that?\n"
	.string "What on earth was she thinking!?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12:
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Sorry {PLAYER}...I fear that destiny\n"
	.string "has chosen your companion for you.\l"
	.string "But it looks like you two have formed a\l"
	.string "bond already...this may be for the best.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13:
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "If we could get our hands on one of the\n"
	.string "other dreamstones, we might be able to\l"
	.string "understand why the Professor vanished.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14:
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detectives...please. You must find the\n"
	.string "Professor and the dreamstone!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15:
# 242 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Finding her is what we're here for.\n"
	.string "Again, I can't shake the hunch that the\l"
	.string "other dreamstones could give us a clue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16:
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Whatever you need to do!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17:
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We'll do our best, Rue. But we're\n"
	.string "detectives - we can uncover her tracks,\l"
	.string "but we can't unravel her mind. We'll need\l"
	.string "some help from one of you.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18:
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "What do you plan to do?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19:
# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "While we track the Professor, one of\n"
	.string "you should find a dreamstone for us to\l"
	.string "examine for clues.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20:
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "But none of us can leave the lab!\n"
	.string "There's too much work.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21:
# 269 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Well...what about the kid?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22:
# 285 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER}? It's too dangerous.\n"
	.string "{PLAYER}'s Pokémon aren't strong\l"
	.string "enough yet.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23:
# 289 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "What else do you suggest?\n"
	.string "{PLAYER} is the best we've got.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24:
# 293 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Right...yes. You're right.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25:
# 306 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 311 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I don't know how I can help...perhaps\n"
	.string "this may be of use.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27:
# 315 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} received a Pokedex from\n"
	.string "Assistant Professor Rue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28:
# 320 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "It's a Pokedex. It has information on\n"
	.string "Pokémon you've encountered. You can\l"
	.string "see its moves, how it evolves, and more!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29:
# 329 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Sigh...the Professor missing. The\n"
	.string "dreamstone missing. The lab in shambles.\l"
	.string "My youngest researcher sent off on a\l"
	.string "dangerous journey.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30:
# 333 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I've failed.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31:
# 341 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Get it together, Rue. The other\n"
	.string "researchers are counting on you.\l"
	.string "Have some faith in us...and...\p"
	.string "...well...\p"
	.string "...{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32:
# 348 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Wait right there!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33:
# 357 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Sir, I overheard the whole thing!\n"
	.string "And I protest!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34:
# 364 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You can't give this kid a job like that!\n"
	.string "What's your name?\p"
	.string "{PLAYER}?\p"
	.string "Pshh, whatever. Look at you! Your\n"
	.string "Pokémon look exhausted after a\l"
	.string "single trip to Fennilahl Town!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35:
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Screw this kid sir! Let ME handle the\n"
	.string "dreamstones!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36:
# 381 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Excuse me...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37:
# 385 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Meet Kohla, this year's Ace Rookie\n"
	.string "from the Detective Academy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38:
# 392 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39:
# 393 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Heard that {PLAYER}? ACE. ROOKIE.\n"
	.string "This is serious business. You can't\l"
	.string "handle this. Back off!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40:
# 397 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Now hold on Kohla, there's no need for\n"
	.string "all this. {PLAYER} is representing the\l"
	.string "Professor's lab. We need someone from\l"
	.string "the lab to help track the dreamstones.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41:
# 403 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I can do it sir!\n"
	.string "And I'll prove it right now!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42:
# 410 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "C'mon {PLAYER}, let's see who's a\n"
	.string "better fit for the job!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43:
# 414 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You won't be this lucky next time!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44:
# 418 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Pah! A single battle means nothing!\n"
	.string "You haven't been through what I have.\l"
	.string "It takes effort and discipline to\l"
	.string "become an Ace Rookie. Just you wait -\l"
	.string "I'll be the one to find the dreamstone!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45:
# 425 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Over and out, sir!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46:
# 438 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Well Rue, it looks like your assistant's\n"
	.string "got some backbone.\p"
	.string "{PLAYER}, we're counting on you and\n"
	.string "Kohla to get the dreamstone while we\l"
	.string "track Professor Tenebris.\p"
	.string "Rue, do you know anything of the\n"
	.string "whereabouts of the other dreamstones?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47:
# 442 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One lies somewhere inside Mt. Ceram.\n"
	.string "{PLAYER}, Mt. Ceram is further east\l"
	.string "from Fennilahl Town. You'll have to\l"
	.string "reach Gastree City, and then make your\l"
	.string "way up north towards the mountain.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48:
# 446 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} - you know what to do. Head\n"
	.string "east to Gastree City. From there, make\l"
	.string "your way to Mt. Ceram and find the\l"
	.string "dreamstone that's there.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49:
# 450 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'll let your mother know that you've\n"
	.string "been assigned some travel work.\p"
	.string "I wish you all the best.$"

CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0:
# 469 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Don't let one victory get to your head.\n"
	.string "Kohla's already got a head start.\l"
	.string "Better hurry if you want to catch up!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0:
# 488 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One of the Lab's Pokémon.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1:
# 493 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Gothita?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2:
# 500 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Laboratory has gifted you\n"
	.string "a Gothita!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0:
# 528 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Timburr?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1:
# 535 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Laboratory has gifted you\n"
	.string "a Timburr!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0:
# 563 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Zigzagoon?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1:
# 570 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Laboratory has gifted you\n"
	.string "a Zigzagoon!$"

NicknamePartyMon_Text_0:
# 589 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You can nickname your Pokémon\n"
	.string "via the summary screen!$"

NicknameBoxMon_Text_0:
# 603 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Give it a nickname?$"

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0:
# 617 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Assistant Professor Rue told me not to\n"
	.string "leave without a Pokémon to protect me!$"

CarabrueTown_TenebrisLab_EventScript_Rue_Text_0:
# 635 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We're counting on you!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0:
# 642 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I can't believe Rue was behind this\n"
	.string "whole mess! I wish I'd caught on sooner!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_1:
# 646 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "There's so much work that I don't even\n"
	.string "know where to start! So I'm just staring\l"
	.string "at all these books instead.$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0:
# 652 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The detectives told us the entire\n"
	.string "story. You're incredible, {PLAYER}!$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_1:
# 656 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm so grateful we have Assistant\n"
	.string "Professor Rue. Without him to step in\l"
	.string "for Professor Tenebris, we'd have had\l"
	.string "to shut the lab down.$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0:
# 662 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Go on, {PLAYER}! Bring the\n"
	.string "championship trophy to Carabrue Town!$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1:
# 667 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "A bit unorthodox for a researcher, but\n"
	.string "you and your new partner are looking\l"
	.string "good together!$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_2:
# 669 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry we couldn't offer you the\n"
	.string "standard companion Pokémon.\p"
	.string "But they're coming in the next batch of\n"
	.string "supplies! Just be patient.$"

CarabrueTown_TenebrisLab_Gardevoir_Text_0:
# 678 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Gardevoir regards you intently...$"

CarabrueTown_TenebrisLab_Gardevoir_Text_1:
# 681 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Gardevoir regards you intently...\p"
	.string "Something floats into your hand!$"

CarabrueTown_TenebrisLab_Gardevoir_Text_2:
# 684 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Was this her way of welcoming a new\n"
	.string "member of the lab?\p"
	.string "Thank you, Gardevoir!$"

CarabrueTown_TenebrisLab_Metagross_Text_0:
# 693 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "It's Asst. Prof. Rue's Metagross. It's so\n"
	.string "intimidating!$"

CarabrueTown_TenebrisLab_Tenebris_Text_0:
# 699 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Tenebris$"

CarabrueTown_TenebrisLab_Tenebris_Text_1:
# 699 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Go {PLAYER} go!$"
