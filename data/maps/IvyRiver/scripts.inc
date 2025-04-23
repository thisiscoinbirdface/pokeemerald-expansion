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


LilyPond_Cave_Lapras::
# 96 "data//maps/IvyRiver/scripts.pory"
	lockall
# 97 "data//maps/IvyRiver/scripts.pory"
	faceplayer
# 98 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 99 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_0, MSGBOX_NPC
# 100 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 101 "data//maps/IvyRiver/scripts.pory"
	checkitem ITEM_HYPER_POTION
# 102 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Cave_Lapras_2
# 104 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_1, MSGBOX_YESNO
# 105 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Cave_Lapras_5
# 107 "data//maps/IvyRiver/scripts.pory"
	playse SE_USE_ITEM
# 108 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_2
# 109 "data//maps/IvyRiver/scripts.pory"
	release
# 110 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 111 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 112 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_3
# 113 "data//maps/IvyRiver/scripts.pory"
	release
# 116 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_0
# 117 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Cave_Lapras_Movement_0
# 118 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Cave_Lapras_Movement_0
# 119 "data//maps/IvyRiver/scripts.pory"
	applymovement 6, LilyPond_Cave_Lapras_Movement_0
# 120 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 121 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 122 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Cave_Lapras_Movement_1
# 123 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 124 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Cave_Lapras_Movement_2
# 125 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_3
# 126 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Cave_Lapras_Movement_4
# 127 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Cave_Lapras_Movement_4
# 128 "data//maps/IvyRiver/scripts.pory"
	applymovement 6, LilyPond_Cave_Lapras_Movement_4
# 129 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 131 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 132 "data//maps/IvyRiver/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPond_Cave_Lapras_Movement_5
# 133 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_6
# 134 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 136 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 138 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 139 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_7
# 140 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_4
# 141 "data//maps/IvyRiver/scripts.pory"
	release
# 142 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 143 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_8
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

LilyPond_Cave_Lapras_2:
	end

LilyPond_Cave_Lapras_5:
	end


LilyPond_Cave_Lapras_Encounter::
# 159 "data//maps/IvyRiver/scripts.pory"
	lockall
# 160 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 161 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_LAPRAS_ENCOUNTER
# 162 "data//maps/IvyRiver/scripts.pory"
	removeobject 7
# 163 "data//maps/IvyRiver/scripts.pory"
	setwildbattle SPECIES_LAPRAS, 35
# 164 "data//maps/IvyRiver/scripts.pory"
	dowildbattle
# 165 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end


LilyPond_Fisherman_A::
# 195 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 0
	goto_if_eq LilyPond_Fisherman_A_2
# 200 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 1
	goto_if_eq LilyPond_Fisherman_A_5
LilyPond_Fisherman_A_4:
# 201 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 2
	goto_if_eq LilyPond_Fisherman_A_7
	return

LilyPond_Fisherman_A_2:
# 196 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_Text_0, MSGBOX_NPC
	end

LilyPond_Fisherman_A_5:
# 200 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_A_QuestScript
	goto LilyPond_Fisherman_A_4

LilyPond_Fisherman_A_7:
# 201 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_A_QuestScript
	return


LilyPond_Fisherman_A_QuestScript::
# 205 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_Text_0, MSGBOX_NPC
# 206 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Fisherman_A_QuestScript_Movement_0
# 207 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 208 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 209 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_QuestScript_Text_0
# 210 "data//maps/IvyRiver/scripts.pory"
	release
# 211 "data//maps/IvyRiver/scripts.pory"
	addvar VAR_LILYPOND_FISHERMAN_QUEST, 1
# 212 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_A_LETTER
# 215 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Fisherman_A_QuestScript_Movement_1
# 216 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 217 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 218 "data//maps/IvyRiver/scripts.pory"
	removeobject 1
# 220 "data//maps/IvyRiver/scripts.pory"
	applymovement 2, LilyPond_Fisherman_A_QuestScript_Movement_2
# 221 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 222 "data//maps/IvyRiver/scripts.pory"
	removeobject 2
	end


LilyPond_Fisherman_B::
# 229 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 0
	goto_if_eq LilyPond_Fisherman_B_2
# 234 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 1
	goto_if_eq LilyPond_Fisherman_B_5
LilyPond_Fisherman_B_4:
# 235 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 2
	goto_if_eq LilyPond_Fisherman_B_7
	return

LilyPond_Fisherman_B_2:
# 230 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_Text_0, MSGBOX_NPC
	end

LilyPond_Fisherman_B_5:
# 234 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_B_QuestScript
	goto LilyPond_Fisherman_B_4

LilyPond_Fisherman_B_7:
# 235 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_B_QuestScript
	return


LilyPond_Fisherman_B_QuestScript::
# 239 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_Text_0, MSGBOX_NPC
# 240 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Fisherman_A_QuestScript_Movement_0
# 241 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 242 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 243 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_QuestScript_Text_0
# 244 "data//maps/IvyRiver/scripts.pory"
	release
# 245 "data//maps/IvyRiver/scripts.pory"
	addvar VAR_LILYPOND_FISHERMAN_QUEST, 1
# 246 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_B_LETTER
# 249 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Fisherman_A_QuestScript_Movement_1
# 250 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 251 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 252 "data//maps/IvyRiver/scripts.pory"
	removeobject 3
# 254 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Fisherman_B_QuestScript_Movement_0
# 255 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 256 "data//maps/IvyRiver/scripts.pory"
	removeobject 5
	end


LilyPond_Fisherman_C::
# 263 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 3
	goto_if_eq LilyPond_Fisherman_C_2
# 290 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 2
	goto_if_eq LilyPond_Fisherman_C_5
# 296 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 1
	goto_if_eq LilyPond_Fisherman_C_8
# 303 "data//maps/IvyRiver/scripts.pory"
	lockall
# 304 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_3, MSGBOX_YESNO
# 306 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Fisherman_C_11
# 311 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_5
# 312 "data//maps/IvyRiver/scripts.pory"
	release
# 313 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 314 "data//maps/IvyRiver/scripts.pory"
	message LilyPond_Fisherman_C_Text_6
# 315 "data//maps/IvyRiver/scripts.pory"
	waitmessage
# 316 "data//maps/IvyRiver/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LilyPond_Fisherman_C_Text_7, LilyPond_Fisherman_C_Text_8, LilyPond_Fisherman_C_Text_9
# 318 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Fisherman_C_14
# 322 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilyPond_Fisherman_C_17
# 327 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_12
# 328 "data//maps/IvyRiver/scripts.pory"
	release
# 329 "data//maps/IvyRiver/scripts.pory"
	giveitem ITEM_FISHERMAN_LETTER
# 330 "data//maps/IvyRiver/scripts.pory"
	startquest QUEST_LILYPOND_FISHERMAN
# 331 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_QUEST_START
# 332 "data//maps/IvyRiver/scripts.pory"
	setvar VAR_LILYPOND_FISHERMAN_QUEST, 1
# 334 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Fisherman_C_2:
# 264 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_0, MSGBOX_NPC
# 265 "data//maps/IvyRiver/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 266 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_1
# 267 "data//maps/IvyRiver/scripts.pory"
	release
# 268 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 270 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Fisherman_C_Movement_0
# 271 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 272 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 273 "data//maps/IvyRiver/scripts.pory"
	removeobject 4
# 275 "data//maps/IvyRiver/scripts.pory"
	applymovement 8, LilyPond_Fisherman_C_Movement_1
# 276 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 277 "data//maps/IvyRiver/scripts.pory"
	removeobject 8
# 280 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_QUEST_START
# 281 "data//maps/IvyRiver/scripts.pory"
	setvar VAR_LILYPOND_FISHERMAN_QUEST, 4
# 284 "data//maps/IvyRiver/scripts.pory"
	clearflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 286 "data//maps/IvyRiver/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LILYPOND_FISHERMAN, SUB_QUEST_1
	end

LilyPond_Fisherman_C_5:
# 291 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_2, MSGBOX_NPC
	end

LilyPond_Fisherman_C_8:
# 297 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_2, MSGBOX_NPC
	end

LilyPond_Fisherman_C_11:
# 307 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_4, MSGBOX_NPC
	end

LilyPond_Fisherman_C_14:
# 319 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_10, MSGBOX_NPC
	end

LilyPond_Fisherman_C_17:
# 323 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_11, MSGBOX_NPC
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
LilyPond_Cave_Lapras_Movement_0:
# 116 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 122 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_1:
# 122 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 122 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 124 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_2:
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
LilyPond_Cave_Lapras_Movement_3:
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
LilyPond_Cave_Lapras_Movement_4:
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
LilyPond_Cave_Lapras_Movement_5:
# 132 "data//maps/IvyRiver/scripts.pory"
	face_down
	step_end

# 133 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_6:
# 133 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 133 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 133 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 139 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_7:
# 139 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 139 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_up
	step_end

# 143 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_8:
# 143 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 143 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 143 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 143 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end

# 206 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_A_QuestScript_Movement_0:
# 206 "data//maps/IvyRiver/scripts.pory"
	emote_question_mark
	step_end

# 215 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_A_QuestScript_Movement_1:
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 215 "data//maps/IvyRiver/scripts.pory"
	face_up
	step_end

# 220 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_A_QuestScript_Movement_2:
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 220 "data//maps/IvyRiver/scripts.pory"
	walk_right
	step_end

# 254 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_B_QuestScript_Movement_0:
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 254 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 270 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_C_Movement_0:
# 270 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 270 "data//maps/IvyRiver/scripts.pory"
	face_down
	step_end

# 275 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_C_Movement_1:
# 275 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 275 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 275 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 275 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 275 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 275 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end

LilyPond_Cave_Dreepy_Text_0:
# 81 "data//maps/IvyRiver/scripts.pory"
	.string "Dreepy is nuzzling Lapras' wound, but\n"
	.string "it's not helping much.$"

LilyPond_Cave_Drakloak_Text_0:
# 86 "data//maps/IvyRiver/scripts.pory"
	.string "Drakloak looks worried. Must be hard,\n"
	.string "knowing there's nothing you can do...$"

LilyPond_Cave_Dragapult_Text_0:
# 91 "data//maps/IvyRiver/scripts.pory"
	.string "Dragapult is looking around. Perhaps\n"
	.string "its trying to keep everyone safe?$"

LilyPond_Cave_Lapras_Text_0:
# 99 "data//maps/IvyRiver/scripts.pory"
	.string "Lapras is crying in pain! What\n"
	.string "happened?\p"
	.string "...\p"
	.string "There's a huge wound on its side! A\n"
	.string "regular Potion or Super Potion won't\l"
	.string "cut it for this...$"

LilyPond_Cave_Lapras_Text_1:
# 104 "data//maps/IvyRiver/scripts.pory"
	.string "Administer a Hyper Potion on Lapras'\n"
	.string "wound?$"

LilyPond_Cave_Lapras_Text_2:
# 108 "data//maps/IvyRiver/scripts.pory"
	.string "{PLAYER} used a Hyper Potion on\n"
	.string "Lapras.$"

LilyPond_Cave_Lapras_Text_3:
# 112 "data//maps/IvyRiver/scripts.pory"
	.string "Lapras is looking better!$"

LilyPond_Cave_Lapras_Text_4:
# 140 "data//maps/IvyRiver/scripts.pory"
	.string "DREEPY: dreee!!!$"

LilyPond_Fisherman_A_Text_0:
# 196 "data//maps/IvyRiver/scripts.pory"
	.string "My brothers and I come to fish here\n"
	.string "every year. On the same day.$"

LilyPond_Fisherman_A_QuestScript_Text_0:
# 209 "data//maps/IvyRiver/scripts.pory"
	.string "You have a letter for me? Let me see.\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Got it. How can I say no? I'm going\n"
	.string "ahead!$"

LilyPond_Fisherman_B_Text_0:
# 230 "data//maps/IvyRiver/scripts.pory"
	.string "Such a beautiful pond...such bitter\n"
	.string "memories.$"

LilyPond_Fisherman_B_QuestScript_Text_0:
# 243 "data//maps/IvyRiver/scripts.pory"
	.string "You have a letter for me? What does it\n"
	.string "say?\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Understood. I'm in. Time to move!$"

LilyPond_Fisherman_C_Text_0:
# 264 "data//maps/IvyRiver/scripts.pory"
	.string "Thank you {PLAYER}! I met my brothers\n"
	.string "and they've already left for Ivy River.\l"
	.string "I stayed behind to give you this.$"

LilyPond_Fisherman_C_Text_1:
# 266 "data//maps/IvyRiver/scripts.pory"
	.string "It has a different mechanism than a\n"
	.string "Casting Rod and can catch different\l"
	.string "varieties of Pokemon. A staple in any\l"
	.string "fisherman's toolkit!\p"
	.string "And now it's time for me to leave too.\p"
	.string "...\p"
	.string "{PLAYER}, will you be coming down Ivy\n"
	.string "River? If it's not too much to ask, we'd\l"
	.string "appreciate your help in the search.\l"
	.string "We'll be there, so if you do come, please\l"
	.string "speak to us. I hope to see you there!$"

LilyPond_Fisherman_C_Text_2:
# 291 "data//maps/IvyRiver/scripts.pory"
	.string "Have you delivered the mail to my\n"
	.string "brothers yet?$"

LilyPond_Fisherman_C_Text_3:
# 304 "data//maps/IvyRiver/scripts.pory"
	.string "My brothers and I fish around Lily Pond.\n"
	.string "We have a connection to this place -\l"
	.string "although not a happy one. Do you want\l"
	.string "to hear our story?$"

LilyPond_Fisherman_C_Text_4:
# 307 "data//maps/IvyRiver/scripts.pory"
	.string "Just as well. It hurts to tell it.$"

LilyPond_Fisherman_C_Text_5:
# 311 "data//maps/IvyRiver/scripts.pory"
	.string "We were four brothers. Many years ago,\n"
	.string "we came to Lily Pond to fish for our\l"
	.string "first Pokemon. While three of us stayed\l"
	.string "here, our youngest brother said he\l"
	.string "wanted to go down the waterfall and\l"
	.string "into Ivy River. We tried to stop him, but\l"
	.string "he went away, and was never seen again.$"

LilyPond_Fisherman_C_Text_6:
# 314 "data//maps/IvyRiver/scripts.pory"
	.string "A sad story, I know.$"

LilyPond_Fisherman_C_Text_7:
# 316 "data//maps/IvyRiver/scripts.pory"
	.string "I'm sorry to hear that.$"

LilyPond_Fisherman_C_Text_8:
# 316 "data//maps/IvyRiver/scripts.pory"
	.string "I'm sure he's safe.$"

LilyPond_Fisherman_C_Text_9:
# 316 "data//maps/IvyRiver/scripts.pory"
	.string "Don't give up!$"

LilyPond_Fisherman_C_Text_10:
# 319 "data//maps/IvyRiver/scripts.pory"
	.string "Thank you.\p"
	.string "I've taken up too much of your time. I\n"
	.string "appreciate you listening to me.$"

LilyPond_Fisherman_C_Text_11:
# 323 "data//maps/IvyRiver/scripts.pory"
	.string "Thank you. I'm sure too.\p"
	.string "I've taken up too much of your time. I\n"
	.string "appreciate you listening to me.$"

LilyPond_Fisherman_C_Text_12:
# 327 "data//maps/IvyRiver/scripts.pory"
	.string "Don't give up, you say? But what can we\n"
	.string "do? Search again?\p"
	.string "...\p"
	.string "But you're right, of course. We mustn't\n"
	.string "lose hope! I'd like to try searching\l"
	.string "once again. Perhaps my brothers would\l"
	.string "too.\p"
	.string "What's your name?\p"
	.string "...\p"
	.string "{PLAYER}?\p"
	.string "If I write them a letter asking them to\n"
	.string "help search, would you deliver it to\l"
	.string "them?$"
