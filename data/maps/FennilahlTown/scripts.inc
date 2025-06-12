# 1 "data//maps/FennilahlTown/scripts.pory"

# 2 "data//maps/FennilahlTown/scripts.pory"
    .set LOCALID_BREECH, 4
# 3 "data//maps/FennilahlTown/scripts.pory"
    .set LOCALID_CLEF, 8
# 4 "data//maps/FennilahlTown/scripts.pory"
    .set LOCALID_BUDEW, 7

FennilahlTown_MapScripts::
# 8 "data//maps/FennilahlTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FennilahlTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FennilahlTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_VISITED_FENNILAHL_TOWN
	return


FennilahlTown_EventScript_MartEmployeeRoadBlock::
# 14 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0, MSGBOX_NPC
	end


FennilahlTown_EventScript_Man::
# 19 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Man_Text_0, MSGBOX_NPC
	end


FennilahlTown_EventScript_Woman::
# 24 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_CUTEMONGIFT, FennilahlTown_EventScript_Woman_2
# 27 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 28 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 29 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_1
# 30 "data//maps/FennilahlTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 31 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_CUTEMONGIFT
# 32 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0, MSGBOX_NPC
FennilahlTown_EventScript_Woman_1:
	end

FennilahlTown_EventScript_Woman_2:
# 25 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0, MSGBOX_NPC
	goto FennilahlTown_EventScript_Woman_1


FennilahlTown_EventScript_HikerTunnel::
# 38 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 39 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 41 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_active QUEST_FENNILAHL_HIKER, Fennilahl_Breech_QuestInProgress
# 42 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_inactive QUEST_FENNILAHL_HIKER, Fennilahl_Breech_StartQuest
# 44 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end


Fennilahl_Breech_StartQuest::
# 50 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 51 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_1, MSGBOX_YESNO
# 53 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Fennilahl_Breech_StartQuest_2
# 59 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 60 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_3
Fennilahl_Breech_StartQuest_1:
# 63 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_StartQuest_2:
# 54 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 55 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_2
# 57 "data//maps/FennilahlTown/scripts.pory"
	startquest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_StartQuest_1


Fennilahl_Breech_QuestInProgress::
# 69 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Fennilahl_Breech_QuestInProgress_2
# 120 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 121 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_8
Fennilahl_Breech_QuestInProgress_1:
# 123 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 70 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 71 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 72 "data//maps/FennilahlTown/scripts.pory"
	release
# 73 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 74 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_0
# 75 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_0
# 76 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 77 "data//maps/FennilahlTown/scripts.pory"
	setobjectxyperm LOCALID_CLEF, 25, 15
# 78 "data//maps/FennilahlTown/scripts.pory"
	addobject LOCALID_CLEF
# 79 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_CLEF, Fennilahl_Breech_QuestInProgress_Movement_1
# 80 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 81 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 82 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_QuestInProgress_Text_1
# 83 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 84 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 85 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_2
# 86 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_3
# 87 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 88 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 89 "data//maps/FennilahlTown/scripts.pory"
	release
# 90 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 91 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 92 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_CLEF, Fennilahl_Breech_QuestInProgress_Movement_4
# 93 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 94 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_QuestInProgress_Text_1
# 95 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 96 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 97 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
# 98 "data//maps/FennilahlTown/scripts.pory"
	release
# 99 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_5
# 100 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 101 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_6
# 102 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 103 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 105 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_QuestInProgress_Text_6
# 106 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_7
# 107 "data//maps/FennilahlTown/scripts.pory"
	release
# 109 "data//maps/FennilahlTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 110 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_CLEF
# 111 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BREECH
# 112 "data//maps/FennilahlTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 114 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 115 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 118 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Budew::
# 144 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 146 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 2
	goto_if_eq FennilahlTown_Budew_2
FennilahlTown_Budew_1:
# 150 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 1
	goto_if_eq FennilahlTown_Budew_5
FennilahlTown_Budew_4:
# 154 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 0
	goto_if_eq FennilahlTown_Budew_8
FennilahlTown_Budew_7:
# 159 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_2:
# 147 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_ThirdBerry
	goto FennilahlTown_Budew_1

FennilahlTown_Budew_5:
# 151 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_SecondBerry
	goto FennilahlTown_Budew_4

FennilahlTown_Budew_8:
# 155 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_FirstBerry
	goto FennilahlTown_Budew_7


FennilahlTown_Budew_FirstBerry::
# 165 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 166 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_FirstBerry_Movement_0
# 167 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 168 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_0
# 169 "data//maps/FennilahlTown/scripts.pory"
	release
# 171 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 172 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_2
# 193 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_FirstBerry_1:
# 196 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_FirstBerry_2:
# 173 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_1, MSGBOX_YESNO
# 174 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_5
# 189 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 190 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_FirstBerry_1

FennilahlTown_Budew_FirstBerry_5:
# 175 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_ORAN_BERRY
# 176 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 177 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 178 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 179 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_2, MSGBOX_SIGN
# 180 "data//maps/FennilahlTown/scripts.pory"
	release
# 181 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_FirstBerry_Movement_0
# 182 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 183 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 184 "data//maps/FennilahlTown/scripts.pory"
	release
# 186 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 1
	goto FennilahlTown_Budew_FirstBerry_1


FennilahlTown_Budew_SecondBerry::
# 202 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 203 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_SecondBerry_Movement_0
# 204 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 205 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_0
# 206 "data//maps/FennilahlTown/scripts.pory"
	release
# 208 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 209 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_2
# 230 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_SecondBerry_1:
# 233 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_SecondBerry_2:
# 210 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_1, MSGBOX_YESNO
# 211 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_5
# 226 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 227 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_SecondBerry_1

FennilahlTown_Budew_SecondBerry_5:
# 212 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_PECHA_BERRY
# 213 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 214 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 215 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 216 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_2, MSGBOX_SIGN
# 217 "data//maps/FennilahlTown/scripts.pory"
	release
# 218 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_SecondBerry_Movement_0
# 219 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 220 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 221 "data//maps/FennilahlTown/scripts.pory"
	release
# 223 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 2
	goto FennilahlTown_Budew_SecondBerry_1


FennilahlTown_Budew_ThirdBerry::
# 239 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 240 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_0
# 241 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 242 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_0
# 243 "data//maps/FennilahlTown/scripts.pory"
	release
# 245 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 246 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_2
# 269 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_ThirdBerry_1:
# 272 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_ThirdBerry_2:
# 247 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_1, MSGBOX_YESNO
# 248 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_5
# 265 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 266 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_ThirdBerry_1

FennilahlTown_Budew_ThirdBerry_5:
# 249 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 250 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 251 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 252 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 253 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_2, MSGBOX_SIGN
# 254 "data//maps/FennilahlTown/scripts.pory"
	release
# 255 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_ThirdBerry_Movement_1
# 256 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 257 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 258 "data//maps/FennilahlTown/scripts.pory"
	release
# 260 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 3
# 262 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_JoinParty
	goto FennilahlTown_Budew_ThirdBerry_1


FennilahlTown_Budew_JoinParty::
# 277 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_JoinParty_Movement_0
# 278 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 279 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 280 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_0
# 281 "data//maps/FennilahlTown/scripts.pory"
	release
# 282 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 283 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_1, MSGBOX_YESNO
# 284 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_JoinParty_2
# 290 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_JoinParty_Movement_1
# 291 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BUDEW
# 292 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_3
# 293 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_JoinParty_1:
# 296 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_BUDEW_GET
# 297 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 4
# 298 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_JoinParty_2:
# 285 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BUDEW
# 286 "data//maps/FennilahlTown/scripts.pory"
	givemon SPECIES_BUDEW, 5
# 287 "data//maps/FennilahlTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 288 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_2
	goto FennilahlTown_Budew_JoinParty_1


# 74 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 74 "data//maps/FennilahlTown/scripts.pory"
	face_down
# 74 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 79 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_1:
# 79 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 79 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 79 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 79 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 79 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 79 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
	step_end

# 85 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_2:
# 85 "data//maps/FennilahlTown/scripts.pory"
	face_left
	step_end

# 86 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_3:
# 86 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
# 86 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 92 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_4:
# 92 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 92 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 92 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 99 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_5:
# 99 "data//maps/FennilahlTown/scripts.pory"
	face_up
	step_end

# 101 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_6:
# 101 "data//maps/FennilahlTown/scripts.pory"
	face_down
	step_end

# 166 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_0:
# 166 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 166 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 166 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 203 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_0:
# 203 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 203 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 240 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_0:
# 240 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 255 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_1:
# 255 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 277 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_0:
# 277 "data//maps/FennilahlTown/scripts.pory"
	emote_question_mark
	step_end

# 290 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_1:
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 290 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
	step_end

FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0:
# 14 "data//maps/FennilahlTown/scripts.pory"
	.string "I'm the chauffeur for the detectives in\n"
	.string "charge of the Tenebris disappearance.\l"
	.string "They're in Carabrue Town right now\l"
	.string "speaking to the lab staff.$"

FennilahlTown_EventScript_Man_Text_0:
# 19 "data//maps/FennilahlTown/scripts.pory"
	.string "I was watching the news the other day.\n"
	.string "They say that the Pokémon\l"
	.string "Psychologist has gone missing.\p"
	.string "Who?\p"
	.string "Professor Tenebris of course!$"

FennilahlTown_EventScript_Woman_Text_0:
# 25 "data//maps/FennilahlTown/scripts.pory"
	.string "If your Pokémon hold a Soothe Bell,\n"
	.string "they'll become attached to you faster!$"

FennilahlTown_EventScript_Woman_Text_1:
# 29 "data//maps/FennilahlTown/scripts.pory"
	.string "My, that's such a cute little Pokémon\n"
	.string "you have with you! Here, use this and\l"
	.string "treat it with care, okay?$"

Fennilahl_Breech_StartQuest_Text_0:
# 50 "data//maps/FennilahlTown/scripts.pory"
	.string "???$"

Fennilahl_Breech_StartQuest_Text_1:
# 51 "data//maps/FennilahlTown/scripts.pory"
	.string "I found a Strange Rock in the caves\n"
	.string "south of town, but a small pink Pokémon\l"
	.string "took it and ran away! And I don't have\l"
	.string "any Pokémon to help me get it back!\p"
	.string "I don't want to battle - I can't deal\n"
	.string "with conflict.\p"
	.string "I don't know what to do!\n"
	.string "Will you help me get my rock back?$"

Fennilahl_Breech_StartQuest_Text_2:
# 55 "data//maps/FennilahlTown/scripts.pory"
	.string "Amazing! You've answered my prayers.\n"
	.string "I saw the pink Pokémon run south,\l"
	.string "towards Route 2. I really liked that\l"
	.string "Strange Rock! Please bring it back.$"

Fennilahl_Breech_StartQuest_Text_3:
# 60 "data//maps/FennilahlTown/scripts.pory"
	.string "Oh, what will I do!$"

Fennilahl_Breech_QuestInProgress_Text_0:
# 71 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my Strange Rock? Amazing!\n"
	.string "How can I thank you for this?\p"
	.string "...\p"
	.string "A Clefairy had it? Where'd it go?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 82 "data//maps/FennilahlTown/scripts.pory"
	.string "Clefairy$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 83 "data//maps/FennilahlTown/scripts.pory"
	.string "Clee!!!!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 88 "data//maps/FennilahlTown/scripts.pory"
	.string "This is the Clefairy? It must've been\n"
	.string "following you around because it can't\l"
	.string "let go of the rock!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 95 "data//maps/FennilahlTown/scripts.pory"
	.string "Clee!!!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 97 "data//maps/FennilahlTown/scripts.pory"
	.string "Ouch! Clefairy stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my Pokémon okay?\l"
	.string "You'll be my hiking partner!$"

Fennilahl_Breech_QuestInProgress_Text_6:
# 105 "data//maps/FennilahlTown/scripts.pory"
	.string "Breech$"

Fennilahl_Breech_QuestInProgress_Text_7:
# 106 "data//maps/FennilahlTown/scripts.pory"
	.string "Thank you trainer! My name is Breech.\n"
	.string "I'm just a simple man who loves\l"
	.string "collecting rocks. Even with Clefairy by\l"
	.string "my side, I won't battle. Clefairy and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_8:
# 121 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Budew_FirstBerry_Text_0:
# 168 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew seems to want something...$"

FennilahlTown_Budew_FirstBerry_Text_1:
# 173 "data//maps/FennilahlTown/scripts.pory"
	.string "Give Budew an Oran Berry?$"

FennilahlTown_Budew_FirstBerry_Text_2:
# 179 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave Budew an Oran Berry.$"

FennilahlTown_Budew_FirstBerry_Text_3:
# 183 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew seems happy!$"

FennilahlTown_Budew_FirstBerry_Text_4:
# 189 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew seems disappointed...$"

FennilahlTown_Budew_SecondBerry_Text_0:
# 205 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew seems to want something\n"
	.string "again...but not an Oran Berry.$"

FennilahlTown_Budew_SecondBerry_Text_1:
# 210 "data//maps/FennilahlTown/scripts.pory"
	.string "Give Budew a Pecha Berry?$"

FennilahlTown_Budew_SecondBerry_Text_2:
# 216 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave Budew a Pecha Berry.$"

FennilahlTown_Budew_ThirdBerry_Text_0:
# 242 "data//maps/FennilahlTown/scripts.pory"
	.string "What could Budew want now?$"

FennilahlTown_Budew_ThirdBerry_Text_1:
# 247 "data//maps/FennilahlTown/scripts.pory"
	.string "Give Budew a Rawst Berry?$"

FennilahlTown_Budew_ThirdBerry_Text_2:
# 253 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave Budew a Rawst Berry.$"

FennilahlTown_Budew_JoinParty_Text_0:
# 280 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew is looking at the Poké Balls on\n"
	.string "your belt curiously...$"

FennilahlTown_Budew_JoinParty_Text_1:
# 283 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew nudges you gently...\n"
	.string "It seems to want to join your party!\p"
	.string "Will you become Budew's trainer?$"

FennilahlTown_Budew_JoinParty_Text_2:
# 288 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew has joined your party!\p"
	.string "Welcome, Budew! Let's get along well\n"
	.string "together!$"

FennilahlTown_Budew_JoinParty_Text_3:
# 292 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew ran off...$"
