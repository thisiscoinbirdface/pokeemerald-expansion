# 1 "data//maps/FennilahlTown/scripts.pory"

# 2 "data//maps/FennilahlTown/scripts.pory"
    .set LOCALID_BREECH, 4
# 3 "data//maps/FennilahlTown/scripts.pory"
    .set LOCALID_CLEF, 8

FennilahlTown_MapScripts::
	.byte 0


FennilahlTown_EventScript_MartEmployeeRoadBlock::
# 9 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0, MSGBOX_NPC
	end


FennilahlTown_EventScript_Man::
# 14 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Man_Text_0, MSGBOX_NPC
	end


FennilahlTown_EventScript_Woman::
# 19 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_CUTEMONGIFT, FennilahlTown_EventScript_Woman_2
# 22 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 23 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 24 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_1
# 25 "data//maps/FennilahlTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 26 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_CUTEMONGIFT
# 27 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0, MSGBOX_NPC
FennilahlTown_EventScript_Woman_1:
	end

FennilahlTown_EventScript_Woman_2:
# 20 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0, MSGBOX_NPC
	goto FennilahlTown_EventScript_Woman_1


FennilahlTown_EventScript_HikerTunnel::
# 33 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 34 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 36 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_active QUEST_FENNILAHL_HIKER, Fennilahl_Breech_QuestInProgress
# 37 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_inactive QUEST_FENNILAHL_HIKER, Fennilahl_Breech_StartQuest
# 39 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end


Fennilahl_Breech_StartQuest::
# 45 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_0, MSGBOX_YESNO
# 47 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Fennilahl_Breech_StartQuest_2
# 52 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_2
Fennilahl_Breech_StartQuest_1:
# 55 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_StartQuest_2:
# 48 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_1
# 50 "data//maps/FennilahlTown/scripts.pory"
	startquest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_StartQuest_1


Fennilahl_Breech_QuestInProgress::
# 61 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Fennilahl_Breech_QuestInProgress_2
# 104 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
Fennilahl_Breech_QuestInProgress_1:
# 106 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 62 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 63 "data//maps/FennilahlTown/scripts.pory"
	release
# 64 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 65 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_0
# 66 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_0
# 67 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 68 "data//maps/FennilahlTown/scripts.pory"
	setobjectxyperm LOCALID_CLEF, 25, 15
# 69 "data//maps/FennilahlTown/scripts.pory"
	addobject LOCALID_CLEF
# 70 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_CLEF, Fennilahl_Breech_QuestInProgress_Movement_1
# 71 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 72 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 73 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_1
# 74 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 75 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_2
# 76 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_3
# 77 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 78 "data//maps/FennilahlTown/scripts.pory"
	release
# 79 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 80 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 81 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_CLEF, Fennilahl_Breech_QuestInProgress_Movement_4
# 82 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 83 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 84 "data//maps/FennilahlTown/scripts.pory"
	release
# 85 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_5
# 86 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 87 "data//maps/FennilahlTown/scripts.pory"
	applymovement LOCALID_BREECH, Fennilahl_Breech_QuestInProgress_Movement_6
# 88 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 89 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 90 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 91 "data//maps/FennilahlTown/scripts.pory"
	release
# 93 "data//maps/FennilahlTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 94 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_CLEF
# 95 "data//maps/FennilahlTown/scripts.pory"
	removeobject LOCALID_BREECH
# 96 "data//maps/FennilahlTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 98 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 99 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 102 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Budew::
# 127 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 129 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 2
	goto_if_eq FennilahlTown_Budew_2
FennilahlTown_Budew_1:
# 133 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 1
	goto_if_eq FennilahlTown_Budew_5
FennilahlTown_Budew_4:
# 137 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 0
	goto_if_eq FennilahlTown_Budew_8
FennilahlTown_Budew_7:
# 142 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_2:
# 130 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_ThirdBerry
	goto FennilahlTown_Budew_1

FennilahlTown_Budew_5:
# 134 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_SecondBerry
	goto FennilahlTown_Budew_4

FennilahlTown_Budew_8:
# 138 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_FirstBerry
	goto FennilahlTown_Budew_7


FennilahlTown_Budew_FirstBerry::
# 148 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 149 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, Fennilahl_Breech_QuestInProgress_Movement_4
# 150 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 151 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_0
# 152 "data//maps/FennilahlTown/scripts.pory"
	release
# 154 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 155 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_2
# 176 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_FirstBerry_1:
# 179 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_FirstBerry_2:
# 156 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_1, MSGBOX_YESNO
# 157 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_5
# 172 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 173 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_FirstBerry_1

FennilahlTown_Budew_FirstBerry_5:
# 158 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_ORAN_BERRY
# 159 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 160 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 161 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 162 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_2, MSGBOX_SIGN
# 163 "data//maps/FennilahlTown/scripts.pory"
	release
# 164 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_FirstBerry_Movement_0
# 165 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 166 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 167 "data//maps/FennilahlTown/scripts.pory"
	release
# 169 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 1
	goto FennilahlTown_Budew_FirstBerry_1


FennilahlTown_Budew_SecondBerry::
# 185 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 186 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_0
# 187 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 188 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_0
# 189 "data//maps/FennilahlTown/scripts.pory"
	release
# 191 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 192 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_2
# 213 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_SecondBerry_1:
# 216 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_SecondBerry_2:
# 193 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_1, MSGBOX_YESNO
# 194 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_5
# 209 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 210 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_SecondBerry_1

FennilahlTown_Budew_SecondBerry_5:
# 195 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_PECHA_BERRY
# 196 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 197 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 198 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 199 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_2, MSGBOX_SIGN
# 200 "data//maps/FennilahlTown/scripts.pory"
	release
# 201 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_1
# 202 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 203 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 204 "data//maps/FennilahlTown/scripts.pory"
	release
# 206 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 2
	goto FennilahlTown_Budew_SecondBerry_1


FennilahlTown_Budew_ThirdBerry::
# 222 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 223 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_0
# 224 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 225 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_0
# 226 "data//maps/FennilahlTown/scripts.pory"
	release
# 228 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 229 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_2
# 252 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_ThirdBerry_1:
# 255 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_ThirdBerry_2:
# 230 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_1, MSGBOX_YESNO
# 231 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_5
# 248 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 249 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_ThirdBerry_1

FennilahlTown_Budew_ThirdBerry_5:
# 232 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 233 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 234 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 235 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 236 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_2, MSGBOX_SIGN
# 237 "data//maps/FennilahlTown/scripts.pory"
	release
# 238 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_1
# 239 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 240 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 241 "data//maps/FennilahlTown/scripts.pory"
	release
# 243 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 3
# 245 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_JoinParty
	goto FennilahlTown_Budew_ThirdBerry_1


FennilahlTown_Budew_JoinParty::
# 260 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_0
# 261 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 262 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 263 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_0
# 264 "data//maps/FennilahlTown/scripts.pory"
	release
# 265 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 266 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_1, MSGBOX_YESNO
# 267 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_JoinParty_2
# 273 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_1
# 274 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 275 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_3
# 276 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_JoinParty_1:
# 279 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_BUDEW_GET
# 280 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 4
# 281 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_JoinParty_2:
# 268 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 269 "data//maps/FennilahlTown/scripts.pory"
	givemon SPECIES_BUDEW, 5
# 270 "data//maps/FennilahlTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 271 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_2
	goto FennilahlTown_Budew_JoinParty_1


# 65 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 65 "data//maps/FennilahlTown/scripts.pory"
	face_down
# 65 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 70 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_1:
# 70 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 70 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 70 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 70 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 70 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 70 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
	step_end

# 75 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_2:
# 75 "data//maps/FennilahlTown/scripts.pory"
	face_left
	step_end

# 76 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_3:
# 76 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
# 76 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 81 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_4:
# 81 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 81 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 81 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 85 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_5:
# 85 "data//maps/FennilahlTown/scripts.pory"
	face_up
	step_end

# 87 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_6:
# 87 "data//maps/FennilahlTown/scripts.pory"
	face_down
	step_end

# 164 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_0:
# 164 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 164 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 164 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 186 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_0:
# 186 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 186 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 201 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_1:
# 201 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 201 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 223 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_0:
# 223 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 238 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_1:
# 238 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 260 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_0:
# 260 "data//maps/FennilahlTown/scripts.pory"
	emote_question_mark
	step_end

# 273 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_1:
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 273 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
	step_end

FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0:
# 9 "data//maps/FennilahlTown/scripts.pory"
	.string "I'm the chauffeur for the detectives in\n"
	.string "charge of the Tenebris disappearance.\l"
	.string "They're in Carabrue Town right now\l"
	.string "speaking to the lab staff.$"

FennilahlTown_EventScript_Man_Text_0:
# 14 "data//maps/FennilahlTown/scripts.pory"
	.string "I was watching the news the other day.\n"
	.string "They say that the Pokémon\l"
	.string "Psychologist has gone missing. Who?\l"
	.string "Professor Tenebris of course!$"

FennilahlTown_EventScript_Woman_Text_0:
# 20 "data//maps/FennilahlTown/scripts.pory"
	.string "If your Pokémon hold a Soothe Bell,\n"
	.string "they'll become attached to you faster!$"

FennilahlTown_EventScript_Woman_Text_1:
# 24 "data//maps/FennilahlTown/scripts.pory"
	.string "My, that's such a cute little Pokémon\n"
	.string "you have with you! Here, use this and\l"
	.string "treat it with care, okay?$"

Fennilahl_Breech_StartQuest_Text_0:
# 45 "data//maps/FennilahlTown/scripts.pory"
	.string "I found a STRANGE ROCK in the caves\n"
	.string "south of town, but a small pink Pokémon\l"
	.string "took it and ran away! And I don't have\l"
	.string "any Pokémon to help me get it back! I\l"
	.string "don't want to battle - I can't deal with\l"
	.string "conflict.\p"
	.string "I don't know what to do! Will you help\n"
	.string "me?$"

Fennilahl_Breech_StartQuest_Text_1:
# 48 "data//maps/FennilahlTown/scripts.pory"
	.string "Amazing! You've answered my prayers. I\n"
	.string "saw the pink Pokémon run down south,\l"
	.string "towards ROUTE 2. I really liked that\l"
	.string "STRANGE ROCK! Please bring it back.$"

Fennilahl_Breech_StartQuest_Text_2:
# 52 "data//maps/FennilahlTown/scripts.pory"
	.string "Oh, what will I do!$"

Fennilahl_Breech_QuestInProgress_Text_0:
# 62 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my STRANGE ROCK? Amazing!\n"
	.string "How can I thank you for this?\p"
	.string "...\p"
	.string "A CLEFAIRY was keeping it? Where'd it\n"
	.string "go?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 73 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!!$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 77 "data//maps/FennilahlTown/scripts.pory"
	.string "This is the Clefairy? It must've been\n"
	.string "following you around because it can't\l"
	.string "let go of the rock!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 83 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!\p"
	.string "Ouch! Clefairy stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my Pokémon okay? I don't\l"
	.string "like battling. You'll be my hiking\l"
	.string "partner!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 90 "data//maps/FennilahlTown/scripts.pory"
	.string "BREECH: Thank you trainer! My name is\n"
	.string "Breech. I'm just a simple man who loves\l"
	.string "collecting rocks. Even with Clefairy by\l"
	.string "my side, I won't battle. Clefairy and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 104 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Budew_FirstBerry_Text_0:
# 151 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something...$"

FennilahlTown_Budew_FirstBerry_Text_1:
# 156 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW an ORAN BERRY?$"

FennilahlTown_Budew_FirstBerry_Text_2:
# 162 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW an ORAN BERRY.$"

FennilahlTown_Budew_FirstBerry_Text_3:
# 166 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems happy!$"

FennilahlTown_Budew_FirstBerry_Text_4:
# 172 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems disappointed...$"

FennilahlTown_Budew_SecondBerry_Text_0:
# 188 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something\n"
	.string "again...but not an ORAN BERRY.$"

FennilahlTown_Budew_SecondBerry_Text_1:
# 193 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a PECHA BERRY?$"

FennilahlTown_Budew_SecondBerry_Text_2:
# 199 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a PECHA BERRY.$"

FennilahlTown_Budew_ThirdBerry_Text_0:
# 225 "data//maps/FennilahlTown/scripts.pory"
	.string "What could BUDEW want now?$"

FennilahlTown_Budew_ThirdBerry_Text_1:
# 230 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a RAWST BERRY?$"

FennilahlTown_Budew_ThirdBerry_Text_2:
# 236 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a RAWST BERRY.$"

FennilahlTown_Budew_JoinParty_Text_0:
# 263 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW is looking at the Pokeballs on\n"
	.string "your belt curiously...$"

FennilahlTown_Budew_JoinParty_Text_1:
# 266 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW nudges the Pokeballs on your\n"
	.string "belt. It seems to want to join your\l"
	.string "party! Will you become BUDEW's trainer?$"

FennilahlTown_Budew_JoinParty_Text_2:
# 271 "data//maps/FennilahlTown/scripts.pory"
	.string "The BUDEW has joined your party!\p"
	.string "Welcome, BUDEW! Let's get along well\n"
	.string "together!$"

FennilahlTown_Budew_JoinParty_Text_3:
# 275 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW ran off...$"
