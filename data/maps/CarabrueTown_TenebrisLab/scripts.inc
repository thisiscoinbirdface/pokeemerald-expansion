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
# 17 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 20 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 22 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_1
# 26 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_2
# 30 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 31 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 33 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 34 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	giveitem ITEM_POTION, 1
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_2
# 37 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 40 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 42 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_3
# 47 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_4
# 50 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 52 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_4
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_5
# 59 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 3
# 61 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Start_Text_5
# 67 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 1
# 68 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_NoSupplies::
# 79 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_FENNILAHL_MART_SUPPLIES, 0
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_NoSupplies_2
# 83 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 84 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0
# 85 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 87 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_0
# 88 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 90 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1
# 92 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 93 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2
# 95 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 98 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4
# 100 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 102 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2
# 103 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 104 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5
# 106 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 107 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6
# 109 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 111 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 112 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 113 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7
# 114 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3
# 117 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 118 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_Start_Movement_3
# 119 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8
# 121 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 123 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0
# 124 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9
# 126 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 128 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_Start_Movement_1
# 129 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 130 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 131 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
# 132 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10
# 133 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	release
# 135 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setvar VAR_LAB_STATE, 2
# 136 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return

CarabrueTown_TenebrisLab_EventScript_NoSupplies_2:
	end


CarabrueTown_TenebrisLab_EventScript_Pokeball_One::
# 152 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 154 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2
# 158 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_RIOLU, 10, 3
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1, MSGBOX_YESNO
# 160 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5
# 173 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1:
# 177 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 178 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_2:
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_5:
# 161 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 4
# 162 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_RIOLU, 5, ITEM_POKE_BALL
# 163 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 164 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_8:
# 165 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2
# 167 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 168 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 169 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_One_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Two::
# 185 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 187 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2
# 191 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_ROCKRUFF, 10, 3
# 192 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 193 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5
# 206 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1:
# 210 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 211 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_2:
# 188 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_5:
# 194 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_ROCKRUFF, 5, ITEM_POKE_BALL
# 195 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 196 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 7
# 197 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_8:
# 198 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1
# 200 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 201 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 202 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_1


CarabrueTown_TenebrisLab_EventScript_Pokeball_Three::
# 218 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 220 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2
# 224 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	showmonpic SPECIES_RUFFLET, 10, 3
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 226 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5
# 239 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1:
# 243 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmessage
# 244 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_2:
# 221 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_5:
# 227 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	givemon SPECIES_RUFFLET, 5, ITEM_POKE_BALL
# 228 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 229 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 6
# 230 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_8:
# 231 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1
# 233 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	removeobject 1
# 234 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 235 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call NicknamePartyMon
	goto CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 251 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 252 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 253 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 254 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 255 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 262 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 263 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	hidemonpic
# 264 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 267 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 265 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon::
# 273 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 275 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_1:
# 281 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	end

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_2:
# 276 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0
# 277 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0
# 278 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	waitmovement 0
	goto CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_1


CarabrueTown_TenebrisLab_EventScript_Rue::
# 289 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 290 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	faceplayer
# 291 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Rue_Text_0
# 296 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	applymovement 3, CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1
# 297 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist1::
# 302 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 303 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0
# 308 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


CarabrueTown_TenebrisLab_EventScript_Scientist2::
# 312 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	lockall
# 313 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	msgbox CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0
# 318 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	releaseall
	return


# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_0:
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
# 19 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

# 30 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_1:
# 30 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 30 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
	step_end

# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_2:
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 36 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_3:
# 39 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
	step_end

# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_4:
# 49 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_left
	step_end

# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_Start_Movement_5:
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_right
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_up
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
# 58 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_up_down
	step_end

# 92 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_0:
# 92 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_left
	step_end

# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_1:
# 97 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	face_down
	step_end

# 102 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_2:
# 102 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	jump_in_place_down
	step_end

# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_NoSupplies_Movement_3:
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_left
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_down
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
# 116 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_right
	step_end

# 277 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Movement_0:
# 277 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	walk_up
	step_end

CarabrueTown_TenebrisLab_EventScript_Start_Text_0:
# 15 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Ah! There you are! Finally.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_1:
# 23 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm Assistant Professor Rue and\n"
	.string "welcome to Tenebris Lab... er...what was\l"
	.string "your name again?$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_2:
# 27 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm sorry for the mess...we're scrambling\n"
	.string "to get things done, what with the\l"
	.string "Professor gone missing and everything.\l"
	.string "Did you bring your welcome package?\l"
	.string "Yes? Oh thank god! You see, we sent you\l"
	.string "the wrong package. This bag next to me\l"
	.string "has your welcome package, and the one\l"
	.string "we sent you is the evidence bag for the\l"
	.string "police! Go on - pick it up and open it.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_3:
# 44 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Normally I would brief you on your work,\n"
	.string "but we've got no time. So I'm just going\l"
	.string "to have you start working right away.\l"
	.string "We've been running low on supplies and\l"
	.string "the nearest Pokemart is in Fennilahl\l"
	.string "Town, past Route 1. Please go and pick\l"
	.string "up our shipment and bring it back.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_4:
# 54 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "And on the way, could you give the\n"
	.string "evidence bag you have to the police?\l"
	.string "They're waiting at the edge of town.$"

CarabrueTown_TenebrisLab_EventScript_Start_Text_5:
# 63 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "You'll need a companion Pokemon to\n"
	.string "protect you. Pick up any of the\l"
	.string "Pokeballs lying around the lab. If we\l"
	.string "had our supplies, I could give you the\l"
	.string "standard companion Pokemon, but\l"
	.string "without Professor Tenebris,\l"
	.string "everything's gone haywire here. You'll\l"
	.string "have to make do with what you find here.\l"
	.string "Argh! It's all a mess!$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_0:
# 84 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Good, you're back. Come here.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_1:
# 90 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: As you can see, we have visitors.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_2:
# 94 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Detectives, meet our newest\n"
	.string "assistant.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_3:
# 95 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Detective 1: We've met already. Thanks\n"
	.string "again for the evidence, kid.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_4:
# 99 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Rue: Have you got the supplies? No?$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_5:
# 104 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "WHAT?! Professor Tenebris took them?\n"
	.string "But how? When? Oh no...this is a\l"
	.string "disaster. You see, those supplies\l"
	.string "contained something very precious.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_6:
# 108 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Have you heard dreamstones? No? Hardly\n"
	.string "surprising. They're not very well known.\l"
	.string "You see...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_7:
# 113 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Our lab specialises in the research of\n"
	.string "Pokemon psychology - of which the\l"
	.string "Professor was a leading expert, as you\l"
	.string "no doubt know. In particular, the\l"
	.string "subconscious operations within the\l"
	.string "psyche of Pokemon while sleeping is our\l"
	.string "field of interest.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_8:
# 120 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "This baby right here is our lab's pride\n"
	.string "and joy. It allows us to study the\l"
	.string "fluctuations in power and energy that\l"
	.string "Pokemon undergo while in deep sleep.\l"
	.string "The Professor built every single piece\l"
	.string "of this by hand. And something like this\l"
	.string "can't be powered using conventional\l"
	.string "energy methods.$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_9:
# 125 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "No...this thing needs something far more\n"
	.string "potent. We use dreamstones to power it.\l"
	.string "Put simply - dreamstones are powerful\l"
	.string "reserves of energy in solidified form.\l"
	.string "They're rare. Rare and valuable. So rare\l"
	.string "that none of you know about it. So\l"
	.string "valuable that people would pay a\l"
	.string "fortune to obtain one. And in the wrong\l"
	.string "hands...$"

CarabrueTown_TenebrisLab_EventScript_NoSupplies_Text_10:
# 132 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "And this time we were supposed to\n"
	.string "receive two things in our supplies -\l"
	.string "your real companion Pokemon...and one\l"
	.string "dreamstone. If the Professor has it,\l"
	.string "he's painted a target on his back! Oh,\l"
	.string "why did he leave? What on earth was he\l"
	.string "thinking!?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_0:
# 155 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "One of the Lab's Pokemon.$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_1:
# 159 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Riolu?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_One_Text_2:
# 166 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a Riolu!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_0:
# 192 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Rockruff?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Two_Text_1:
# 199 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a\n"
	.string "Rockruff!$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_0:
# 225 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Do you want to choose Rufflet?$"

CarabrueTown_TenebrisLab_EventScript_Pokeball_Three_Text_1:
# 232 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "The Tenebris Lab has gifted you a\n"
	.string "Rufflet!$"

NicknamePartyMon_Text_0:
# 251 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Give it a nickname?$"

CarabrueTown_TenebrisLab_EventScript_LeaveWithoutPokemon_Text_0:
# 276 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "Assistant Professor Rue told me not to\n"
	.string "leave without a Pokemon to protect me!$"

CarabrueTown_TenebrisLab_EventScript_Rue_Text_0:
# 293 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "We're counting on you!$"

CarabrueTown_TenebrisLab_EventScript_Scientist1_Text_0:
# 305 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "There's so much work that I don't even\n"
	.string "know where to start!$"

CarabrueTown_TenebrisLab_EventScript_Scientist2_Text_0:
# 315 "data//maps/CarabrueTown_TenebrisLab/scripts.pory"
	.string "I'm so grateful we have Assistant\n"
	.string "Professor Rue. Without him to step in\l"
	.string "for Professor Tenebris, we'd have had\l"
	.string "to shut the lab down.$"
