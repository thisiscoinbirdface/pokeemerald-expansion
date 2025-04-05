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
	warp MAP_ANCIENT_MIRROH_TOWER_4F, 4, 11
# 15 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Man_Text_0
# 16 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return


FennilahlTown_EventScript_Woman::
# 20 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 21 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 22 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_CUTEMONGIFT, FennilahlTown_EventScript_Woman_2
# 25 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_1
# 26 "data//maps/FennilahlTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 27 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_CUTEMONGIFT
FennilahlTown_EventScript_Woman_1:
# 29 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return

FennilahlTown_EventScript_Woman_2:
# 23 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0
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
# 80 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
Fennilahl_Breech_QuestInProgress_1:
# 82 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 62 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 63 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_1
# 64 "data//maps/FennilahlTown/scripts.pory"
	release
# 65 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 66 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 67 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 68 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 69 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 70 "data//maps/FennilahlTown/scripts.pory"
	release
# 71 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, Fennilahl_Breech_QuestInProgress_Movement_0
# 72 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 73 "data//maps/FennilahlTown/scripts.pory"
	removeobject 5
# 74 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 75 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 78 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Budew::
# 103 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 105 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 2
	goto_if_eq FennilahlTown_Budew_2
FennilahlTown_Budew_1:
# 109 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 1
	goto_if_eq FennilahlTown_Budew_5
FennilahlTown_Budew_4:
# 113 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 0
	goto_if_eq FennilahlTown_Budew_8
FennilahlTown_Budew_7:
# 118 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_2:
# 106 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_ThirdBerry
	goto FennilahlTown_Budew_1

FennilahlTown_Budew_5:
# 110 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_SecondBerry
	goto FennilahlTown_Budew_4

FennilahlTown_Budew_8:
# 114 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_FirstBerry
	goto FennilahlTown_Budew_7


FennilahlTown_Budew_FirstBerry::
# 124 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 125 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_FirstBerry_Movement_0
# 126 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 127 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_0
# 128 "data//maps/FennilahlTown/scripts.pory"
	release
# 130 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 131 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_2
# 152 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_FirstBerry_1:
# 155 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_FirstBerry_2:
# 132 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_1, MSGBOX_YESNO
# 133 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_5
# 148 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 149 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_FirstBerry_1

FennilahlTown_Budew_FirstBerry_5:
# 134 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_ORAN_BERRY
# 135 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 136 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 137 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 138 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_2, MSGBOX_SIGN
# 139 "data//maps/FennilahlTown/scripts.pory"
	release
# 140 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_FirstBerry_Movement_1
# 141 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 142 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 143 "data//maps/FennilahlTown/scripts.pory"
	release
# 145 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 1
	goto FennilahlTown_Budew_FirstBerry_1


FennilahlTown_Budew_SecondBerry::
# 161 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 162 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_0
# 163 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 164 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_0
# 165 "data//maps/FennilahlTown/scripts.pory"
	release
# 167 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 168 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_2
# 189 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_SecondBerry_1:
# 192 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_SecondBerry_2:
# 169 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_1, MSGBOX_YESNO
# 170 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_5
# 185 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 186 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_SecondBerry_1

FennilahlTown_Budew_SecondBerry_5:
# 171 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_PECHA_BERRY
# 172 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 173 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 174 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 175 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_2, MSGBOX_SIGN
# 176 "data//maps/FennilahlTown/scripts.pory"
	release
# 177 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_1
# 178 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 179 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 180 "data//maps/FennilahlTown/scripts.pory"
	release
# 182 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 2
	goto FennilahlTown_Budew_SecondBerry_1


FennilahlTown_Budew_ThirdBerry::
# 198 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 199 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_0
# 200 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 201 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_0
# 202 "data//maps/FennilahlTown/scripts.pory"
	release
# 204 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 205 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_2
# 228 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_ThirdBerry_1:
# 231 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_ThirdBerry_2:
# 206 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_1, MSGBOX_YESNO
# 207 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_5
# 224 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 225 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_ThirdBerry_1

FennilahlTown_Budew_ThirdBerry_5:
# 208 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 209 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 210 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 211 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 212 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_2, MSGBOX_SIGN
# 213 "data//maps/FennilahlTown/scripts.pory"
	release
# 214 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_1
# 215 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 216 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 217 "data//maps/FennilahlTown/scripts.pory"
	release
# 219 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 3
# 221 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_JoinParty
	goto FennilahlTown_Budew_ThirdBerry_1


FennilahlTown_Budew_JoinParty::
# 236 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_0
# 237 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 238 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 239 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_0
# 240 "data//maps/FennilahlTown/scripts.pory"
	release
# 241 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 242 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_1, MSGBOX_YESNO
# 243 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_JoinParty_2
# 249 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_1
# 250 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 251 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_3
# 252 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_JoinParty_1:
# 255 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_BUDEW_GET
# 256 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 4
# 257 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_JoinParty_2:
# 244 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 245 "data//maps/FennilahlTown/scripts.pory"
	givemon SPECIES_BUDEW, 5
# 246 "data//maps/FennilahlTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 247 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_2
	goto FennilahlTown_Budew_JoinParty_1


# 71 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 71 "data//maps/FennilahlTown/scripts.pory"
	walk_up
	step_end

# 125 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_0:
# 125 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 125 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 125 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 140 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_1:
# 140 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 140 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 140 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 162 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_0:
# 162 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 162 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 177 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_1:
# 177 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 177 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 199 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_0:
# 199 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 214 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_1:
# 214 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 236 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_0:
# 236 "data//maps/FennilahlTown/scripts.pory"
	emote_question_mark
	step_end

# 249 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_1:
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 249 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
	step_end

FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0:
# 6 "data//maps/FennilahlTown/scripts.pory"
	.string "I'm the chauffeur for the detectives in\n"
	.string "charge of the Tenebris disappearance.\l"
	.string "They're in Carabrue Town right now\l"
	.string "speaking to the lab staff.$"

FennilahlTown_EventScript_Man_Text_0:
# 15 "data//maps/FennilahlTown/scripts.pory"
	.string "I was watching the news the other day.\n"
	.string "They say that the Pokemon\l"
	.string "Psychologist has gone missing. Who?\l"
	.string "Professor Tenebris of course!$"

FennilahlTown_EventScript_Woman_Text_0:
# 23 "data//maps/FennilahlTown/scripts.pory"
	.string "If your {PKMN} hold a SOOTHE BELL, they'll\n"
	.string "become attached to you faster!$"

FennilahlTown_EventScript_Woman_Text_1:
# 25 "data//maps/FennilahlTown/scripts.pory"
	.string "My, that's such a cute little {PKMN} you\n"
	.string "have with you! Here, use this and treat\l"
	.string "it with care, okay?$"

Fennilahl_Breech_StartQuest_Text_0:
# 45 "data//maps/FennilahlTown/scripts.pory"
	.string "I found a STRANGE ROCK in the caves\n"
	.string "south of town, but a small PINK {PKMN} took\l"
	.string "it and ran away! And I don't have any\l"
	.string "{PKMN} to help me get it back! I don't want\l"
	.string "to battle - I can't deal with conflict.\p"
	.string "I don't know what to do! Will you help me\n"
	.string "out?$"

Fennilahl_Breech_StartQuest_Text_1:
# 48 "data//maps/FennilahlTown/scripts.pory"
	.string "Amazing! You've answered my prayers. I\n"
	.string "saw the pink {PKMN} run down south,\l"
	.string "towards ROUTE 2. I really liked that\l"
	.string "STRANGE ROCK! Please bring it back.$"

Fennilahl_Breech_StartQuest_Text_2:
# 52 "data//maps/FennilahlTown/scripts.pory"
	.string "Oh, what will I do!$"

Fennilahl_Breech_QuestInProgress_Text_0:
# 62 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my STRANGE ROCK? Amazing!\n"
	.string "How can I thank you for this?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 63 "data//maps/FennilahlTown/scripts.pory"
	.string "A CLEFAIRY was keeping it? This is the\n"
	.string "CLEFAIRY? And it's been following you\l"
	.string "around because it can't let go of the\l"
	.string "rock?$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 67 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 68 "data//maps/FennilahlTown/scripts.pory"
	.string "Ouch! CLEFAIRY stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my {PKMN} okay? I don't like\l"
	.string "battling. You'll be my hiking partner!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 69 "data//maps/FennilahlTown/scripts.pory"
	.string "Thank you trainer! My name is BREECH.\n"
	.string "I'm just a simple man who loves\l"
	.string "collecting rocks. Even with CLEFAIRY by\l"
	.string "my side, I won't battle. CLEFAIRY and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 80 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Budew_FirstBerry_Text_0:
# 127 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something...$"

FennilahlTown_Budew_FirstBerry_Text_1:
# 132 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW an ORAN BERRY?$"

FennilahlTown_Budew_FirstBerry_Text_2:
# 138 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW an ORAN BERRY.$"

FennilahlTown_Budew_FirstBerry_Text_3:
# 142 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems happy!$"

FennilahlTown_Budew_FirstBerry_Text_4:
# 148 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems disappointed...$"

FennilahlTown_Budew_SecondBerry_Text_0:
# 164 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something\n"
	.string "again...but not an ORAN BERRY.$"

FennilahlTown_Budew_SecondBerry_Text_1:
# 169 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a PECHA BERRY?$"

FennilahlTown_Budew_SecondBerry_Text_2:
# 175 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a PECHA BERRY.$"

FennilahlTown_Budew_ThirdBerry_Text_0:
# 201 "data//maps/FennilahlTown/scripts.pory"
	.string "What could BUDEW want now?$"

FennilahlTown_Budew_ThirdBerry_Text_1:
# 206 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a RAWST BERRY?$"

FennilahlTown_Budew_ThirdBerry_Text_2:
# 212 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a RAWST BERRY.$"

FennilahlTown_Budew_JoinParty_Text_0:
# 239 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW is looking at the Pokeballs on\n"
	.string "your belt curiously...$"

FennilahlTown_Budew_JoinParty_Text_1:
# 242 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW nudges the Pokeballs on your\n"
	.string "belt. It seems to want to join your\l"
	.string "party! Will you become BUDEW's trainer?$"

FennilahlTown_Budew_JoinParty_Text_2:
# 247 "data//maps/FennilahlTown/scripts.pory"
	.string "The BUDEW has joined your party!\p"
	.string "Welcome, BUDEW! Let's get along well\n"
	.string "together!$"

FennilahlTown_Budew_JoinParty_Text_3:
# 251 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW ran off...$"
