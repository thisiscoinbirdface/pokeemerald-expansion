FennilahlTown_MapScripts::
	.byte 0


FennilahlTown_EventScript_MartEmployeeRoadBlock::
# 4 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0, MSGBOX_NPC
	end


FennilahlTown_EventScript_Man::
# 9 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Man_Text_0, MSGBOX_NPC
	end


FennilahlTown_EventScript_Woman::
# 14 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_CUTEMONGIFT, FennilahlTown_EventScript_Woman_2
# 17 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 18 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 19 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_1
# 20 "data//maps/FennilahlTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 21 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_CUTEMONGIFT
# 22 "data//maps/FennilahlTown/scripts.pory"
	releaseall
FennilahlTown_EventScript_Woman_1:
	end

FennilahlTown_EventScript_Woman_2:
# 15 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0, MSGBOX_NPC
	goto FennilahlTown_EventScript_Woman_1


FennilahlTown_EventScript_HikerTunnel::
# 28 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 29 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 31 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_active QUEST_FENNILAHL_HIKER, Fennilahl_Breech_QuestInProgress
# 32 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_inactive QUEST_FENNILAHL_HIKER, Fennilahl_Breech_StartQuest
# 34 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end


Fennilahl_Breech_StartQuest::
# 40 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_0, MSGBOX_YESNO
# 42 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Fennilahl_Breech_StartQuest_2
# 47 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_2
Fennilahl_Breech_StartQuest_1:
# 50 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_StartQuest_2:
# 43 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_1
# 45 "data//maps/FennilahlTown/scripts.pory"
	startquest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_StartQuest_1


Fennilahl_Breech_QuestInProgress::
# 56 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Fennilahl_Breech_QuestInProgress_2
# 99 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
Fennilahl_Breech_QuestInProgress_1:
# 101 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 57 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 58 "data//maps/FennilahlTown/scripts.pory"
	release
# 59 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 60 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, Fennilahl_Breech_QuestInProgress_Movement_0
# 61 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_0
# 62 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 63 "data//maps/FennilahlTown/scripts.pory"
	setobjectxyperm 9, 25, 15
# 64 "data//maps/FennilahlTown/scripts.pory"
	addobject 9
# 65 "data//maps/FennilahlTown/scripts.pory"
	applymovement 9, Fennilahl_Breech_QuestInProgress_Movement_1
# 66 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 67 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 68 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_1
# 69 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 70 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_2
# 71 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, Fennilahl_Breech_QuestInProgress_Movement_3
# 72 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 73 "data//maps/FennilahlTown/scripts.pory"
	release
# 74 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 75 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 76 "data//maps/FennilahlTown/scripts.pory"
	applymovement 9, Fennilahl_Breech_QuestInProgress_Movement_4
# 77 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 78 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 79 "data//maps/FennilahlTown/scripts.pory"
	release
# 80 "data//maps/FennilahlTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fennilahl_Breech_QuestInProgress_Movement_5
# 81 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 82 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, Fennilahl_Breech_QuestInProgress_Movement_6
# 83 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 84 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 85 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 86 "data//maps/FennilahlTown/scripts.pory"
	release
# 88 "data//maps/FennilahlTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data//maps/FennilahlTown/scripts.pory"
	removeobject 9
# 90 "data//maps/FennilahlTown/scripts.pory"
	removeobject 5
# 91 "data//maps/FennilahlTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 93 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 94 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 97 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Budew::
# 122 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 124 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 2
	goto_if_eq FennilahlTown_Budew_2
FennilahlTown_Budew_1:
# 128 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 1
	goto_if_eq FennilahlTown_Budew_5
FennilahlTown_Budew_4:
# 132 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 0
	goto_if_eq FennilahlTown_Budew_8
FennilahlTown_Budew_7:
# 137 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_2:
# 125 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_ThirdBerry
	goto FennilahlTown_Budew_1

FennilahlTown_Budew_5:
# 129 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_SecondBerry
	goto FennilahlTown_Budew_4

FennilahlTown_Budew_8:
# 133 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_FirstBerry
	goto FennilahlTown_Budew_7


FennilahlTown_Budew_FirstBerry::
# 143 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 144 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, Fennilahl_Breech_QuestInProgress_Movement_4
# 145 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 146 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_0
# 147 "data//maps/FennilahlTown/scripts.pory"
	release
# 149 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 150 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_2
# 171 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_FirstBerry_1:
# 174 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_FirstBerry_2:
# 151 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_1, MSGBOX_YESNO
# 152 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_5
# 167 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 168 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_FirstBerry_1

FennilahlTown_Budew_FirstBerry_5:
# 153 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_ORAN_BERRY
# 154 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 155 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 156 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 157 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_2, MSGBOX_SIGN
# 158 "data//maps/FennilahlTown/scripts.pory"
	release
# 159 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_FirstBerry_Movement_0
# 160 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 161 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 162 "data//maps/FennilahlTown/scripts.pory"
	release
# 164 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 1
	goto FennilahlTown_Budew_FirstBerry_1


FennilahlTown_Budew_SecondBerry::
# 180 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 181 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_0
# 182 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 183 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_0
# 184 "data//maps/FennilahlTown/scripts.pory"
	release
# 186 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 187 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_2
# 208 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_SecondBerry_1:
# 211 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_SecondBerry_2:
# 188 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_1, MSGBOX_YESNO
# 189 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_5
# 204 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 205 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_SecondBerry_1

FennilahlTown_Budew_SecondBerry_5:
# 190 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_PECHA_BERRY
# 191 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 192 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 193 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 194 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_2, MSGBOX_SIGN
# 195 "data//maps/FennilahlTown/scripts.pory"
	release
# 196 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_1
# 197 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 198 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 199 "data//maps/FennilahlTown/scripts.pory"
	release
# 201 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 2
	goto FennilahlTown_Budew_SecondBerry_1


FennilahlTown_Budew_ThirdBerry::
# 217 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 218 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_0
# 219 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 220 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_0
# 221 "data//maps/FennilahlTown/scripts.pory"
	release
# 223 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 224 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_2
# 247 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_ThirdBerry_1:
# 250 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_ThirdBerry_2:
# 225 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_1, MSGBOX_YESNO
# 226 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_5
# 243 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 244 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_ThirdBerry_1

FennilahlTown_Budew_ThirdBerry_5:
# 227 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 228 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 229 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 230 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 231 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_2, MSGBOX_SIGN
# 232 "data//maps/FennilahlTown/scripts.pory"
	release
# 233 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_1
# 234 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 235 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 236 "data//maps/FennilahlTown/scripts.pory"
	release
# 238 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 3
# 240 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_JoinParty
	goto FennilahlTown_Budew_ThirdBerry_1


FennilahlTown_Budew_JoinParty::
# 255 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_0
# 256 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 257 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 258 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_0
# 259 "data//maps/FennilahlTown/scripts.pory"
	release
# 260 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 261 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_1, MSGBOX_YESNO
# 262 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_JoinParty_2
# 268 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_1
# 269 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 270 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_3
# 271 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_JoinParty_1:
# 274 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_BUDEW_GET
# 275 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 4
# 276 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_JoinParty_2:
# 263 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 264 "data//maps/FennilahlTown/scripts.pory"
	givemon SPECIES_BUDEW, 5
# 265 "data//maps/FennilahlTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 266 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_2
	goto FennilahlTown_Budew_JoinParty_1


# 60 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 60 "data//maps/FennilahlTown/scripts.pory"
	face_down
# 60 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 65 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_1:
# 65 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 65 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 65 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 65 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 65 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
# 65 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_up
	step_end

# 70 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_2:
# 70 "data//maps/FennilahlTown/scripts.pory"
	face_left
	step_end

# 71 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_3:
# 71 "data//maps/FennilahlTown/scripts.pory"
	emote_exclamation_mark
# 71 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 76 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_4:
# 76 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 76 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 76 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 80 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_5:
# 80 "data//maps/FennilahlTown/scripts.pory"
	face_up
	step_end

# 82 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_6:
# 82 "data//maps/FennilahlTown/scripts.pory"
	face_down
	step_end

# 159 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_0:
# 159 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 159 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 159 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 181 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_0:
# 181 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 181 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 196 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_1:
# 196 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 196 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 218 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_0:
# 218 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 233 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_1:
# 233 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 255 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_0:
# 255 "data//maps/FennilahlTown/scripts.pory"
	emote_question_mark
	step_end

# 268 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_1:
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 268 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
	step_end

FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0:
# 4 "data//maps/FennilahlTown/scripts.pory"
	.string "I'm the chauffeur for the detectives in\n"
	.string "charge of the Tenebris disappearance.\l"
	.string "They're in Carabrue Town right now\l"
	.string "speaking to the lab staff.$"

FennilahlTown_EventScript_Man_Text_0:
# 9 "data//maps/FennilahlTown/scripts.pory"
	.string "I was watching the news the other day.\n"
	.string "They say that the Pokemon\l"
	.string "Psychologist has gone missing. Who?\l"
	.string "Professor Tenebris of course!$"

FennilahlTown_EventScript_Woman_Text_0:
# 15 "data//maps/FennilahlTown/scripts.pory"
	.string "If your Pokemon hold a SOOTHE BELL,\n"
	.string "they'll become attached to you faster!$"

FennilahlTown_EventScript_Woman_Text_1:
# 19 "data//maps/FennilahlTown/scripts.pory"
	.string "My, that's such a cute little Pokemon\n"
	.string "you have with you! Here, use this and\l"
	.string "treat it with care, okay?$"

Fennilahl_Breech_StartQuest_Text_0:
# 40 "data//maps/FennilahlTown/scripts.pory"
	.string "I found a STRANGE ROCK in the caves\n"
	.string "south of town, but a small PINK Pokemon\l"
	.string "took it and ran away! And I don't have\l"
	.string "any Pokemon to help me get it back! I\l"
	.string "don't want to battle - I can't deal with\l"
	.string "conflict.\p"
	.string "I don't know what to do! Will you help\n"
	.string "me?$"

Fennilahl_Breech_StartQuest_Text_1:
# 43 "data//maps/FennilahlTown/scripts.pory"
	.string "Amazing! You've answered my prayers. I\n"
	.string "saw the pink Pokemon run down south,\l"
	.string "towards ROUTE 2. I really liked that\l"
	.string "STRANGE ROCK! Please bring it back.$"

Fennilahl_Breech_StartQuest_Text_2:
# 47 "data//maps/FennilahlTown/scripts.pory"
	.string "Oh, what will I do!$"

Fennilahl_Breech_QuestInProgress_Text_0:
# 57 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my STRANGE ROCK? Amazing!\n"
	.string "How can I thank you for this?\p"
	.string "...\p"
	.string "A CLEFAIRY was keeping it? Where'd it\n"
	.string "go?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 68 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!!$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 72 "data//maps/FennilahlTown/scripts.pory"
	.string "This is the CLEFAIRY? It must've been\n"
	.string "following you around because it can't\l"
	.string "let go of the rock!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 78 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!\p"
	.string "Ouch! Clefairy stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my Pokemon okay? I don't\l"
	.string "like battling. You'll be my hiking\l"
	.string "partner!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 85 "data//maps/FennilahlTown/scripts.pory"
	.string "BREECH: Thank you trainer! My name is\n"
	.string "Breech. I'm just a simple man who loves\l"
	.string "collecting rocks. Even with Clefairy by\l"
	.string "my side, I won't battle. Clefairy and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 99 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Budew_FirstBerry_Text_0:
# 146 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something...$"

FennilahlTown_Budew_FirstBerry_Text_1:
# 151 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW an ORAN BERRY?$"

FennilahlTown_Budew_FirstBerry_Text_2:
# 157 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW an ORAN BERRY.$"

FennilahlTown_Budew_FirstBerry_Text_3:
# 161 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems happy!$"

FennilahlTown_Budew_FirstBerry_Text_4:
# 167 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems disappointed...$"

FennilahlTown_Budew_SecondBerry_Text_0:
# 183 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something\n"
	.string "again...but not an ORAN BERRY.$"

FennilahlTown_Budew_SecondBerry_Text_1:
# 188 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a PECHA BERRY?$"

FennilahlTown_Budew_SecondBerry_Text_2:
# 194 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a PECHA BERRY.$"

FennilahlTown_Budew_ThirdBerry_Text_0:
# 220 "data//maps/FennilahlTown/scripts.pory"
	.string "What could BUDEW want now?$"

FennilahlTown_Budew_ThirdBerry_Text_1:
# 225 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a RAWST BERRY?$"

FennilahlTown_Budew_ThirdBerry_Text_2:
# 231 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a RAWST BERRY.$"

FennilahlTown_Budew_JoinParty_Text_0:
# 258 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW is looking at the Pokeballs on\n"
	.string "your belt curiously...$"

FennilahlTown_Budew_JoinParty_Text_1:
# 261 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW nudges the Pokeballs on your\n"
	.string "belt. It seems to want to join your\l"
	.string "party! Will you become BUDEW's trainer?$"

FennilahlTown_Budew_JoinParty_Text_2:
# 266 "data//maps/FennilahlTown/scripts.pory"
	.string "The BUDEW has joined your party!\p"
	.string "Welcome, BUDEW! Let's get along well\n"
	.string "together!$"

FennilahlTown_Budew_JoinParty_Text_3:
# 270 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW ran off...$"
