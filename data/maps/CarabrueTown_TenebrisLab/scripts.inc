CarabrueTown_TenebrisLab_MapScripts::
# 5 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CarabrueTown_TenebrisLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CarabrueTown_TenebrisLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	map_script_2 VAR_LAB_STATE, 0, CarabrueTown_TenebrisLab_EventScript_Start
# 7 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	map_script_2 VAR_LAB_STATE, 1, CarabrueTown_TenebrisLab_EventScript_NoSupplies
	.2byte 0


CarabrueTown_TenebrisLab_EventScript_Start::
# 13 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 14 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_0
# 15 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 18 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 20 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_1
# 21 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 22 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 23 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 25 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 28 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 29 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 31 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_REAL_PACKAGE_GET
# 32 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 33 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POTION, 1
# 34 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 5
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_3
# 37 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 40 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 42 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 43 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 45 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_4
# 46 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 48 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_5
# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 51 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_5
# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_6
# 55 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 57 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_6
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 61 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 62 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_7
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 65 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 1
# 66 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_NoSupplies::
# 77 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_FENNILAHL_MART_SUPPLIES, 0
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_NoSupplies_2
# 81 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 84 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 10
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0
# 87 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 89 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 90 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 92 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1
# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 95 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 96 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 100 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4
# 102 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 104 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_7
# 105 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 110 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6
# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 113 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 115 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 121 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8
# 123 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 126 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9
# 128 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 130 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 131 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 132 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 133 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 134 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_11
# 136 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12
# 137 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13
# 138 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3
# 141 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 142 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 143 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 144 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 145 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 146 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 147 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17
# 153 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20
# 156 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21
# 157 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 9, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 8, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 169 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 171 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25
# 172 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27
# 174 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 176 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitfanfare
# 179 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29
# 182 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 189 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32
# 192 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33
# 196 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	addobject 10
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 202 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34
# 203 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 205 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35
# 209 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 210 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37
# 213 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38
# 215 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 216 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41
# 223 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 10, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42
# 228 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_SANA, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 2
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_NoSupplies_2:
	end


CarabrueTown_TenebrisLab_EventScript_Pokeball_One::
# 247 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 249 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_RIOLU, 10, 3
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1, MSGBOX_YESNO
# 255 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5
# 268 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1:
# 272 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 273 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2:
# 250 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5:
# 256 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 4
# 257 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_RIOLU, 5, ITEM_POKE_BALL
# 258 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 259 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8:
# 260 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 263 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 264 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Two::
# 280 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 282 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2
# 286 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_ROCKRUFF, 10, 3
# 287 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 288 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5
# 301 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1:
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 306 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2:
# 283 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5:
# 289 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_ROCKRUFF, 5, ITEM_POKE_BALL
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 7
# 292 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8:
# 293 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 294 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1
# 295 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 297 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Three::
# 313 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 315 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2
# 319 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_RUFFLET, 10, 3
# 320 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 321 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5
# 334 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1:
# 338 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 339 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2:
# 316 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5:
# 322 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_RUFFLET, 5, ITEM_POKE_BALL
# 323 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 324 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 6
# 325 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8:
# 326 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 327 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1
# 328 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 329 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 330 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 346 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 347 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 348 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 349 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 350 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 357 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 358 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 359 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 362 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 360 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon::
# 368 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 370 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_1:
# 376 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2:
# 371 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0
# 372 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0
# 373 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
	goto CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_1


CarabrueTown_TenebrisLab_EventScript_Rue::
# 382 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 383 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Rue_Text_0
# 385 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 386 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist1::
# 391 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 392 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 393 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0
# 394 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist2::
# 398 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 399 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 400 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0
# 401 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_0:
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 22 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_1:
# 22 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 22 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 22 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 28 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_2:
# 28 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 28 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_3:
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 42 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_4:
# 42 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
	step_end

# 48 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_5:
# 48 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_left
	step_end

# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_6:
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up_down
	step_end

# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_7:
# 60 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0:
# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1:
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2:
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
	step_end

# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3:
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 140 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_4:
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_5:
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 184 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_6:
# 186 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_7:
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 372 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0:
# 372 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

CarabrueTown_TenebrisLab_EventScript_Start_Text_0:
# 14 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Ah! There you are! Finally.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_1:
# 20 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm Assistant Professor Rue and\n"
	.string "welcome to Tenebris Lab...\l"
	.string "er..{PLAYER}, was it?$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_2:
# 25 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Standard supplies for a research\n"
	.string "associate! Now as for the evidence bag,\l"
	.string "we'll have to hand that over to the\l"
	.string "police as quickly as possible.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_4:
# 45 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 51 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "And on the way, could you give the\n"
	.string "evidence bag you have to the police?\l"
	.string "They're waiting at the edge of town.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_6:
# 57 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 62 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Argh! It's all a mess!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0:
# 86 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Good, you're back. Come here.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1:
# 92 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: As you can see, we have visitors.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2:
# 96 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Detectives, meet our newest\n"
	.string "assistant.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3:
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: We've met already. Thanks\n"
	.string "again for the evidence, kid.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4:
# 101 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Have you got the supplies? No?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5:
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: WHAT?! Professor Tenebris took\n"
	.string "them? But how? When? Oh no...this is a\l"
	.string "disaster. You see, those supplies\l"
	.string "contained something very precious.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6:
# 110 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Have you heard of dreamstones?\n"
	.string "No? Hardly surprising, considering that\l"
	.string "there are only three in all of Cormoria.\l"
	.string "You see...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7:
# 115 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Our lab specialises in the research\n"
	.string "of Pokemon psychology - of which the\l"
	.string "Professor was a leading expert, as you\l"
	.string "no doubt know. In particular, the\l"
	.string "subconscious operations within the\l"
	.string "psyche of Pokemon while sleeping is our\l"
	.string "field of interest.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8:
# 122 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 127 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 134 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
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
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I'm sorry {PLAYER}...I fear that\n"
	.string "destiny has chosen your companion for\l"
	.string "you. But it looks like you two have\l"
	.string "formed a bond already...maybe this is\l"
	.string "for the best after all.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_12:
# 136 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective: If we could get our hands on\n"
	.string "one of the other dreamstones, we might\l"
	.string "be able to understand why the\l"
	.string "Professor vanished.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_13:
# 137 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Maybe...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_14:
# 149 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Detectives...please. You must find\n"
	.string "the Professor!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_15:
# 150 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Finding him is what we're\n"
	.string "here for. Again, I can't shake the hunch\l"
	.string "that the other dreamstones could\l"
	.string "provide us with a clue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_16:
# 151 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Whatever you need to do!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_17:
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: We'll do our best, Rue. But\n"
	.string "we're detectives, not researchers. We\l"
	.string "can uncover his tracks, but we can't\l"
	.string "unravel his mind. We'll need some help\l"
	.string "from one of you.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_18:
# 153 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Anything. What do you plan to do?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_19:
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: A two-pronged strategy -\n"
	.string "while we track the Professor, we want\l"
	.string "one of you to go and retrieve one of\l"
	.string "the other dreamstones for us to\l"
	.string "examine for clues.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_20:
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: But none of us can leave the lab!\n"
	.string "There's too much work.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_21:
# 156 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Well...there is one who\n"
	.string "can...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_22:
# 157 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: {PLAYER}? It's too dangerous.\n"
	.string "{PLAYER}'s Pokemon aren't strong\l"
	.string "enough yet.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_23:
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: What else do you suggest?\n"
	.string "Perhaps not ideal, but {PLAYER} is the\l"
	.string "best we've got right now.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_24:
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Right...yes. You're right.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_25:
# 171 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} - I know it's only your first\n"
	.string "day, but finding Professor Tenebris is\l"
	.string "the most important thing right now. And\l"
	.string "none of us can leave the lab.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_26:
# 172 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: The three dreamstones are\n"
	.string "scattered all across Cormoria. Have you\l"
	.string "ever traveled beyond Fennilahl Town?\l"
	.string "Cormoria is vast. Very vast. Dangerous\l"
	.string "Pokemon have made the mountains,\l"
	.string "forests and seas their territory. It\l"
	.string "won't be easy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_27:
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I don't know how I can\n"
	.string "help...perhaps this may be of use,\l"
	.string "{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_28:
# 177 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "{PLAYER} received a Pokedex from\n"
	.string "Assistant Professor Rue.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_29:
# 181 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: A Pokedex. It contains information\n"
	.string "on Pokemon you've encountered. And it\l"
	.string "can store more if you catch them.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_30:
# 189 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Sigh...the Professor missing. The\n"
	.string "dreamstone missing. The lab in shambles.\l"
	.string "My youngest researcher sent off on a\l"
	.string "dangerous journey.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_31:
# 190 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: I've failed.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_32:
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Get it together, Rue. You\n"
	.string "still have work to do. The other\l"
	.string "researchers are counting on you. Have\l"
	.string "some faith in us...and...well...{PLAYER}.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_33:
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Wait right there!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_34:
# 202 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Sir, I overheard the whole thing!\n"
	.string "And I protest!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_35:
# 207 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: You can't give this kid a job like\n"
	.string "that! What's your name? {PLAYER}?\l"
	.string "Pshh, whatever. Look at you! Your\l"
	.string "Pokemon look exhausted after a single\l"
	.string "trip to Fennilahl Town!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_36:
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "???: Screw this kid sir! Let ME handle\n"
	.string "the dreamstones!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_37:
# 212 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Excuse me...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_38:
# 213 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Meet Kohla, this years ace\n"
	.string "rookie from the Detective Academy.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_39:
# 217 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla: Heard that {PLAYER}? ACE.\n"
	.string "ROOKIE. This is serious business. You\l"
	.string "can't handle this. Back off!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_40:
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: Now hold on Zohra, there's\n"
	.string "no need for all this. {PLAYER} is\l"
	.string "representing the Professor's lab. We\l"
	.string "needed someone from the lab to help us\l"
	.string "track the dreamstones.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_41:
# 222 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Kohla: I can do it sir! And I'll prove it\n"
	.string "right now!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_42:
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "C'mon {PLAYER}, let's see who's a\n"
	.string "better fit for the job!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_43:
# 228 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Get ready to burn!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_44:
# 228 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You won't be this lucky next time, {PLAYER}!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0:
# 250 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One of the Lab's Pokemon.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1:
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Riolu?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2:
# 261 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a Riolu!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0:
# 287 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Rockruff?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1:
# 294 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a\n"
	.string "Rockruff!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0:
# 320 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Rufflet?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1:
# 327 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a\n"
	.string "Rufflet!$"

NicknamePartyMon_Text_0:
# 346 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Give it a nickname?$"

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0:
# 371 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Assistant Professor Rue told me not to\n"
	.string "leave without a Pokemon to protect me!$"

CarabrueTown_TenebrisLab_EventScript_Rue_Text_0:
# 384 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We're counting on you!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0:
# 393 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "There's so much work that I don't even\n"
	.string "know where to start!$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0:
# 400 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm so grateful we have Assistant\n"
	.string "Professor Rue. Without him to step in\l"
	.string "for Professor Tenebris, we'd have had\l"
	.string "to shut the lab down.$"
