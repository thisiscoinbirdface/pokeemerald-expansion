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
	delay 20
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 37 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 38 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
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
	release
# 55 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 5
# 57 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_5
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 61 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_5
# 65 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_6
# 68 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 70 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 71 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 73 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 74 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_6
# 75 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 77 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 78 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_8
# 80 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 82 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 83 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_7
# 84 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_5
# 87 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 88 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_8
# 90 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	completesubquest QUEST_LAB_FIRST_DAY, SUB_QUEST_2
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 1
# 98 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives::
# 104 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 105 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 3
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	message CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0
# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 110 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1
# 112 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 113 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_2
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 2
# 123 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end


CarabrueTown_TenebrisLab_EventScript_NoSupplies::
# 132 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_FENNILAHL_MART_SUPPLIES, 0
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_NoSupplies_1
# 136 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 137 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 9
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 8
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 144 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 146 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 148 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 153 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3
# 157 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 161 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 169 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5
# 170 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	completequest QUEST_LAB_FIRST_DAY
# 174 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 176 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6
# 180 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 12
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 183 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 189 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 202 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 203 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9
# 204 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 208 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
# 210 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 214 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 215 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 219 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 20
# 229 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3
# 234 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 235 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 236 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 237 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 238 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 239 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 240 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 242 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14
# 244 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15
# 246 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 248 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 250 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 251 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 252 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 255 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 259 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 260 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18
# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 263 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 264 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 266 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20
# 269 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 270 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 271 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 272 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21
# 273 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 274 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 24
# 275 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 276 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 277 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 278 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 279 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 64
# 281 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 282 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 283 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 284 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 285 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 30
# 287 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 288 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22
# 289 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23
# 293 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 294 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 295 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24
# 297 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 298 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 300 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 302 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 306 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 307 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 308 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 309 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25
# 310 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 311 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 313 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 314 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26
# 315 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 317 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 318 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27
# 319 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 320 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 322 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28
# 324 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7
# 327 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 328 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 329 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 331 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 332 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29
# 333 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 334 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 36
# 335 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 336 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30
# 337 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 338 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 339 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 340 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 341 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 342 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 343 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 344 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31
# 345 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 346 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 349 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 351 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32
# 352 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 10
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9
# 354 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 355 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 356 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 357 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 358 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 359 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 360 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33
# 361 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 362 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 364 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 365 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 366 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 367 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34
# 368 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 369 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 371 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 372 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 375 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 376 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35
# 377 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 378 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 379 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10
# 380 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 381 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 8
# 383 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36
# 385 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 386 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 387 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 388 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37
# 389 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 390 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 391 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11
# 392 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 393 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 395 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 396 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39
# 397 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 398 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 399 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 400 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40
# 401 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 402 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 403 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 404 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 405 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 406 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41
# 407 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 408 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 409 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11
# 410 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 411 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 412 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 413 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42
# 414 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 417 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	trainerbattle_no_intro TRAINER_KOHLA_LAB, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43
# 418 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, FALSE
# 419 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8
# 420 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 421 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44
# 422 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 423 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 424 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 425 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 426 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 427 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 428 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45
# 429 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 431 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 432 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 433 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	fadedefaultbgm
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12
# 435 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 436 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 10
# 438 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 439 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 440 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 441 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46
# 442 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 443 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 444 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 445 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47
# 446 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 447 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 448 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 449 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48
# 450 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 451 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	delay 16
# 452 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 453 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49
# 456 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 3
# 457 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_POLICE_PRESCENCE
# 458 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_LAB_CALLTOACTION
# 462 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	startquest QUEST_DREAMSTONE_MYSTERIES
# 463 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_1
# 465 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_NoSupplies_1:
	end


CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric::
# 471 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 472 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Pokeball_One::
# 488 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 490 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2
# 494 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 10, 3
# 495 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GOTHITA, CRY_MODE_NORMAL
# 496 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1, MSGBOX_YESNO
# 497 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5
# 512 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1:
# 516 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 517 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2:
# 491 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5:
# 498 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 4
# 499 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY
# 500 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 501 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8:
# 502 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 503 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2
# 504 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 505 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 506 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 507 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 508 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Two::
# 524 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 526 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2
# 530 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_TIMBURR, 10, 3
# 531 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_TIMBURR, CRY_MODE_NORMAL
# 532 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 533 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5
# 548 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1:
# 552 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 553 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2:
# 527 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5:
# 534 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_TIMBURR, 5, ITEM_ORAN_BERRY
# 535 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 536 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 7
# 537 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8:
# 538 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 539 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1
# 540 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 541 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 542 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 543 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 544 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Three::
# 560 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 562 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2
# 566 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_ZIGZAGOON_GALAR, 10, 3
# 567 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 568 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 569 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5
# 584 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1:
# 588 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 589 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2:
# 563 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5:
# 570 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALAR, 5, ITEM_ORAN_BERRY
# 571 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 572 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 6
# 573 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8:
# 574 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 575 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1
# 576 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 577 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 578 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 579 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 580 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 595 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_POKENAV
# 596 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
	return


NicknameBoxMon::
# 609 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
# 610 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 611 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 614 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 612 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon::
# 620 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 622 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2
# 630 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_LAB_STATE, 1
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4:
# 634 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2:
# 623 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0
# 624 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1
# 625 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 626 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_5:
# 631 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives
	goto CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_4


CarabrueTown_TenebrisLab_EventScript_Rue::
# 640 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	speakername CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 641 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Rue_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Scientist1::
# 647 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_POST_FINALE_CUTSCENE, CarabrueTown_TenebrisLab_EventScript_Scientist1_2
# 652 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_1, MSGBOX_NPC
	end

CarabrueTown_TenebrisLab_EventScript_Scientist1_2:
# 648 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0
	end


CarabrueTown_TenebrisLab_EventScript_Scientist2::
# 657 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_POST_FINALE_CUTSCENE, CarabrueTown_TenebrisLab_EventScript_Scientist2_2
# 662 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_1, MSGBOX_NPC
	end

CarabrueTown_TenebrisLab_EventScript_Scientist2_2:
# 658 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_EventScript_Scientist3::
# 667 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_POST_FINALE_CUTSCENE, CarabrueTown_TenebrisLab_EventScript_Scientist3_2
# 672 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_LAB_CALLTOACTION, CarabrueTown_TenebrisLab_EventScript_Scientist3_5
# 675 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_2, MSGBOX_NPC
CarabrueTown_TenebrisLab_EventScript_Scientist3_4:
	end

CarabrueTown_TenebrisLab_EventScript_Scientist3_2:
# 668 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0, MSGBOX_NPC
	end

CarabrueTown_TenebrisLab_EventScript_Scientist3_5:
# 673 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1, MSGBOX_NPC
	goto CarabrueTown_TenebrisLab_EventScript_Scientist3_4


CarabrueTown_TenebrisLab_Gardevoir::
# 681 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_TENEBRIS_GARDEVOIR, CarabrueTown_TenebrisLab_Gardevoir_2
# 685 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 686 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_1, MSGBOX_NPC
# 687 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 688 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 689 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_2
# 690 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_TENEBRIS_GARDEVOIR
# 691 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
CarabrueTown_TenebrisLab_Gardevoir_1:
	end

CarabrueTown_TenebrisLab_Gardevoir_2:
# 682 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 683 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Gardevoir_Text_0, MSGBOX_NPC
	goto CarabrueTown_TenebrisLab_Gardevoir_1


CarabrueTown_TenebrisLab_Metagross::
# 697 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playmoncry SPECIES_METAGROSS, CRY_MODE_NORMAL
# 698 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_Metagross_Text_0, MSGBOX_NPC
	end


CarabrueTown_TenebrisLab_Tenebris::
# 704 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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

# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_5:
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_6:
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 77 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_7:
# 77 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_left
	step_end

# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_8:
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up_down
	step_end

# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_0:
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
	step_end

# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_1:
# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Movement_2:
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0:
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1:
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2:
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
	step_end

# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3:
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 248 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4:
# 248 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up
	step_end

# 283 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5:
# 283 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6:
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 304 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7:
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 339 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_8:
# 339 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_9:
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_up
# 353 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 379 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_10:
# 379 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	emote_question_mark
	step_end

# 391 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_11:
# 391 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_right
	step_end

# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_12:
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_fast_down
# 434 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
	.string "welcome to the Tenebris Laboratory...\l"
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
# 64 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Standard supplies for a research\n"
	.string "associate! Now as for the evidence bag,\l"
	.string "we'll have to hand that over to the\l"
	.string "police as quickly as possible.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_6:
# 74 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Right, now normally I would brief you on\n"
	.string "your work, but we've got no time.\p"
	.string "So I'm just going to have you start\n"
	.string "working right away, okay?\p"
	.string "We've been running low on supplies and\n"
	.string "the nearest Poké Mart is in Fennilahl\l"
	.string "Town, past Route 1.\p"
	.string "Please go and pick up our shipment\n"
	.string "and bring it back.\p"
	.string "Be careful! There are some important\n"
	.string "things in there.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_7:
# 83 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You'll need a companion Pokémon to\n"
	.string "protect you. Pick up any of the\l"
	.string "Pokéballs lying around the lab.\l"
	.string "If we had our supplies, I could give you\l"
	.string "the standard companion Pokémon,\l"
	.string "but without Professor Tenebris,\l"
	.string "everything's gone haywire here.\p"
	.string "You'll have to make do with what you\n"
	.string "find lying around.\p"
	.string "But once you bring the supplies from\n"
	.string "the Poké Mart, we'll pair you with the\l"
	.string "Pokémon you're meant to be with.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_8:
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Argh! It's all a mess!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_0:
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Wait! I almost forgot!$"

CarabrueTown_TenebrisLab_EventScript_ByTheWayGiveToDetectives_Text_1:
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "On the way, could you give the evidence\n"
	.string "bag you have to the detectives?\l"
	.string "They're waiting by the Route 1 exit.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0:
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Good, you're back. Come here.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1:
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detectives, meet {PLAYER}, our\n"
	.string "newest assistant.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2:
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3:
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We've met already.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4:
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER}, did you get the supplies?\p"
	.string "No?\p"
	.string "What happened?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5:
# 169 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "WHAT?! Professor Tenebris took them?\p"
	.string "Sigh...thanks for telling me, {PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6:
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "But how? When? This is a disaster...\p"
	.string "You see, those supplies contained\n"
	.string "something very precious.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7:
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Have you ever heard of something\n"
	.string "called a dreamstone?\p"
	.string "No?\p"
	.string "Hardly surprising, considering that\n"
	.string "there are only three in all of Cormoria.\n"
	.string "You see...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8:
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Our lab specialises in the research of\n"
	.string "Pokémon psychology - of which the\l"
	.string "Professor was a leading expert, as you\l"
	.string "no doubt know. In particular, a\l"
	.string "Pokémon's sleeping subconscious\l"
	.string "psyche is our field of interest.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9:
# 203 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "This right here is our lab's pride and\n"
	.string "joy - the Dreamalyser. Once powered,\l"
	.string "it'll allow us to study what Pokémon\l"
	.string "undergo while in deep sleep.\l"
	.string "And something like this can't be\l"
	.string "powered using conventional methods.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10:
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Sorry {PLAYER}...I fear that destiny\n"
	.string "has chosen your companion for you.\l"
	.string "But it looks like you two have formed a\l"
	.string "bond already...this may be for the best.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13:
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "If we could get our hands on one of the\n"
	.string "other dreamstones, we might be able to\l"
	.string "understand why the Professor vanished.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14:
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detectives...please. You must find the\n"
	.string "Professor and the dreamstone!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15:
# 245 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Finding her is what we're here for.\n"
	.string "Again, I can't shake the hunch that the\l"
	.string "other dreamstones could give us a clue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16:
# 252 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Whatever you need to do!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17:
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We'll do our best, Rue. But we're\n"
	.string "detectives - we can uncover her tracks,\l"
	.string "but we can't unravel her mind.\l"
	.string "We'll need some help from one of you.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18:
# 260 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "What do you plan to do?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19:
# 264 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "While we track the Professor, one of\n"
	.string "you should find a dreamstone for us to\l"
	.string "examine for clues.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20:
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "But none of us can leave the lab!\n"
	.string "There's too much work.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21:
# 272 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Well...what about the kid?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22:
# 288 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER}? It's too dangerous.\n"
	.string "{PLAYER}'s Pokémon aren't strong\l"
	.string "enough yet.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23:
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "What else do you suggest?\n"
	.string "{PLAYER} is the best we've got.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24:
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Right...yes. You're right.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25:
# 309 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} - I know it's only your first\n"
	.string "day, but this is a critical task, and\l"
	.string "none of us can leave the lab.\p"
	.string "The dreamstones are scattered all\n"
	.string "across Cormoria. Have you ever\l"
	.string "traveled beyond Fennilahl Town?\p"
	.string "Cormoria is vast and filled with\n"
	.string "dangerous Pokémon. I fear you may\l"
	.string "not be up to the task...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26:
# 314 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I don't know how I can help...perhaps\n"
	.string "this may be of use to you.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27:
# 318 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} received a Pokedex from\n"
	.string "Assistant Professor Rue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28:
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "It's a Pokedex. It has information on\n"
	.string "Pokémon you've encountered. You can\l"
	.string "see its moves, how it evolves, and more!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29:
# 332 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Sigh...the Professor missing. The\n"
	.string "dreamstone missing. The lab in shambles.\l"
	.string "My youngest researcher sent off\l"
	.string "on a dangerous journey.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30:
# 336 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I've failed.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31:
# 344 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Get it together, Rue. The other\n"
	.string "researchers are counting on you.\l"
	.string "Have some faith in us...and...\p"
	.string "...well...\p"
	.string "...{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32:
# 351 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Wait right there!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33:
# 360 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Sir, I overheard the whole thing!\n"
	.string "And I protest!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34:
# 367 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You can't give this kid a job like that!\n"
	.string "What's your name?\p"
	.string "{PLAYER}?\p"
	.string "Pshh, whatever. Look at you! Your\n"
	.string "Pokémon look exhausted after a\l"
	.string "single trip to Fennilahl Town!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35:
# 376 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Screw this kid sir! Let ME handle the\n"
	.string "dreamstones!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36:
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Excuse me...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37:
# 388 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Meet Kohla, this year's Ace Rookie\n"
	.string "from the Detective Academy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38:
# 395 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39:
# 396 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Heard that {PLAYER}? ACE. ROOKIE.\n"
	.string "This is serious business. You can't\l"
	.string "handle this. Back off!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40:
# 400 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Now hold on Kohla, there's no need for\n"
	.string "all this. {PLAYER} is representing the\l"
	.string "Professor's lab. We need someone from\l"
	.string "the lab to help track the dreamstones.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41:
# 406 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I can do it sir!\n"
	.string "And I'll prove it right now!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42:
# 413 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "C'mon {PLAYER}, let's see who's a\n"
	.string "better fit for the job!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43:
# 417 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You won't be this lucky next time!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44:
# 421 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Pah! A single battle means nothing!\n"
	.string "You haven't been through what I have.\l"
	.string "It takes effort and discipline to\l"
	.string "become an Ace Rookie. Just you wait -\l"
	.string "I'll be the one to find the dreamstone!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_45:
# 428 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Over and out, sir!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_46:
# 441 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Well Rue, it looks like your assistant's\n"
	.string "got some backbone.\p"
	.string "{PLAYER}, we're counting on you and\n"
	.string "Kohla to get the dreamstone while we\l"
	.string "track Professor Tenebris.\p"
	.string "Rue, do you know anything of the\n"
	.string "whereabouts of the other dreamstones?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_47:
# 445 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One lies somewhere inside Mt. Ceram.\n"
	.string "{PLAYER}, Mt. Ceram is further east\l"
	.string "from Fennilahl Town. You'll have to\l"
	.string "reach Gastree City, and then make your\l"
	.string "way up north towards the mountain.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_48:
# 449 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} - you know what to do. Head\n"
	.string "east to Gastree City. From there, make\l"
	.string "your way to Mt. Ceram and find the\l"
	.string "dreamstone that's there.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_49:
# 453 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'll let your mother know that you've\n"
	.string "been assigned some travel work.\p"
	.string "I wish you all the best.$"

CarabrueTown_TenebrisLab_EventScript_DetectiveGeneric_Text_0:
# 472 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Don't let one victory get to your head.\n"
	.string "Kohla's already got a head start.\l"
	.string "Better hurry if you want to catch up!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0:
# 491 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One of the Lab's Pokémon.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1:
# 496 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Gothita?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2:
# 503 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Laboratory has gifted\n"
	.string "you a Gothita!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0:
# 532 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Timburr?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1:
# 539 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Laboratory has gifted\n"
	.string "you a Timburr!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0:
# 568 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Zigzagoon?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1:
# 575 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Laboratory has gifted\n"
	.string "you a Zigzagoon!$"

NicknamePartyMon_Text_0:
# 595 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You can nickname your Pokémon\n"
	.string "via the summary screen!$"

NicknameBoxMon_Text_0:
# 609 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Give it a nickname?$"

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0:
# 623 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Assistant Professor Rue told me not to\n"
	.string "leave without a Pokémon to protect me!$"

CarabrueTown_TenebrisLab_EventScript_Rue_Text_0:
# 641 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We're counting on you!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0:
# 648 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I can't believe Rue was behind this\n"
	.string "whole mess! I wish I'd caught on sooner!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_1:
# 652 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "There's so much work that I don't even\n"
	.string "know where to start! So I'm just staring\l"
	.string "at all these books instead.$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0:
# 658 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The detectives told us the entire\n"
	.string "story. You're incredible, {PLAYER}!$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_1:
# 662 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm so grateful we have Assistant\n"
	.string "Professor Rue. Without him to step in\l"
	.string "for Professor Tenebris, we'd have had\l"
	.string "to shut the lab down.$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_0:
# 668 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Go on, {PLAYER}! Bring the\n"
	.string "championship trophy to Carabrue Town!$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_1:
# 673 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "A bit unorthodox for a researcher, but\n"
	.string "you and your new partner are looking\l"
	.string "good together!$"

CarabrueTown_TenebrisLab_EventScript_Scientist3_Text_2:
# 675 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry we couldn't offer you the\n"
	.string "standard companion Pokémon.\l"
	.string "But they're coming in the next batch of\l"
	.string "supplies! Just be patient.$"

CarabrueTown_TenebrisLab_Gardevoir_Text_0:
# 683 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Gardevoir regards you intently...$"

CarabrueTown_TenebrisLab_Gardevoir_Text_1:
# 686 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Gardevoir regards you intently...\p"
	.string "Something floats into your hand!$"

CarabrueTown_TenebrisLab_Gardevoir_Text_2:
# 689 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Was this her way of welcoming a\n"
	.string "new member of the lab?\p"
	.string "Thank you, Gardevoir!$"

CarabrueTown_TenebrisLab_Metagross_Text_0:
# 698 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "It's Asst. Prof. Rue's Metagross. It's so\n"
	.string "intimidating!$"

CarabrueTown_TenebrisLab_Tenebris_Text_0:
# 704 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Tenebris$"

CarabrueTown_TenebrisLab_Tenebris_Text_1:
# 704 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Go {PLAYER} go!$"
