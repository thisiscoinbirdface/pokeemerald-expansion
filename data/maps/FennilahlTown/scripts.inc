# 1 "data//maps/FennilahlTown/scripts.pory"

# 2 "data//maps/FennilahlTown/scripts.pory"
    .set LOCALID_BREECH, 4
# 3 "data//maps/FennilahlTown/scripts.pory"
    .set LOCALID_CLEF, 8
# 4 "data//maps/FennilahlTown/scripts.pory"
    .set LOCALID_BUDEW, 7

FennilahlTown_MapScripts::
	.byte 0


FennilahlTown_EventScript_MartEmployeeRoadBlock::
# 10 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0, MSGBOX_NPC
	end


FennilahlTown_EventScript_Man::
# 15 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Man_Text_0, MSGBOX_NPC
	end


FennilahlTown_EventScript_Woman::
# 20 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_CUTEMONGIFT, FennilahlTown_EventScript_Woman_2
# 23 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 24 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 25 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_1
# 26 "data//maps/FennilahlTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 27 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_CUTEMONGIFT
# 28 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0, MSGBOX_NPC
FennilahlTown_EventScript_Woman_1:
	end

FennilahlTown_EventScript_Woman_2:
# 21 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0, MSGBOX_NPC
	goto FennilahlTown_EventScript_Woman_1


FennilahlTown_EventScript_HikerTunnel::
# 34 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 35 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 37 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_active QUEST_FENNILAHL_HIKER, Fennilahl_Breech_QuestInProgress
# 38 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_inactive QUEST_FENNILAHL_HIKER, Fennilahl_Breech_StartQuest
# 40 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end


Fennilahl_Breech_StartQuest::
# 46 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 47 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_1, MSGBOX_YESNO
# 49 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Fennilahl_Breech_StartQuest_2
# 55 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 56 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_3
Fennilahl_Breech_StartQuest_1:
# 59 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_StartQuest_2:
# 50 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 51 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_2
# 53 "data//maps/FennilahlTown/scripts.pory"
	startquest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_StartQuest_1


Fennilahl_Breech_QuestInProgress::
# 65 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Fennilahl_Breech_QuestInProgress_2
# 116 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 117 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_8
Fennilahl_Breech_QuestInProgress_1:
# 119 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 66 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 67 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 68 "data//maps/FennilahlTown/scripts.pory"
	release
# 69 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 70 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_0
# 71 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_0
# 72 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 73 "data//maps/FennilahlTown/scripts.pory"
	setobjectxyperm LOCALID_CLEF, 25, 15
# 74 "data//maps/FennilahlTown/scripts.pory"
	addobject LOCALID_CLEF
# 75 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_CLEF, Fennilahl_Breech_QuestInProgress_Movement_1
# 76 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 77 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 78 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_QuestInProgress_Text_1
# 79 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 80 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 81 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_2
# 82 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_3
# 83 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 84 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 85 "data//maps/FennilahlTown/scripts.pory"
	release
# 86 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 87 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 88 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_CLEF, Fennilahl_Breech_QuestInProgress_Movement_4
# 89 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 90 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_QuestInProgress_Text_1
# 91 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 92 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_StartQuest_Text_0
# 93 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
# 94 "data//maps/FennilahlTown/scripts.pory"
	release
# 95 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_5
# 96 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 97 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_6
# 98 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 99 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 101 "data//maps/FennilahlTown/scripts.pory"
	speakername Fennilahl_Breech_QuestInProgress_Text_6
# 102 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_7
# 103 "data//maps/FennilahlTown/scripts.pory"
	release
# 105 "data//maps/FennilahlTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 106 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_CLEF
# 107 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BREECH
# 108 "data//maps/FennilahlTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 110 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 111 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 114 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Budew::
# 140 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 142 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 2
	goto_if_eq FennilahlTown_Budew_2
FennilahlTown_Budew_1:
# 146 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 1
	goto_if_eq FennilahlTown_Budew_5
FennilahlTown_Budew_4:
# 150 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 0
	goto_if_eq FennilahlTown_Budew_8
FennilahlTown_Budew_7:
# 155 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_2:
# 143 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_ThirdBerry
	goto FennilahlTown_Budew_1

FennilahlTown_Budew_5:
# 147 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_SecondBerry
	goto FennilahlTown_Budew_4

FennilahlTown_Budew_8:
# 151 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_FirstBerry
	goto FennilahlTown_Budew_7


FennilahlTown_Budew_FirstBerry::
# 161 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 162 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_FirstBerry_Movement_0
# 163 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 164 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_0
# 165 "data//maps/FennilahlTown/scripts.pory"
	release
# 167 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 168 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_2
# 189 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_FirstBerry_1:
# 192 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_FirstBerry_2:
# 169 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_1, MSGBOX_YESNO
# 170 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_5
# 185 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 186 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_FirstBerry_1

FennilahlTown_Budew_FirstBerry_5:
# 171 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_ORAN_BERRY
# 172 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 173 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 174 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 175 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_2, MSGBOX_SIGN
# 176 "data//maps/FennilahlTown/scripts.pory"
	release
# 177 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_FirstBerry_Movement_0
# 178 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 179 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 180 "data//maps/FennilahlTown/scripts.pory"
	release
# 182 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 1
	goto FennilahlTown_Budew_FirstBerry_1


FennilahlTown_Budew_SecondBerry::
# 198 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 199 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_SecondBerry_Movement_0
# 200 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 201 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_0
# 202 "data//maps/FennilahlTown/scripts.pory"
	release
# 204 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 205 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_2
# 226 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_SecondBerry_1:
# 229 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_SecondBerry_2:
# 206 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_1, MSGBOX_YESNO
# 207 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_5
# 222 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 223 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_SecondBerry_1

FennilahlTown_Budew_SecondBerry_5:
# 208 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_PECHA_BERRY
# 209 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 210 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 211 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 212 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_2, MSGBOX_SIGN
# 213 "data//maps/FennilahlTown/scripts.pory"
	release
# 214 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_SecondBerry_Movement_0
# 215 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 216 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 217 "data//maps/FennilahlTown/scripts.pory"
	release
# 219 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 2
	goto FennilahlTown_Budew_SecondBerry_1


FennilahlTown_Budew_ThirdBerry::
# 235 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 236 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_0
# 237 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 238 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_0
# 239 "data//maps/FennilahlTown/scripts.pory"
	release
# 241 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 242 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_2
# 265 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_ThirdBerry_1:
# 268 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_ThirdBerry_2:
# 243 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_1, MSGBOX_YESNO
# 244 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_5
# 261 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 262 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_ThirdBerry_1

FennilahlTown_Budew_ThirdBerry_5:
# 245 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 246 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 247 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 248 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 249 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_2, MSGBOX_SIGN
# 250 "data//maps/FennilahlTown/scripts.pory"
	release
# 251 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_ThirdBerry_Movement_1
# 252 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 253 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 254 "data//maps/FennilahlTown/scripts.pory"
	release
# 256 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 3
# 258 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_JoinParty
	goto FennilahlTown_Budew_ThirdBerry_1


FennilahlTown_Budew_JoinParty::
# 273 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_JoinParty_Movement_0
# 274 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 275 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 276 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_0
# 277 "data//maps/FennilahlTown/scripts.pory"
	release
# 278 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 279 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_1, MSGBOX_YESNO
# 280 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_JoinParty_2
# 286 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_JoinParty_Movement_1
# 287 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BUDEW
# 288 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_3
# 289 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_JoinParty_1:
# 292 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_BUDEW_GET
# 293 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 4
# 294 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_JoinParty_2:
# 281 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BUDEW
# 282 "data//maps/FennilahlTown/scripts.pory"
	givemon SPECIES_BUDEW, 5
# 283 "data//maps/FennilahlTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 284 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_2
	goto FennilahlTown_Budew_JoinParty_1


# 70 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 70 "data//maps/FennilahlTown/scripts.pory"
	face_down
# 70 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 75 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_1:
# 75 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 75 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 75 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 75 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 75 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 75 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
	step_end

# 81 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_2:
# 81 "data//maps/FennilahlTown/scripts.pory"
	face_left
	step_end

# 82 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_3:
# 82 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
# 82 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 88 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_4:
# 88 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 88 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 88 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 95 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_5:
# 95 "data//maps/FennilahlTown/scripts.pory"
	face_up
	step_end

# 97 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_6:
# 97 "data//maps/FennilahlTown/scripts.pory"
	face_down
	step_end

# 162 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_0:
# 162 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 162 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 162 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 199 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_0:
# 199 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 199 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 236 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_0:
# 236 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 251 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_1:
# 251 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 273 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_0:
# 273 "data//maps/FennilahlTown/scripts.pory"
	emote_question_mark
	step_end

# 286 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_1:
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 286 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
	step_end

FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0:
# 10 "data//maps/FennilahlTown/scripts.pory"
	.string "I'm the chauffeur for the detectives in\n"
	.string "charge of the Tenebris disappearance.\l"
	.string "They're in Carabrue Town right now\l"
	.string "speaking to the lab staff.$"

FennilahlTown_EventScript_Man_Text_0:
# 15 "data//maps/FennilahlTown/scripts.pory"
	.string "I was watching the news the other day.\n"
	.string "They say that the Pokémon\l"
	.string "Psychologist has gone missing.\p"
	.string "Who?\p"
	.string "Professor Tenebris of course!$"

FennilahlTown_EventScript_Woman_Text_0:
# 21 "data//maps/FennilahlTown/scripts.pory"
	.string "If your Pokémon hold a Soothe Bell,\n"
	.string "they'll become attached to you faster!$"

FennilahlTown_EventScript_Woman_Text_1:
# 25 "data//maps/FennilahlTown/scripts.pory"
	.string "My, that's such a cute little Pokémon\n"
	.string "you have with you! Here, use this and\l"
	.string "treat it with care, okay?$"

Fennilahl_Breech_StartQuest_Text_0:
# 46 "data//maps/FennilahlTown/scripts.pory"
	.string "???$"

Fennilahl_Breech_StartQuest_Text_1:
# 47 "data//maps/FennilahlTown/scripts.pory"
	.string "I found a Strange Rock in the caves\n"
	.string "south of town, but a small pink Pokémon\l"
	.string "took it and ran away! And I don't have\l"
	.string "any Pokémon to help me get it back!\p"
	.string "I don't want to battle - I can't deal\n"
	.string "with conflict.\p"
	.string "I don't know what to do!\n"
	.string "Will you help me get my rock back?$"

Fennilahl_Breech_StartQuest_Text_2:
# 51 "data//maps/FennilahlTown/scripts.pory"
	.string "Amazing! You've answered my prayers.\n"
	.string "I saw the pink Pokémon run south,\l"
	.string "towards Route 2. I really liked that\l"
	.string "Strange Rock! Please bring it back.$"

Fennilahl_Breech_StartQuest_Text_3:
# 56 "data//maps/FennilahlTown/scripts.pory"
	.string "Oh, what will I do!$"

Fennilahl_Breech_QuestInProgress_Text_0:
# 67 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my Strange Rock? Amazing!\n"
	.string "How can I thank you for this?\p"
	.string "...\p"
	.string "A Clefairy had it it? Where'd it go?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 78 "data//maps/FennilahlTown/scripts.pory"
	.string "Clefairy$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 79 "data//maps/FennilahlTown/scripts.pory"
	.string "Clee!!!!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 84 "data//maps/FennilahlTown/scripts.pory"
	.string "This is the Clefairy? It must've been\n"
	.string "following you around because it can't\l"
	.string "let go of the rock!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 91 "data//maps/FennilahlTown/scripts.pory"
	.string "Clee!!!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 93 "data//maps/FennilahlTown/scripts.pory"
	.string "Ouch! Clefairy stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my Pokémon okay? I don't\l"
	.string "battle. You'll be my hiking partner!$"

Fennilahl_Breech_QuestInProgress_Text_6:
# 101 "data//maps/FennilahlTown/scripts.pory"
	.string "Breech$"

Fennilahl_Breech_QuestInProgress_Text_7:
# 102 "data//maps/FennilahlTown/scripts.pory"
	.string "Thank you trainer! My name is Breech.\n"
	.string "I'm just a simple man who loves\l"
	.string "collecting rocks. Even with Clefairy by\l"
	.string "my side, I won't battle. Clefairy and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_8:
# 117 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Budew_FirstBerry_Text_0:
# 164 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew seems to want something...$"

FennilahlTown_Budew_FirstBerry_Text_1:
# 169 "data//maps/FennilahlTown/scripts.pory"
	.string "Give Budew an Oran Berry?$"

FennilahlTown_Budew_FirstBerry_Text_2:
# 175 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave Budew an Oran Berry.$"

FennilahlTown_Budew_FirstBerry_Text_3:
# 179 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew seems happy!$"

FennilahlTown_Budew_FirstBerry_Text_4:
# 185 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew seems disappointed...$"

FennilahlTown_Budew_SecondBerry_Text_0:
# 201 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew seems to want something\n"
	.string "again...but not an Oran Berry.$"

FennilahlTown_Budew_SecondBerry_Text_1:
# 206 "data//maps/FennilahlTown/scripts.pory"
	.string "Give Budew a Pecha Berry?$"

FennilahlTown_Budew_SecondBerry_Text_2:
# 212 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave Budew a Pecha Berry.$"

FennilahlTown_Budew_ThirdBerry_Text_0:
# 238 "data//maps/FennilahlTown/scripts.pory"
	.string "What could Budew want now?$"

FennilahlTown_Budew_ThirdBerry_Text_1:
# 243 "data//maps/FennilahlTown/scripts.pory"
	.string "Give Budew a Rawst Berry?$"

FennilahlTown_Budew_ThirdBerry_Text_2:
# 249 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave Budew a Rawst Berry.$"

FennilahlTown_Budew_JoinParty_Text_0:
# 276 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew is looking at the Poké Balls on\n"
	.string "your belt curiously...$"

FennilahlTown_Budew_JoinParty_Text_1:
# 279 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew nudges you gently...\n"
	.string "It seems to want to join your party!\p"
	.string "Will you become Budew's trainer?$"

FennilahlTown_Budew_JoinParty_Text_2:
# 284 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew has joined your party!\p"
	.string "Welcome, Budew! Let's get along well\n"
	.string "together!$"

FennilahlTown_Budew_JoinParty_Text_3:
# 288 "data//maps/FennilahlTown/scripts.pory"
	.string "Budew ran off...$"
