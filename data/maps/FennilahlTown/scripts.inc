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
# 79 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
Fennilahl_Breech_QuestInProgress_1:
# 81 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 61 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 62 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_1
# 63 "data//maps/FennilahlTown/scripts.pory"
	release
# 64 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 65 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 66 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 67 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 68 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 69 "data//maps/FennilahlTown/scripts.pory"
	release
# 70 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, Fennilahl_Breech_QuestInProgress_Movement_0
# 71 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 72 "data//maps/FennilahlTown/scripts.pory"
	removeobject 5
# 73 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 74 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 77 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Budew::
# 102 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 104 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 2
	goto_if_eq FennilahlTown_Budew_2
FennilahlTown_Budew_1:
# 108 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 1
	goto_if_eq FennilahlTown_Budew_5
FennilahlTown_Budew_4:
# 112 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_FENNILAHL_BUDEW, 0
	goto_if_eq FennilahlTown_Budew_8
FennilahlTown_Budew_7:
# 117 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_2:
# 105 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_ThirdBerry
	goto FennilahlTown_Budew_1

FennilahlTown_Budew_5:
# 109 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_SecondBerry
	goto FennilahlTown_Budew_4

FennilahlTown_Budew_8:
# 113 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_FirstBerry
	goto FennilahlTown_Budew_7


FennilahlTown_Budew_FirstBerry::
# 123 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 124 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_FirstBerry_Movement_0
# 125 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 126 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_0
# 127 "data//maps/FennilahlTown/scripts.pory"
	release
# 129 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 130 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_2
# 151 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_FirstBerry_1:
# 154 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_FirstBerry_2:
# 131 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_1, MSGBOX_YESNO
# 132 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_FirstBerry_5
# 147 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 148 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_FirstBerry_1

FennilahlTown_Budew_FirstBerry_5:
# 133 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_ORAN_BERRY
# 134 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 135 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 136 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 137 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_2, MSGBOX_SIGN
# 138 "data//maps/FennilahlTown/scripts.pory"
	release
# 139 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_FirstBerry_Movement_1
# 140 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 141 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 142 "data//maps/FennilahlTown/scripts.pory"
	release
# 144 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 1
	goto FennilahlTown_Budew_FirstBerry_1


FennilahlTown_Budew_SecondBerry::
# 160 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 161 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_0
# 162 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 163 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_0
# 164 "data//maps/FennilahlTown/scripts.pory"
	release
# 166 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 167 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_2
# 188 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_SecondBerry_1:
# 191 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_SecondBerry_2:
# 168 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_1, MSGBOX_YESNO
# 169 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_SecondBerry_5
# 184 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 185 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_SecondBerry_1

FennilahlTown_Budew_SecondBerry_5:
# 170 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_PECHA_BERRY
# 171 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 172 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 173 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 174 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_SecondBerry_Text_2, MSGBOX_SIGN
# 175 "data//maps/FennilahlTown/scripts.pory"
	release
# 176 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_SecondBerry_Movement_1
# 177 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 178 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 179 "data//maps/FennilahlTown/scripts.pory"
	release
# 181 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 2
	goto FennilahlTown_Budew_SecondBerry_1


FennilahlTown_Budew_ThirdBerry::
# 197 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 198 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_0
# 199 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 200 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_0
# 201 "data//maps/FennilahlTown/scripts.pory"
	release
# 203 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 204 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_2
# 227 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_ThirdBerry_1:
# 230 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_ThirdBerry_2:
# 205 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_1, MSGBOX_YESNO
# 206 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_ThirdBerry_5
# 223 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_4
# 224 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_ThirdBerry_1

FennilahlTown_Budew_ThirdBerry_5:
# 207 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 208 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 209 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 210 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 211 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_ThirdBerry_Text_2, MSGBOX_SIGN
# 212 "data//maps/FennilahlTown/scripts.pory"
	release
# 213 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_ThirdBerry_Movement_1
# 214 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 215 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_FirstBerry_Text_3
# 216 "data//maps/FennilahlTown/scripts.pory"
	release
# 218 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 3
# 220 "data//maps/FennilahlTown/scripts.pory"
	goto FennilahlTown_Budew_JoinParty
	goto FennilahlTown_Budew_ThirdBerry_1


FennilahlTown_Budew_JoinParty::
# 235 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_0
# 236 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 237 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 238 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_0
# 239 "data//maps/FennilahlTown/scripts.pory"
	release
# 240 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 241 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_1, MSGBOX_YESNO
# 242 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_JoinParty_2
# 248 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_JoinParty_Movement_1
# 249 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 250 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_3
# 251 "data//maps/FennilahlTown/scripts.pory"
	release
FennilahlTown_Budew_JoinParty_1:
# 254 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_BUDEW_GET
# 255 "data//maps/FennilahlTown/scripts.pory"
	setvar VAR_FENNILAHL_BUDEW, 4
# 256 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_JoinParty_2:
# 243 "data//maps/FennilahlTown/scripts.pory"
	removeobject 8
# 244 "data//maps/FennilahlTown/scripts.pory"
	givemon SPECIES_BUDEW, 5
# 245 "data//maps/FennilahlTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_JoinParty_Text_2
	goto FennilahlTown_Budew_JoinParty_1


# 70 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 70 "data//maps/FennilahlTown/scripts.pory"
	walk_up
	step_end

# 124 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_0:
# 124 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 124 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 124 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 139 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_FirstBerry_Movement_1:
# 139 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 139 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 139 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 161 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_0:
# 161 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 161 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 176 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_SecondBerry_Movement_1:
# 176 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 176 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 198 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_0:
# 198 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 213 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_ThirdBerry_Movement_1:
# 213 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
	step_end

# 235 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_0:
# 235 "data//maps/FennilahlTown/scripts.pory"
	emote_question_mark
	step_end

# 248 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_JoinParty_Movement_1:
# 248 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 248 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 248 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 248 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 248 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 248 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_right
# 248 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 248 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 248 "data//maps/FennilahlTown/scripts.pory"
	walk_fast_down
# 248 "data//maps/FennilahlTown/scripts.pory"
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
	.string "How can I thank you for this?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 62 "data//maps/FennilahlTown/scripts.pory"
	.string "A CLEFAIRY was keeping it? This is the\n"
	.string "CLEFAIRY? And it's been following you\l"
	.string "around because it can't let go of the\l"
	.string "rock?$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 66 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 67 "data//maps/FennilahlTown/scripts.pory"
	.string "Ouch! CLEFAIRY stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my {PKMN} okay? I don't like\l"
	.string "battling. You'll be my hiking partner!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 68 "data//maps/FennilahlTown/scripts.pory"
	.string "Thank you trainer! My name is BREECH.\n"
	.string "I'm just a simple man who loves\l"
	.string "collecting rocks. Even with CLEFAIRY by\l"
	.string "my side, I won't battle. CLEFAIRY and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 79 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Budew_FirstBerry_Text_0:
# 126 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something...$"

FennilahlTown_Budew_FirstBerry_Text_1:
# 131 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW an ORAN BERRY?$"

FennilahlTown_Budew_FirstBerry_Text_2:
# 137 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW an ORAN BERRY.$"

FennilahlTown_Budew_FirstBerry_Text_3:
# 141 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems happy!$"

FennilahlTown_Budew_FirstBerry_Text_4:
# 147 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems disappointed...$"

FennilahlTown_Budew_SecondBerry_Text_0:
# 163 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something\n"
	.string "again...but not an ORAN BERRY.$"

FennilahlTown_Budew_SecondBerry_Text_1:
# 168 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a PECHA BERRY?$"

FennilahlTown_Budew_SecondBerry_Text_2:
# 174 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a PECHA BERRY.$"

FennilahlTown_Budew_ThirdBerry_Text_0:
# 200 "data//maps/FennilahlTown/scripts.pory"
	.string "What could BUDEW want now?$"

FennilahlTown_Budew_ThirdBerry_Text_1:
# 205 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW a RAWST BERRY?$"

FennilahlTown_Budew_ThirdBerry_Text_2:
# 211 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW a RAWST BERRY.$"

FennilahlTown_Budew_JoinParty_Text_0:
# 238 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW is looking at the Pokeballs on\n"
	.string "your belt curiously...$"

FennilahlTown_Budew_JoinParty_Text_1:
# 241 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW nudges the Pokeballs on your\n"
	.string "belt. It seems to want to join your\l"
	.string "party! Will you become BUDEW's trainer?$"

FennilahlTown_Budew_JoinParty_Text_2:
# 246 "data//maps/FennilahlTown/scripts.pory"
	.string "The BUDEW has joined your party!\p"
	.string "Welcome, BUDEW! Let's get along well\n"
	.string "together!$"

FennilahlTown_Budew_JoinParty_Text_3:
# 250 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW ran off...$"
