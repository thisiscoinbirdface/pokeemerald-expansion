# 1 "data//maps/IvyRiver/scripts.pory"

# 2 "data//maps/IvyRiver/scripts.pory"
    .set LOCALID_DR_FR, 7
# 3 "data//maps/IvyRiver/scripts.pory"
    .set LOCALID_DR_SC, 6
# 4 "data//maps/IvyRiver/scripts.pory"
    .set LOCALID_DR_TH, 2   
# 5 "data//maps/IvyRiver/scripts.pory"
    .set LOCALID_LAP, 1

IvyRiver_MapScripts::
	.byte 0


LilyPond_Dreepy_Trigger_First::
# 22 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_LILYPOND_DREEPY_FIRST, LilyPond_Dreepy_Trigger_First_2
# 24 "data//maps/IvyRiver/scripts.pory"
	lockall
# 25 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 26 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_FR, LilyPond_Dreepy_Trigger_First_Movement_0
# 27 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 29 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 30 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_FR, LilyPond_Dreepy_Trigger_First_Movement_1
# 31 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 32 "data//maps/IvyRiver/scripts.pory"
	delay 40
# 34 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_FR, LilyPond_Dreepy_Trigger_First_Movement_2
# 35 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 36 "data//maps/IvyRiver/scripts.pory"
	removeobject LOCALID_DR_FR
# 38 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_DREEPY_FIRST
	return

LilyPond_Dreepy_Trigger_First_2:
	end


LilyPond_Dreepy_Trigger_Second::
# 42 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_LILYPOND_DREEPY_SECOND, LilyPond_Dreepy_Trigger_Second_2
# 44 "data//maps/IvyRiver/scripts.pory"
	lockall
# 45 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 46 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_0
# 47 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 49 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 50 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_1
# 51 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 52 "data//maps/IvyRiver/scripts.pory"
	delay 40
# 54 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_2
# 55 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 56 "data//maps/IvyRiver/scripts.pory"
	removeobject LOCALID_DR_SC
# 58 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_DREEPY_SECOND
	return

LilyPond_Dreepy_Trigger_Second_2:
	end


LilyPond_Dreepy_Trigger_Third::
# 62 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_LILYPOND_DREEPY_THIRD, LilyPond_Dreepy_Trigger_Third_2
# 64 "data//maps/IvyRiver/scripts.pory"
	lockall
# 65 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 67 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 68 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_TH, LilyPond_Dreepy_Trigger_Third_Movement_0
# 69 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 70 "data//maps/IvyRiver/scripts.pory"
	delay 40
# 72 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_TH, LilyPond_Dreepy_Trigger_Second_Movement_2
# 73 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 74 "data//maps/IvyRiver/scripts.pory"
	removeobject LOCALID_DR_TH
# 76 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_DREEPY_THIRD
	return

LilyPond_Dreepy_Trigger_Third_2:
	end


LilyPond_Cave_Dreepy::
# 80 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 81 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Dreepy_Text_0, MSGBOX_NPC
	end


LilyPond_Cave_Drakloak::
# 85 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DRAKLOAK, CRY_MODE_NORMAL
# 86 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Drakloak_Text_0, MSGBOX_NPC
	end


LilyPond_Cave_Dragapult::
# 90 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DRAGAPULT, CRY_MODE_NORMAL
# 91 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Dragapult_Text_0, MSGBOX_NPC
	end


LilyPond_Cave_Blastoise::
# 96 "data//maps/IvyRiver/scripts.pory"
	lockall
# 97 "data//maps/IvyRiver/scripts.pory"
	faceplayer
# 98 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_NORMAL
# 99 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Blastoise_Text_0, MSGBOX_NPC
# 100 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 101 "data//maps/IvyRiver/scripts.pory"
	checkitem ITEM_HYPER_POTION
# 102 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Cave_Blastoise_2
# 104 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Blastoise_Text_1, MSGBOX_YESNO
# 105 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Cave_Blastoise_5
# 107 "data//maps/IvyRiver/scripts.pory"
	playse SE_USE_ITEM
# 108 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Blastoise_Text_2
# 109 "data//maps/IvyRiver/scripts.pory"
	release
# 110 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 111 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_NORMAL
# 112 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Blastoise_Text_3
# 113 "data//maps/IvyRiver/scripts.pory"
	release
# 116 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_0
# 117 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Cave_Blastoise_Movement_0
# 118 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Cave_Blastoise_Movement_0
# 119 "data//maps/IvyRiver/scripts.pory"
	applymovement 6, LilyPond_Cave_Blastoise_Movement_0
# 120 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 121 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 122 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Cave_Blastoise_Movement_1
# 123 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 124 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Cave_Blastoise_Movement_2
# 125 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_3
# 126 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Cave_Blastoise_Movement_4
# 127 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Cave_Blastoise_Movement_4
# 128 "data//maps/IvyRiver/scripts.pory"
	applymovement 6, LilyPond_Cave_Blastoise_Movement_4
# 129 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 131 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 132 "data//maps/IvyRiver/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPond_Cave_Blastoise_Movement_5
# 133 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_6
# 134 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 136 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 138 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 139 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_7
# 140 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Blastoise_Text_4
# 141 "data//maps/IvyRiver/scripts.pory"
	release
# 142 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 143 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_8
# 144 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 146 "data//maps/IvyRiver/scripts.pory"
	removeobject 1
# 147 "data//maps/IvyRiver/scripts.pory"
	removeobject 3
# 148 "data//maps/IvyRiver/scripts.pory"
	removeobject 4
# 149 "data//maps/IvyRiver/scripts.pory"
	removeobject 5
# 150 "data//maps/IvyRiver/scripts.pory"
	removeobject 6
# 152 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_LAPRAS
# 154 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Cave_Blastoise_2:
	end

LilyPond_Cave_Blastoise_5:
	end


LilyPond_Cave_Lapras_Encounter::
# 159 "data//maps/IvyRiver/scripts.pory"
	lockall
# 161 "data//maps/IvyRiver/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 163 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Cave_Lapras_Encounter_2
# 172 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_1, MSGBOX_YESNO
# 174 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilyPond_Cave_Lapras_Encounter_5
# 206 "data//maps/IvyRiver/scripts.pory"
	release
LilyPond_Cave_Lapras_Encounter_4:
# 208 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Cave_Lapras_Encounter_2:
# 164 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_0
# 165 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Cave_Lapras_Encounter_5:
# 175 "data//maps/IvyRiver/scripts.pory"
	fadeoutbgm 1
# 176 "data//maps/IvyRiver/scripts.pory"
	playse MUS_RG_POKE_FLUTE
# 177 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_2
# 178 "data//maps/IvyRiver/scripts.pory"
	delay 128
# 179 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_3
# 180 "data//maps/IvyRiver/scripts.pory"
	release
# 181 "data//maps/IvyRiver/scripts.pory"
	applymovement 7, LilyPond_Cave_Blastoise_Movement_0
# 182 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 183 "data//maps/IvyRiver/scripts.pory"
	delay 30
# 184 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
# 185 "data//maps/IvyRiver/scripts.pory"
	applymovement 7, LilyPond_Cave_Lapras_Encounter_Movement_0
# 186 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 187 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_4
# 188 "data//maps/IvyRiver/scripts.pory"
	setwildbattle SPECIES_BLASTOISE, 48
# 189 "data//maps/IvyRiver/scripts.pory"
	dowildbattle
# 192 "data//maps/IvyRiver/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 193 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LilyPond_Cave_Lapras_Encounter_9
LilyPond_Cave_Lapras_Encounter_8:
# 197 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LilyPond_Cave_Lapras_Encounter_12
LilyPond_Cave_Lapras_Encounter_11:
# 201 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LilyPond_Cave_Lapras_Encounter_14
	goto LilyPond_Cave_Lapras_Encounter_4

LilyPond_Cave_Lapras_Encounter_9:
# 194 "data//maps/IvyRiver/scripts.pory"
	removeobject 7
# 195 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_LAPRAS_ENCOUNTER
	goto LilyPond_Cave_Lapras_Encounter_8

LilyPond_Cave_Lapras_Encounter_12:
# 198 "data//maps/IvyRiver/scripts.pory"
	removeobject 7
# 199 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_LAPRAS_ENCOUNTER
	goto LilyPond_Cave_Lapras_Encounter_11

LilyPond_Cave_Lapras_Encounter_14:
# 202 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_5
# 203 "data//maps/IvyRiver/scripts.pory"
	release
	goto LilyPond_Cave_Lapras_Encounter_4


LilyPond_Fisherman_A::
# 238 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 0
	goto_if_eq LilyPond_Fisherman_A_2
# 243 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 1
	goto_if_eq LilyPond_Fisherman_A_5
LilyPond_Fisherman_A_4:
# 244 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 2
	goto_if_eq LilyPond_Fisherman_A_7
	return

LilyPond_Fisherman_A_2:
# 239 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_Text_0, MSGBOX_NPC
	end

LilyPond_Fisherman_A_5:
# 243 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_A_QuestScript
	goto LilyPond_Fisherman_A_4

LilyPond_Fisherman_A_7:
# 244 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_A_QuestScript
	return


LilyPond_Fisherman_A_QuestScript::
# 248 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_Text_0, MSGBOX_NPC
# 249 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Fisherman_A_QuestScript_Movement_0
# 250 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 251 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 252 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_QuestScript_Text_0
# 253 "data//maps/IvyRiver/scripts.pory"
	release
# 254 "data//maps/IvyRiver/scripts.pory"
	addvar VAR_LILYPOND_FISHERMAN_QUEST, 1
# 255 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_A_LETTER
# 258 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Fisherman_A_QuestScript_Movement_1
# 259 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 260 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 261 "data//maps/IvyRiver/scripts.pory"
	removeobject 1
# 263 "data//maps/IvyRiver/scripts.pory"
	applymovement 2, LilyPond_Fisherman_A_QuestScript_Movement_2
# 264 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 265 "data//maps/IvyRiver/scripts.pory"
	removeobject 2
	end


LilyPond_Fisherman_B::
# 272 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 0
	goto_if_eq LilyPond_Fisherman_B_2
# 277 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 1
	goto_if_eq LilyPond_Fisherman_B_5
LilyPond_Fisherman_B_4:
# 278 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 2
	goto_if_eq LilyPond_Fisherman_B_7
	return

LilyPond_Fisherman_B_2:
# 273 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_Text_0, MSGBOX_NPC
	end

LilyPond_Fisherman_B_5:
# 277 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_B_QuestScript
	goto LilyPond_Fisherman_B_4

LilyPond_Fisherman_B_7:
# 278 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_B_QuestScript
	return


LilyPond_Fisherman_B_QuestScript::
# 282 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_Text_0, MSGBOX_NPC
# 283 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Fisherman_A_QuestScript_Movement_0
# 284 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 285 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 286 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_QuestScript_Text_0
# 287 "data//maps/IvyRiver/scripts.pory"
	release
# 288 "data//maps/IvyRiver/scripts.pory"
	addvar VAR_LILYPOND_FISHERMAN_QUEST, 1
# 289 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_B_LETTER
# 292 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Fisherman_A_QuestScript_Movement_1
# 293 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 294 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 295 "data//maps/IvyRiver/scripts.pory"
	removeobject 3
# 297 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Fisherman_B_QuestScript_Movement_0
# 298 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 299 "data//maps/IvyRiver/scripts.pory"
	removeobject 5
	end


LilyPond_Fisherman_C::
# 306 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 3
	goto_if_eq LilyPond_Fisherman_C_2
# 331 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 2
	goto_if_eq LilyPond_Fisherman_C_5
# 337 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 1
	goto_if_eq LilyPond_Fisherman_C_8
# 344 "data//maps/IvyRiver/scripts.pory"
	lockall
# 345 "data//maps/IvyRiver/scripts.pory"
	faceplayer
# 346 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_2, MSGBOX_YESNO
# 348 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Fisherman_C_11
# 353 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_4
# 354 "data//maps/IvyRiver/scripts.pory"
	release
# 355 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 356 "data//maps/IvyRiver/scripts.pory"
	message LilyPond_Fisherman_C_Text_5
# 357 "data//maps/IvyRiver/scripts.pory"
	waitmessage
# 358 "data//maps/IvyRiver/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LilyPond_Fisherman_C_Text_6, LilyPond_Fisherman_C_Text_7, LilyPond_Fisherman_C_Text_8
# 360 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Fisherman_C_14
# 364 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilyPond_Fisherman_C_17
# 369 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_11
# 370 "data//maps/IvyRiver/scripts.pory"
	release
# 371 "data//maps/IvyRiver/scripts.pory"
	giveitem ITEM_FISHERMAN_LETTER
# 372 "data//maps/IvyRiver/scripts.pory"
	startquest QUEST_LILYPOND_FISHERMAN
# 373 "data//maps/IvyRiver/scripts.pory"
	setvar VAR_LILYPOND_FISHERMAN_QUEST, 1
# 375 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Fisherman_C_2:
# 307 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_0
# 308 "data//maps/IvyRiver/scripts.pory"
	release
# 309 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 311 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Fisherman_C_Movement_0
# 312 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 313 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 314 "data//maps/IvyRiver/scripts.pory"
	removeobject 4
# 316 "data//maps/IvyRiver/scripts.pory"
	applymovement 8, LilyPond_Fisherman_C_Movement_1
# 317 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 318 "data//maps/IvyRiver/scripts.pory"
	removeobject 8
# 321 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_QUEST_START
# 322 "data//maps/IvyRiver/scripts.pory"
	setvar VAR_LILYPOND_FISHERMAN_QUEST, 4
# 325 "data//maps/IvyRiver/scripts.pory"
	clearflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 327 "data//maps/IvyRiver/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LILYPOND_FISHERMAN, SUB_QUEST_1
	end

LilyPond_Fisherman_C_5:
# 332 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_1, MSGBOX_NPC
	end

LilyPond_Fisherman_C_8:
# 338 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_1, MSGBOX_NPC
	end

LilyPond_Fisherman_C_11:
# 349 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_3, MSGBOX_NPC
	end

LilyPond_Fisherman_C_14:
# 361 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_9, MSGBOX_NPC
	end

LilyPond_Fisherman_C_17:
# 365 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_10, MSGBOX_NPC
	end


IvyRiver_Ranger_Blocker::
# 382 "data//maps/IvyRiver/scripts.pory"
	msgbox IvyRiver_Ranger_Blocker_Text_0, MSGBOX_NPC
	end


# 26 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_First_Movement_0:
# 26 "data//maps/IvyRiver/scripts.pory"
	face_left
# 26 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 30 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_First_Movement_1:
# 30 "data//maps/IvyRiver/scripts.pory"
	walk_fast_left
# 30 "data//maps/IvyRiver/scripts.pory"
	walk_fast_left
# 30 "data//maps/IvyRiver/scripts.pory"
	walk_fast_left
# 30 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 30 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 30 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 30 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
	step_end

# 34 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_First_Movement_2:
# 34 "data//maps/IvyRiver/scripts.pory"
	walk_fast_right
# 34 "data//maps/IvyRiver/scripts.pory"
	walk_fast_right
# 34 "data//maps/IvyRiver/scripts.pory"
	walk_fast_right
# 34 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 34 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 34 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 34 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 34 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 34 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end

# 46 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_0:
# 46 "data//maps/IvyRiver/scripts.pory"
	face_down
# 46 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 50 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_1:
# 50 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 50 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 50 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 50 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 50 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 50 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 50 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
	step_end

# 54 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_2:
# 54 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 54 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 54 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 54 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 54 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 54 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 54 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
	step_end

# 68 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Third_Movement_0:
# 68 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 68 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 68 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_down
# 68 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 68 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_down
# 68 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_down
	step_end

# 116 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_0:
# 116 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 122 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_1:
# 122 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 122 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 124 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_2:
# 124 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 124 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 124 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 124 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 124 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 125 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_3:
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 126 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_4:
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 132 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_5:
# 132 "data//maps/IvyRiver/scripts.pory"
	face_down
	step_end

# 133 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_6:
# 133 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 133 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 133 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 139 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_7:
# 139 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 139 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_up
	step_end

# 143 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_8:
# 143 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 143 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 143 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 143 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end

# 185 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Encounter_Movement_0:
# 185 "data//maps/IvyRiver/scripts.pory"
	walk_fast_left
# 185 "data//maps/IvyRiver/scripts.pory"
	walk_fast_right
# 185 "data//maps/IvyRiver/scripts.pory"
	walk_fast_right
# 185 "data//maps/IvyRiver/scripts.pory"
	walk_fast_left
# 185 "data//maps/IvyRiver/scripts.pory"
	walk_fast_left
# 185 "data//maps/IvyRiver/scripts.pory"
	walk_fast_right
# 185 "data//maps/IvyRiver/scripts.pory"
	face_down
	step_end

# 249 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_A_QuestScript_Movement_0:
# 249 "data//maps/IvyRiver/scripts.pory"
	emote_question_mark
	step_end

# 258 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_A_QuestScript_Movement_1:
# 258 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 258 "data//maps/IvyRiver/scripts.pory"
	face_up
	step_end

# 263 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_A_QuestScript_Movement_2:
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 263 "data//maps/IvyRiver/scripts.pory"
	walk_right
	step_end

# 297 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_B_QuestScript_Movement_0:
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 297 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 311 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_C_Movement_0:
# 311 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 311 "data//maps/IvyRiver/scripts.pory"
	face_down
	step_end

# 316 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_C_Movement_1:
# 316 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 316 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 316 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 316 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 316 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 316 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end

LilyPond_Cave_Dreepy_Text_0:
# 81 "data//maps/IvyRiver/scripts.pory"
	.string "Dreepy is nuzzling Blastoise's wound,\n"
	.string "but it's not helping much.$"

LilyPond_Cave_Drakloak_Text_0:
# 86 "data//maps/IvyRiver/scripts.pory"
	.string "Drakloak looks worried. Must be hard,\n"
	.string "knowing there's nothing you can do...$"

LilyPond_Cave_Dragapult_Text_0:
# 91 "data//maps/IvyRiver/scripts.pory"
	.string "Dragapult is looking around. Perhaps\n"
	.string "its trying to keep everyone safe?$"

LilyPond_Cave_Blastoise_Text_0:
# 99 "data//maps/IvyRiver/scripts.pory"
	.string "Blastoise is crying in pain!\n"
	.string "What happened?\p"
	.string "...\p"
	.string "There's a huge wound on its side!\p"
	.string "A regular Potion or Super Potion won't\n"
	.string "cut it for this...$"

LilyPond_Cave_Blastoise_Text_1:
# 104 "data//maps/IvyRiver/scripts.pory"
	.string "Administer a Hyper Potion on Blastoise'\n"
	.string "wound?$"

LilyPond_Cave_Blastoise_Text_2:
# 108 "data//maps/IvyRiver/scripts.pory"
	.string "{PLAYER} used a Hyper Potion on\n"
	.string "Blastoise.$"

LilyPond_Cave_Blastoise_Text_3:
# 112 "data//maps/IvyRiver/scripts.pory"
	.string "Blastoise is looking better!$"

LilyPond_Cave_Blastoise_Text_4:
# 140 "data//maps/IvyRiver/scripts.pory"
	.string "Dreee!!!$"

LilyPond_Cave_Lapras_Encounter_Text_0:
# 164 "data//maps/IvyRiver/scripts.pory"
	.string "It's asleep...$"

LilyPond_Cave_Lapras_Encounter_Text_1:
# 172 "data//maps/IvyRiver/scripts.pory"
	.string "It's asleep...use Poké Flute?$"

LilyPond_Cave_Lapras_Encounter_Text_2:
# 177 "data//maps/IvyRiver/scripts.pory"
	.string "{PLAYER} played the Poke Flute.$"

LilyPond_Cave_Lapras_Encounter_Text_3:
# 179 "data//maps/IvyRiver/scripts.pory"
	.string "...$"

LilyPond_Cave_Lapras_Encounter_Text_4:
# 187 "data//maps/IvyRiver/scripts.pory"
	.string "The Blastoise wakes up! It looks\n"
	.string "healthy now - too healthy!$"

LilyPond_Cave_Lapras_Encounter_Text_5:
# 202 "data//maps/IvyRiver/scripts.pory"
	.string "The Blastoise grunts and falls back\n"
	.string "asleep. It needs its beauty sleep!$"

LilyPond_Fisherman_A_Text_0:
# 239 "data//maps/IvyRiver/scripts.pory"
	.string "My brothers and I come to fish here\n"
	.string "every year. On the same day.$"

LilyPond_Fisherman_A_QuestScript_Text_0:
# 252 "data//maps/IvyRiver/scripts.pory"
	.string "You have a letter for me? Let me see.\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Got it. How can I say no?\n"
	.string "I'm going ahead!$"

LilyPond_Fisherman_B_Text_0:
# 273 "data//maps/IvyRiver/scripts.pory"
	.string "Such a beautiful pond...such bitter\n"
	.string "memories.$"

LilyPond_Fisherman_B_QuestScript_Text_0:
# 286 "data//maps/IvyRiver/scripts.pory"
	.string "You have a letter for me?\n"
	.string "What does it say?\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Understood. I'm in. Time to move!$"

LilyPond_Fisherman_C_Text_0:
# 307 "data//maps/IvyRiver/scripts.pory"
	.string "Thank you {PLAYER}! I met my brothers\n"
	.string "and they've already left for Ivy River.\p"
	.string "...\p"
	.string "{PLAYER}, will you be coming down Ivy\n"
	.string "River? If it's not too much to ask, we'd\l"
	.string "appreciate your help in the search.\l"
	.string "We'll be there, so if you do come, please\l"
	.string "speak to us. I hope to see you there!$"

LilyPond_Fisherman_C_Text_1:
# 332 "data//maps/IvyRiver/scripts.pory"
	.string "Have you delivered the mail to my\n"
	.string "brothers yet?$"

LilyPond_Fisherman_C_Text_2:
# 346 "data//maps/IvyRiver/scripts.pory"
	.string "My brothers and I fish around Lily Pond.\n"
	.string "We have a connection to this place -\l"
	.string "although not a happy one.\p"
	.string "Do you want to hear our story?$"

LilyPond_Fisherman_C_Text_3:
# 349 "data//maps/IvyRiver/scripts.pory"
	.string "Just as well. It hurts to tell it.$"

LilyPond_Fisherman_C_Text_4:
# 353 "data//maps/IvyRiver/scripts.pory"
	.string "We were four brothers. Many years ago,\n"
	.string "we came to Lily Pond to fish for our\l"
	.string "first Pokémon. While three of us stayed\l"
	.string "here, our youngest brother said he\l"
	.string "wanted to go down the waterfall and\l"
	.string "into Ivy River. We tried to stop him, but\l"
	.string "he went away, and was never seen again.$"

LilyPond_Fisherman_C_Text_5:
# 356 "data//maps/IvyRiver/scripts.pory"
	.string "A sad story, I know.$"

LilyPond_Fisherman_C_Text_6:
# 358 "data//maps/IvyRiver/scripts.pory"
	.string "I'm sorry to hear that.$"

LilyPond_Fisherman_C_Text_7:
# 358 "data//maps/IvyRiver/scripts.pory"
	.string "I'm sure he's safe.$"

LilyPond_Fisherman_C_Text_8:
# 358 "data//maps/IvyRiver/scripts.pory"
	.string "Don't give up!$"

LilyPond_Fisherman_C_Text_9:
# 361 "data//maps/IvyRiver/scripts.pory"
	.string "Thank you.\p"
	.string "I've taken up too much of your time. I\n"
	.string "appreciate you listening to me.$"

LilyPond_Fisherman_C_Text_10:
# 365 "data//maps/IvyRiver/scripts.pory"
	.string "Thank you. I'm sure too.\p"
	.string "I've taken up too much of your time.\n"
	.string "I appreciate you listening to me.$"

LilyPond_Fisherman_C_Text_11:
# 369 "data//maps/IvyRiver/scripts.pory"
	.string "Don't give up? But what can we do?\n"
	.string "Should we try to search again?\p"
	.string "...\p"
	.string "You're right, of course. We can't lose\n"
	.string "hope! I'd like to try searching once\l"
	.string "again. Perhaps my brothers would too.\p"
	.string "What's your name?\p"
	.string "...\p"
	.string "{PLAYER}?\p"
	.string "I'll write them a letter asking for their\n"
	.string "help in searching.\p"
	.string "Would you deliver it to them?$"

IvyRiver_Ranger_Blocker_Text_0:
# 382 "data//maps/IvyRiver/scripts.pory"
	.string "Sorry - to access the Ivy River Ranger\n"
	.string "Institute, you must be a member.$"
