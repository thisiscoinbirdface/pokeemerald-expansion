FennilahlTown_MapScripts::
	.byte 0


FennilahlTown_EventScript_MartEmployeeRoadBlock::
# 4 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 5 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 6 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0
# 7 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return


FennilahlTown_EventScript_Man::
# 11 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 12 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 13 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Man_Text_0
# 14 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end


FennilahlTown_EventScript_Woman::
# 19 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 20 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 21 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_CUTEMONGIFT, FennilahlTown_EventScript_Woman_2
# 24 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_1
# 25 "data//maps/FennilahlTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 26 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_CUTEMONGIFT
FennilahlTown_EventScript_Woman_1:
# 28 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return

FennilahlTown_EventScript_Woman_2:
# 22 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0
	goto FennilahlTown_EventScript_Woman_1


FennilahlTown_EventScript_HikerTunnel::
# 32 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 33 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 35 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_active QUEST_FENNILAHL_HIKER, Fennilahl_Breech_QuestInProgress
# 36 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_inactive QUEST_FENNILAHL_HIKER, Fennilahl_Breech_StartQuest
# 38 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end


Fennilahl_Breech_StartQuest::
# 44 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_0, MSGBOX_YESNO
# 46 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Fennilahl_Breech_StartQuest_2
# 51 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_2
Fennilahl_Breech_StartQuest_1:
# 54 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_StartQuest_2:
# 47 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_1
# 49 "data//maps/FennilahlTown/scripts.pory"
	startquest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_StartQuest_1


Fennilahl_Breech_QuestInProgress::
# 60 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Fennilahl_Breech_QuestInProgress_2
# 100 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
Fennilahl_Breech_QuestInProgress_1:
# 102 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 61 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 62 "data//maps/FennilahlTown/scripts.pory"
	release
# 63 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 64 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, Fennilahl_Breech_QuestInProgress_Movement_0
# 65 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_0
# 66 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 67 "data//maps/FennilahlTown/scripts.pory"
	setobjectxyperm 9, 25, 15
# 68 "data//maps/FennilahlTown/scripts.pory"
	addobject 9
# 69 "data//maps/FennilahlTown/scripts.pory"
	applymovement 9, Fennilahl_Breech_QuestInProgress_Movement_1
# 70 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 71 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 72 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_1
# 73 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 74 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_2
# 75 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, Fennilahl_Breech_QuestInProgress_Movement_3
# 76 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 77 "data//maps/FennilahlTown/scripts.pory"
	release
# 78 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 79 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 80 "data//maps/FennilahlTown/scripts.pory"
	applymovement 9, Fennilahl_Breech_QuestInProgress_Movement_4
# 81 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 82 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 83 "data//maps/FennilahlTown/scripts.pory"
	release
# 84 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 85 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 86 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 87 "data//maps/FennilahlTown/scripts.pory"
	release
# 89 "data//maps/FennilahlTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data//maps/FennilahlTown/scripts.pory"
	removeobject 9
# 91 "data//maps/FennilahlTown/scripts.pory"
	removeobject 5
# 92 "data//maps/FennilahlTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 94 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 95 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 98 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Budew::
# 123 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 125 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 2
	goto_if_eq FennilahlTown_Budew_2
FennilahlTown_Budew_1:
# 129 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 1
	goto_if_eq FennilahlTown_Budew_5
FennilahlTown_Budew_4:
# 133 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 0
	goto_if_eq FennilahlTown_Budew_8
FennilahlTown_Budew_7:
# 138 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_2:
# 126 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_ThirdBerry
	goto FennilahlTown_Budew_1

FennilahlTown_Budew_5:
# 130 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_SecondBerry
	goto FennilahlTown_Budew_4

FennilahlTown_Budew_8:
# 134 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_FirstBerry
	goto FennilahlTown_Budew_7


FennilahlTown_Budew_FirstBerry::
# 144 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 145 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, Fennilahl_Breech_QuestInProgress_Movement_4
# 146 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 147 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_0
# 148 "data//maps/FennilahlTown/scripts.pory"
	release
# 150 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 151 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_2
# 172 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_FirstBerry_1:
# 175 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_FirstBerry_2:
# 152 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_1, MSGBOX_YESNO
# 153 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_5
# 168 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 169 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_FirstBerry_1

FennilahlTown_Budew_FirstBerry_5:
# 154 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_ORAN_BERRY
# 155 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 156 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 157 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 158 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_2, MSGBOX_SIGN
# 159 "data//maps/FennilahlTown/scripts.pory"
	release
# 160 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_FirstBerry_Movement_0
# 161 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 162 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 163 "data//maps/FennilahlTown/scripts.pory"
	release
# 165 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 1
	goto FennilahlTown_Budew_FirstBerry_1


FennilahlTown_Budew_SecondBerry::
# 181 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 182 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_0
# 183 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 184 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_0
# 185 "data//maps/FennilahlTown/scripts.pory"
	release
# 187 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 188 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_2
# 209 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_SecondBerry_1:
# 212 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_SecondBerry_2:
# 189 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_1, MSGBOX_YESNO
# 190 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_5
# 205 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 206 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_SecondBerry_1

FennilahlTown_Budew_SecondBerry_5:
# 191 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_PECHA_BERRY
# 192 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 193 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 194 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 195 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_2, MSGBOX_SIGN
# 196 "data//maps/FennilahlTown/scripts.pory"
	release
# 197 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_1
# 198 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 199 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 200 "data//maps/FennilahlTown/scripts.pory"
	release
# 202 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 2
	goto FennilahlTown_Budew_SecondBerry_1


FennilahlTown_Budew_ThirdBerry::
# 218 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 219 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_0
# 220 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 221 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_0
# 222 "data//maps/FennilahlTown/scripts.pory"
	release
# 224 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 225 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_2
# 248 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_ThirdBerry_1:
# 251 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_ThirdBerry_2:
# 226 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_1, MSGBOX_YESNO
# 227 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_5
# 244 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 245 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_ThirdBerry_1

FennilahlTown_Budew_ThirdBerry_5:
# 228 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 229 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 230 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 231 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 232 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_2, MSGBOX_SIGN
# 233 "data//maps/FennilahlTown/scripts.pory"
	release
# 234 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, Fennilahl_Breech_QuestInProgress_Movement_3
# 235 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 236 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 237 "data//maps/FennilahlTown/scripts.pory"
	release
# 239 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 3
# 241 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_JoinParty
	goto FennilahlTown_Budew_ThirdBerry_1


FennilahlTown_Budew_JoinParty::
# 256 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_0
# 257 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 258 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 259 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_0
# 260 "data//maps/FennilahlTown/scripts.pory"
	release
# 261 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 262 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_1, MSGBOX_YESNO
# 263 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_JoinParty_2
# 269 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_1
# 270 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 271 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_3
# 272 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_JoinParty_1:
# 275 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_BUDEW_GET
# 276 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 4
# 277 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_JoinParty_2:
# 264 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 265 "data//maps/FennilahlTown/scripts.pory"
	givemon SPECIES_BUDEW, 5
# 266 "data//maps/FennilahlTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 267 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_2
	goto FennilahlTown_Budew_JoinParty_1


# 64 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 64 "data//maps/FennilahlTown/scripts.pory"
	face_down
# 64 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 69 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_1:
# 69 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 69 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 69 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 69 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 69 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 69 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
	step_end

# 74 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_2:
# 74 "data//maps/FennilahlTown/scripts.pory"
	face_right
	step_end

# 75 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_3:
# 75 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 80 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_4:
# 80 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 80 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 80 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 160 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_0:
# 160 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 160 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 160 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 182 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_0:
# 182 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 182 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 197 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_1:
# 197 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 197 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 219 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_0:
# 219 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 256 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_0:
# 256 "data//maps/FennilahlTown/scripts.pory"
	emote_question_mark
	step_end

# 269 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_1:
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 269 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
	step_end

FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0:
# 6 "data//maps/FennilahlTown/scripts.pory"
	.string "I'm the chauffeur for the detectives in\n"
	.string "charge of the Tenebris disappearance.\l"
	.string "They're in Carabrue Town right now\l"
	.string "speaking to the lab staff.$"

FennilahlTown_EventScript_Man_Text_0:
# 13 "data//maps/FennilahlTown/scripts.pory"
	.string "I was watching the news the other day.\n"
	.string "They say that the Pokemon\l"
	.string "Psychologist has gone missing. Who?\l"
	.string "Professor Tenebris of course!$"

FennilahlTown_EventScript_Woman_Text_0:
# 22 "data//maps/FennilahlTown/scripts.pory"
	.string "If your {PKMN} hold a SOOTHE BELL, they'll\n"
	.string "become attached to you faster!$"

FennilahlTown_EventScript_Woman_Text_1:
# 24 "data//maps/FennilahlTown/scripts.pory"
	.string "My, that's such a cute little {PKMN} you\n"
	.string "have with you! Here, use this and treat\l"
	.string "it with care, okay?$"

Fennilahl_Breech_StartQuest_Text_0:
# 44 "data//maps/FennilahlTown/scripts.pory"
	.string "I found a STRANGE ROCK in the caves\n"
	.string "south of town, but a small PINK {PKMN} took\l"
	.string "it and ran away! And I don't have any\l"
	.string "{PKMN} to help me get it back! I don't want\l"
	.string "to battle - I can't deal with conflict.\p"
	.string "I don't know what to do! Will you help me\n"
	.string "out?$"

Fennilahl_Breech_StartQuest_Text_1:
# 47 "data//maps/FennilahlTown/scripts.pory"
	.string "Amazing! You've answered my prayers. I\n"
	.string "saw the pink {PKMN} run down south,\l"
	.string "towards ROUTE 2. I really liked that\l"
	.string "STRANGE ROCK! Please bring it back.$"

Fennilahl_Breech_StartQuest_Text_2:
# 51 "data//maps/FennilahlTown/scripts.pory"
	.string "Oh, what will I do!$"

Fennilahl_Breech_QuestInProgress_Text_0:
# 61 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my STRANGE ROCK? Amazing!\n"
	.string "How can I thank you for this?\p"
	.string "...\p"
	.string "A CLEFAIRY was keeping it? Where'd it\n"
	.string "go?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 72 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!!$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 76 "data//maps/FennilahlTown/scripts.pory"
	.string "This is the CLEFAIRY? It must've been\n"
	.string "following you around because it can't\l"
	.string "let go of the rock!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 82 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!\p"
	.string "Ouch! Clefairy stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my {PKMN} okay? I don't like\l"
	.string "battling. You'll be my hiking partner!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 86 "data//maps/FennilahlTown/scripts.pory"
	.string "BREECH: Thank you trainer! My name is\n"
	.string "Breech. I'm just a simple man who loves\l"
	.string "collecting rocks. Even with Clefairy by\l"
	.string "my side, I won't battle. Clefairy and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 100 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Budew_FirstBerry_Text_0:
# 147 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something...$"

FennilahlTown_Budew_FirstBerry_Text_1:
# 152 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW an ORAN BERRY?$"

FennilahlTown_Budew_FirstBerry_Text_2:
# 158 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW an ORAN BERRY.$"

FennilahlTown_Budew_FirstBerry_Text_3:
# 162 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems happy!$"

FennilahlTown_Budew_FirstBerry_Text_4:
# 168 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems disappointed...$"

FennilahlTown_Budew_SecondBerry_Text_0:
# 184 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something\n"
	.string "again...but not an ORAN BERRY.$"

FennilahlTown_Budew_SecondBerry_Text_1:
# 189 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a PECHA BERRY?$"

FennilahlTown_Budew_SecondBerry_Text_2:
# 195 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a PECHA BERRY.$"

FennilahlTown_Budew_ThirdBerry_Text_0:
# 221 "data//maps/FennilahlTown/scripts.pory"
	.string "What could BUDEW want now?$"

FennilahlTown_Budew_ThirdBerry_Text_1:
# 226 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a RAWST BERRY?$"

FennilahlTown_Budew_ThirdBerry_Text_2:
# 232 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a RAWST BERRY.$"

FennilahlTown_Budew_JoinParty_Text_0:
# 259 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW is looking at the Pokeballs on\n"
	.string "your belt curiously...$"

FennilahlTown_Budew_JoinParty_Text_1:
# 262 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW nudges the Pokeballs on your\n"
	.string "belt. It seems to want to join your\l"
	.string "party! Will you become BUDEW's trainer?$"

FennilahlTown_Budew_JoinParty_Text_2:
# 267 "data//maps/FennilahlTown/scripts.pory"
	.string "The BUDEW has joined your party!\p"
	.string "Welcome, BUDEW! Let's get along well\n"
	.string "together!$"

FennilahlTown_Budew_JoinParty_Text_3:
# 271 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW ran off...$"
