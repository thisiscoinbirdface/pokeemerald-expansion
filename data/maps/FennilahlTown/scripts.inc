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
	msgbox Fennilahl_Breech_StartQuest_Text_0, MSGBOX_YESNO
# 48 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Fennilahl_Breech_StartQuest_2
# 53 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_2
Fennilahl_Breech_StartQuest_1:
# 56 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_StartQuest_2:
# 49 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_1
# 51 "data//maps/FennilahlTown/scripts.pory"
	startquest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_StartQuest_1


Fennilahl_Breech_QuestInProgress::
# 62 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Fennilahl_Breech_QuestInProgress_2
# 105 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
Fennilahl_Breech_QuestInProgress_1:
# 107 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 63 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 64 "data//maps/FennilahlTown/scripts.pory"
	release
# 65 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 66 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_0
# 67 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_0
# 68 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 69 "data//maps/FennilahlTown/scripts.pory"
	setobjectxyperm LOCALID_CLEF, 25, 15
# 70 "data//maps/FennilahlTown/scripts.pory"
	addobject LOCALID_CLEF
# 71 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_CLEF, Fennilahl_Breech_QuestInProgress_Movement_1
# 72 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 73 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 74 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_1
# 75 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 76 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_2
# 77 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_3
# 78 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 79 "data//maps/FennilahlTown/scripts.pory"
	release
# 80 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 81 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 82 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_CLEF, Fennilahl_Breech_QuestInProgress_Movement_4
# 83 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 84 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 85 "data//maps/FennilahlTown/scripts.pory"
	release
# 86 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_5
# 87 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 88 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_6
# 89 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 90 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 91 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 92 "data//maps/FennilahlTown/scripts.pory"
	release
# 94 "data//maps/FennilahlTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_CLEF
# 96 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BREECH
# 97 "data//maps/FennilahlTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 99 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 100 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 103 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Budew::
# 128 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 130 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 2
	goto_if_eq FennilahlTown_Budew_2
FennilahlTown_Budew_1:
# 134 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 1
	goto_if_eq FennilahlTown_Budew_5
FennilahlTown_Budew_4:
# 138 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 0
	goto_if_eq FennilahlTown_Budew_8
FennilahlTown_Budew_7:
# 143 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_2:
# 131 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_ThirdBerry
	goto FennilahlTown_Budew_1

FennilahlTown_Budew_5:
# 135 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_SecondBerry
	goto FennilahlTown_Budew_4

FennilahlTown_Budew_8:
# 139 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_FirstBerry
	goto FennilahlTown_Budew_7


FennilahlTown_Budew_FirstBerry::
# 149 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 150 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, Fennilahl_Breech_QuestInProgress_Movement_4
# 151 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 152 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_0
# 153 "data//maps/FennilahlTown/scripts.pory"
	release
# 155 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 156 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_2
# 177 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_FirstBerry_1:
# 180 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_FirstBerry_2:
# 157 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_1, MSGBOX_YESNO
# 158 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_5
# 173 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 174 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_FirstBerry_1

FennilahlTown_Budew_FirstBerry_5:
# 159 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_ORAN_BERRY
# 160 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 161 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 162 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 163 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_2, MSGBOX_SIGN
# 164 "data//maps/FennilahlTown/scripts.pory"
	release
# 165 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_FirstBerry_Movement_0
# 166 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 167 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 168 "data//maps/FennilahlTown/scripts.pory"
	release
# 170 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 1
	goto FennilahlTown_Budew_FirstBerry_1


FennilahlTown_Budew_SecondBerry::
# 186 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 187 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_SecondBerry_Movement_0
# 188 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 189 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_0
# 190 "data//maps/FennilahlTown/scripts.pory"
	release
# 192 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 193 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_2
# 214 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_SecondBerry_1:
# 217 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_SecondBerry_2:
# 194 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_1, MSGBOX_YESNO
# 195 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_5
# 210 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 211 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_SecondBerry_1

FennilahlTown_Budew_SecondBerry_5:
# 196 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_PECHA_BERRY
# 197 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 198 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 199 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 200 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_2, MSGBOX_SIGN
# 201 "data//maps/FennilahlTown/scripts.pory"
	release
# 202 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_SecondBerry_Movement_1
# 203 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 204 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 205 "data//maps/FennilahlTown/scripts.pory"
	release
# 207 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 2
	goto FennilahlTown_Budew_SecondBerry_1


FennilahlTown_Budew_ThirdBerry::
# 223 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 224 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_0
# 225 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 226 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_0
# 227 "data//maps/FennilahlTown/scripts.pory"
	release
# 229 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 230 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_2
# 253 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_ThirdBerry_1:
# 256 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_ThirdBerry_2:
# 231 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_1, MSGBOX_YESNO
# 232 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_5
# 249 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 250 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_ThirdBerry_1

FennilahlTown_Budew_ThirdBerry_5:
# 233 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 234 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 235 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 236 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 237 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_2, MSGBOX_SIGN
# 238 "data//maps/FennilahlTown/scripts.pory"
	release
# 239 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_ThirdBerry_Movement_1
# 240 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 241 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 242 "data//maps/FennilahlTown/scripts.pory"
	release
# 244 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 3
# 246 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_JoinParty
	goto FennilahlTown_Budew_ThirdBerry_1


FennilahlTown_Budew_JoinParty::
# 261 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_JoinParty_Movement_0
# 262 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 263 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 264 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_0
# 265 "data//maps/FennilahlTown/scripts.pory"
	release
# 266 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 267 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_1, MSGBOX_YESNO
# 268 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_JoinParty_2
# 274 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BUDEW, FennilahlTown_Budew_JoinParty_Movement_1
# 275 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BUDEW
# 276 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_3
# 277 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_JoinParty_1:
# 280 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_BUDEW_GET
# 281 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 4
# 282 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_JoinParty_2:
# 269 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BUDEW
# 270 "data//maps/FennilahlTown/scripts.pory"
	givemon SPECIES_BUDEW, 5
# 271 "data//maps/FennilahlTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_2
	goto FennilahlTown_Budew_JoinParty_1


# 66 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 66 "data//maps/FennilahlTown/scripts.pory"
	face_down
# 66 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 71 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_1:
# 71 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 71 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 71 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 71 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 71 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 71 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
	step_end

# 76 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_2:
# 76 "data//maps/FennilahlTown/scripts.pory"
	face_left
	step_end

# 77 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_3:
# 77 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
# 77 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 82 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_4:
# 82 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 82 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 82 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 86 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_5:
# 86 "data//maps/FennilahlTown/scripts.pory"
	face_up
	step_end

# 88 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_6:
# 88 "data//maps/FennilahlTown/scripts.pory"
	face_down
	step_end

# 165 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_0:
# 165 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 165 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 165 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 187 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_0:
# 187 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 187 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 202 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_1:
# 202 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 202 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 224 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_0:
# 224 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 239 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_1:
# 239 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 261 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_0:
# 261 "data//maps/FennilahlTown/scripts.pory"
	emote_question_mark
	step_end

# 274 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_1:
# 274 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 274 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 274 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 274 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 274 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 274 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 274 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 274 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 274 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 274 "data//maps/FennilahlTown/scripts.pory"
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
	.string "Psychologist has gone missing. Who?\l"
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
	.string "I found a STRANGE ROCK in the caves\n"
	.string "south of town, but a small pink Pokémon\l"
	.string "took it and ran away! And I don't have\l"
	.string "any Pokémon to help me get it back! I\l"
	.string "don't want to battle - I can't deal with\l"
	.string "conflict.\p"
	.string "I don't know what to do! Will you help\n"
	.string "me?$"

Fennilahl_Breech_StartQuest_Text_1:
# 49 "data//maps/FennilahlTown/scripts.pory"
	.string "Amazing! You've answered my prayers. I\n"
	.string "saw the pink Pokémon run down south,\l"
	.string "towards Route 2. I really liked that\l"
	.string "Strange Rock! Please bring it back.$"

Fennilahl_Breech_StartQuest_Text_2:
# 53 "data//maps/FennilahlTown/scripts.pory"
	.string "Oh, what will I do!$"

Fennilahl_Breech_QuestInProgress_Text_0:
# 63 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my Strange Rock? Amazing!\n"
	.string "How can I thank you for this?\p"
	.string "...\p"
	.string "A Clefairy was keeping it? Where'd it\n"
	.string "go?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 74 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!!$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 78 "data//maps/FennilahlTown/scripts.pory"
	.string "This is the Clefairy? It must've been\n"
	.string "following you around because it can't\l"
	.string "let go of the rock!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 84 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!\p"
	.string "Ouch! Clefairy stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my Pokémon okay? I don't\l"
	.string "like battling. You'll be my hiking\l"
	.string "partner!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 91 "data//maps/FennilahlTown/scripts.pory"
	.string "BREECH: Thank you trainer! My name is\n"
	.string "Breech. I'm just a simple man who loves\l"
	.string "collecting rocks. Even with Clefairy by\l"
	.string "my side, I won't battle. Clefairy and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 105 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Budew_FirstBerry_Text_0:
# 152 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something...$"

FennilahlTown_Budew_FirstBerry_Text_1:
# 157 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW an ORAN BERRY?$"

FennilahlTown_Budew_FirstBerry_Text_2:
# 163 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW an ORAN BERRY.$"

FennilahlTown_Budew_FirstBerry_Text_3:
# 167 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems happy!$"

FennilahlTown_Budew_FirstBerry_Text_4:
# 173 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems disappointed...$"

FennilahlTown_Budew_SecondBerry_Text_0:
# 189 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something\n"
	.string "again...but not an ORAN BERRY.$"

FennilahlTown_Budew_SecondBerry_Text_1:
# 194 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a PECHA BERRY?$"

FennilahlTown_Budew_SecondBerry_Text_2:
# 200 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a PECHA BERRY.$"

FennilahlTown_Budew_ThirdBerry_Text_0:
# 226 "data//maps/FennilahlTown/scripts.pory"
	.string "What could BUDEW want now?$"

FennilahlTown_Budew_ThirdBerry_Text_1:
# 231 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a RAWST BERRY?$"

FennilahlTown_Budew_ThirdBerry_Text_2:
# 237 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a RAWST BERRY.$"

FennilahlTown_Budew_JoinParty_Text_0:
# 264 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW is looking at the Pokeballs on\n"
	.string "your belt curiously...$"

FennilahlTown_Budew_JoinParty_Text_1:
# 267 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW nudges the Pokeballs on your\n"
	.string "belt. It seems to want to join your\l"
	.string "party! Will you become BUDEW's trainer?$"

FennilahlTown_Budew_JoinParty_Text_2:
# 272 "data//maps/FennilahlTown/scripts.pory"
	.string "The BUDEW has joined your party!\p"
	.string "Welcome, BUDEW! Let's get along well\n"
	.string "together!$"

FennilahlTown_Budew_JoinParty_Text_3:
# 276 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW ran off...$"
