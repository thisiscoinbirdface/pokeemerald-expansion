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
# 43 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_LILYPOND_DREEPY_SECOND, LilyPond_Dreepy_Trigger_Second_2
# 45 "data//maps/IvyRiver/scripts.pory"
	lockall
# 46 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 47 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_0
# 48 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 50 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 51 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_1
# 52 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 53 "data//maps/IvyRiver/scripts.pory"
	delay 40
# 55 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_2
# 56 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 57 "data//maps/IvyRiver/scripts.pory"
	removeobject LOCALID_DR_SC
# 59 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_DREEPY_SECOND
	return

LilyPond_Dreepy_Trigger_Second_2:
	end


LilyPond_Dreepy_Trigger_Third::
# 64 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_LILYPOND_DREEPY_THIRD, LilyPond_Dreepy_Trigger_Third_2
# 66 "data//maps/IvyRiver/scripts.pory"
	lockall
# 67 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 69 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 70 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_TH, LilyPond_Dreepy_Trigger_Third_Movement_0
# 71 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 72 "data//maps/IvyRiver/scripts.pory"
	delay 40
# 74 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_TH, LilyPond_Dreepy_Trigger_Second_Movement_2
# 75 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 76 "data//maps/IvyRiver/scripts.pory"
	removeobject LOCALID_DR_TH
# 78 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_DREEPY_THIRD
	return

LilyPond_Dreepy_Trigger_Third_2:
	end


LilyPond_Cave_Dreepy::
# 83 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 84 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Dreepy_Text_0, MSGBOX_NPC
	end


LilyPond_Cave_Drakloak::
# 88 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DRAKLOAK, CRY_MODE_NORMAL
# 89 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Drakloak_Text_0, MSGBOX_NPC
	end


LilyPond_Cave_Dragapult::
# 93 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DRAGAPULT, CRY_MODE_NORMAL
# 94 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Dragapult_Text_0, MSGBOX_NPC
	end


LilyPond_Cave_Lapras::
# 99 "data//maps/IvyRiver/scripts.pory"
	lockall
# 100 "data//maps/IvyRiver/scripts.pory"
	faceplayer
# 101 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 102 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_0, MSGBOX_NPC
# 103 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 104 "data//maps/IvyRiver/scripts.pory"
	checkitem ITEM_HYPER_POTION
# 105 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Cave_Lapras_2
# 107 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_1, MSGBOX_YESNO
# 108 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Cave_Lapras_5
# 110 "data//maps/IvyRiver/scripts.pory"
	playse SE_USE_ITEM
# 111 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_2
# 112 "data//maps/IvyRiver/scripts.pory"
	release
# 113 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 114 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 115 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_3
# 116 "data//maps/IvyRiver/scripts.pory"
	release
# 119 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_0
# 120 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Cave_Lapras_Movement_0
# 121 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Cave_Lapras_Movement_0
# 122 "data//maps/IvyRiver/scripts.pory"
	applymovement 6, LilyPond_Cave_Lapras_Movement_0
# 123 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 124 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 125 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Cave_Lapras_Movement_1
# 126 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 127 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Cave_Lapras_Movement_2
# 128 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_3
# 129 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Cave_Lapras_Movement_4
# 130 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Cave_Lapras_Movement_4
# 131 "data//maps/IvyRiver/scripts.pory"
	applymovement 6, LilyPond_Cave_Lapras_Movement_4
# 132 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 134 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 135 "data//maps/IvyRiver/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPond_Cave_Lapras_Movement_5
# 136 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_6
# 137 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 139 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 141 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 142 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_7
# 143 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_4
# 144 "data//maps/IvyRiver/scripts.pory"
	release
# 145 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 146 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_8
# 147 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 149 "data//maps/IvyRiver/scripts.pory"
	removeobject 1
# 150 "data//maps/IvyRiver/scripts.pory"
	removeobject 3
# 151 "data//maps/IvyRiver/scripts.pory"
	removeobject 4
# 152 "data//maps/IvyRiver/scripts.pory"
	removeobject 5
# 153 "data//maps/IvyRiver/scripts.pory"
	removeobject 6
# 155 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_LAPRAS
# 157 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Cave_Lapras_2:
	end

LilyPond_Cave_Lapras_5:
	end


LilyPond_Fisherman_A::
# 190 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 0
	goto_if_eq LilyPond_Fisherman_A_2
# 195 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 1
	goto_if_eq LilyPond_Fisherman_A_5
LilyPond_Fisherman_A_4:
# 196 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 2
	goto_if_eq LilyPond_Fisherman_A_7
	return

LilyPond_Fisherman_A_2:
# 191 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_Text_0, MSGBOX_NPC
	end

LilyPond_Fisherman_A_5:
# 195 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_A_QuestScript
	goto LilyPond_Fisherman_A_4

LilyPond_Fisherman_A_7:
# 196 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_A_QuestScript
	return


LilyPond_Fisherman_A_QuestScript::
# 200 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_Text_0, MSGBOX_NPC
# 201 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Fisherman_A_QuestScript_Movement_0
# 202 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 203 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 204 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_QuestScript_Text_0
# 205 "data//maps/IvyRiver/scripts.pory"
	release
# 206 "data//maps/IvyRiver/scripts.pory"
	addvar VAR_LILYPOND_FISHERMAN_QUEST, 1
# 207 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_A_LETTER
# 210 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Fisherman_A_QuestScript_Movement_1
# 211 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 212 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 213 "data//maps/IvyRiver/scripts.pory"
	removeobject 1
# 215 "data//maps/IvyRiver/scripts.pory"
	applymovement 2, LilyPond_Fisherman_A_QuestScript_Movement_2
# 216 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 217 "data//maps/IvyRiver/scripts.pory"
	removeobject 2
	end


LilyPond_Fisherman_B::
# 224 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 0
	goto_if_eq LilyPond_Fisherman_B_2
# 229 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 1
	goto_if_eq LilyPond_Fisherman_B_5
LilyPond_Fisherman_B_4:
# 230 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 2
	goto_if_eq LilyPond_Fisherman_B_7
	return

LilyPond_Fisherman_B_2:
# 225 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_Text_0, MSGBOX_NPC
	end

LilyPond_Fisherman_B_5:
# 229 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_B_QuestScript
	goto LilyPond_Fisherman_B_4

LilyPond_Fisherman_B_7:
# 230 "data//maps/IvyRiver/scripts.pory"
	goto LilyPond_Fisherman_B_QuestScript
	return


LilyPond_Fisherman_B_QuestScript::
# 235 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_Text_0, MSGBOX_NPC
# 236 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Fisherman_A_QuestScript_Movement_0
# 237 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 238 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 239 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_QuestScript_Text_0
# 240 "data//maps/IvyRiver/scripts.pory"
	release
# 241 "data//maps/IvyRiver/scripts.pory"
	addvar VAR_LILYPOND_FISHERMAN_QUEST, 1
# 242 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_B_LETTER
# 245 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Fisherman_A_QuestScript_Movement_1
# 246 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 247 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 248 "data//maps/IvyRiver/scripts.pory"
	removeobject 3
# 250 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Fisherman_B_QuestScript_Movement_0
# 251 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 252 "data//maps/IvyRiver/scripts.pory"
	removeobject 5
	end


LilyPond_Fisherman_C::
# 259 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 3
	goto_if_eq LilyPond_Fisherman_C_2
# 282 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 2
	goto_if_eq LilyPond_Fisherman_C_5
# 288 "data//maps/IvyRiver/scripts.pory"
	compare VAR_LILYPOND_FISHERMAN_QUEST, 1
	goto_if_eq LilyPond_Fisherman_C_8
# 295 "data//maps/IvyRiver/scripts.pory"
	lockall
# 296 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_3, MSGBOX_YESNO
# 298 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Fisherman_C_11
# 303 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_5
# 304 "data//maps/IvyRiver/scripts.pory"
	release
# 305 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 306 "data//maps/IvyRiver/scripts.pory"
	message LilyPond_Fisherman_C_Text_6
# 307 "data//maps/IvyRiver/scripts.pory"
	waitmessage
# 308 "data//maps/IvyRiver/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LilyPond_Fisherman_C_Text_7, LilyPond_Fisherman_C_Text_8, LilyPond_Fisherman_C_Text_9
# 310 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Fisherman_C_14
# 314 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilyPond_Fisherman_C_17
# 319 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_12
# 320 "data//maps/IvyRiver/scripts.pory"
	release
# 321 "data//maps/IvyRiver/scripts.pory"
	giveitem ITEM_FISHERMAN_LETTER
# 322 "data//maps/IvyRiver/scripts.pory"
	startquest QUEST_LILYPOND_FISHERMAN
# 323 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_QUEST_START
# 324 "data//maps/IvyRiver/scripts.pory"
	setvar VAR_LILYPOND_FISHERMAN_QUEST, 1
# 326 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Fisherman_C_2:
# 260 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_0, MSGBOX_NPC
# 261 "data//maps/IvyRiver/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 262 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_1
# 263 "data//maps/IvyRiver/scripts.pory"
	release
# 264 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 266 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Fisherman_C_Movement_0
# 267 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 268 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 269 "data//maps/IvyRiver/scripts.pory"
	removeobject 4
# 271 "data//maps/IvyRiver/scripts.pory"
	applymovement 8, LilyPond_Fisherman_C_Movement_1
# 272 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 273 "data//maps/IvyRiver/scripts.pory"
	removeobject 8
# 276 "data//maps/IvyRiver/scripts.pory"
	setvar VAR_LILYPOND_FISHERMAN_QUEST, 4
# 277 "data//maps/IvyRiver/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LILYPOND_FISHERMAN, SUB_QUEST_1
# 278 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_FISHERMAN_QUEST_START
	end

LilyPond_Fisherman_C_5:
# 283 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_2, MSGBOX_NPC
	end

LilyPond_Fisherman_C_8:
# 289 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_2, MSGBOX_NPC
	end

LilyPond_Fisherman_C_11:
# 299 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_4, MSGBOX_NPC
	end

LilyPond_Fisherman_C_14:
# 311 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_10, MSGBOX_NPC
	end

LilyPond_Fisherman_C_17:
# 315 "data//maps/IvyRiver/scripts.pory"
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

# 47 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_0:
# 47 "data//maps/IvyRiver/scripts.pory"
	face_down
# 47 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 51 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_1:
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 51 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 51 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 51 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 51 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
	step_end

# 55 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_2:
# 55 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 55 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 55 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 55 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 55 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 55 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 55 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
	step_end

# 70 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Third_Movement_0:
# 70 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 70 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 70 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_down
# 70 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 70 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_down
# 70 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_down
	step_end

# 119 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_0:
# 119 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 125 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_1:
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 127 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_2:
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 128 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_3:
# 128 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 128 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 128 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 128 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 129 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_4:
# 129 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 129 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 129 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 129 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 129 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 129 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 129 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 135 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_5:
# 135 "data//maps/IvyRiver/scripts.pory"
	face_down
	step_end

# 136 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_6:
# 136 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 136 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 136 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 142 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_7:
# 142 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 142 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_up
	step_end

# 146 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_8:
# 146 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 146 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 146 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 146 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end

# 201 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_A_QuestScript_Movement_0:
# 201 "data//maps/IvyRiver/scripts.pory"
	emote_question_mark
	step_end

# 210 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_A_QuestScript_Movement_1:
# 210 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 210 "data//maps/IvyRiver/scripts.pory"
	face_up
	step_end

# 215 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_A_QuestScript_Movement_2:
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 215 "data//maps/IvyRiver/scripts.pory"
	walk_right
	step_end

# 250 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_B_QuestScript_Movement_0:
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_right
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 250 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 266 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_C_Movement_0:
# 266 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 266 "data//maps/IvyRiver/scripts.pory"
	face_down
	step_end

# 271 "data//maps/IvyRiver/scripts.pory"
LilyPond_Fisherman_C_Movement_1:
# 271 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 271 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 271 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 271 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 271 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 271 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end

LilyPond_Cave_Dreepy_Text_0:
# 84 "data//maps/IvyRiver/scripts.pory"
	.string "Dreepy is nuzzling Lapras' wound, but\n"
	.string "it's not helping much.$"

LilyPond_Cave_Drakloak_Text_0:
# 89 "data//maps/IvyRiver/scripts.pory"
	.string "Drakloak looks worried. Must be hard,\n"
	.string "knowing there's nothing you can do...$"

LilyPond_Cave_Dragapult_Text_0:
# 94 "data//maps/IvyRiver/scripts.pory"
	.string "Dragapult is looking around. Perhaps\n"
	.string "its trying to keep everyone safe?$"

LilyPond_Cave_Lapras_Text_0:
# 102 "data//maps/IvyRiver/scripts.pory"
	.string "Lapras is crying in pain! What\n"
	.string "happened?\p"
	.string "...\p"
	.string "There's a huge wound on its side! A\n"
	.string "regular Potion or Super Potion won't\l"
	.string "cut it for this...$"

LilyPond_Cave_Lapras_Text_1:
# 107 "data//maps/IvyRiver/scripts.pory"
	.string "Administer a Hyper Potion on Lapras'\n"
	.string "wound?$"

LilyPond_Cave_Lapras_Text_2:
# 111 "data//maps/IvyRiver/scripts.pory"
	.string "{PLAYER} used a Hyper Potion on\n"
	.string "Lapras.$"

LilyPond_Cave_Lapras_Text_3:
# 115 "data//maps/IvyRiver/scripts.pory"
	.string "Lapras is looking better!$"

LilyPond_Cave_Lapras_Text_4:
# 143 "data//maps/IvyRiver/scripts.pory"
	.string "DREEPY: dreee!!!$"

LilyPond_Fisherman_A_Text_0:
# 191 "data//maps/IvyRiver/scripts.pory"
	.string "My brothers and I come to fish here\n"
	.string "every year. On the same day.$"

LilyPond_Fisherman_A_QuestScript_Text_0:
# 204 "data//maps/IvyRiver/scripts.pory"
	.string "You have a letter for me? Let me see.\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Got it. How can I say no? I'm going\n"
	.string "ahead!$"

LilyPond_Fisherman_B_Text_0:
# 225 "data//maps/IvyRiver/scripts.pory"
	.string "Such a beautiful pond...such bitter\n"
	.string "memories.$"

LilyPond_Fisherman_B_QuestScript_Text_0:
# 239 "data//maps/IvyRiver/scripts.pory"
	.string "You have a letter for me? What does it\n"
	.string "say?\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Understood. I'm in. Time to move!$"

LilyPond_Fisherman_C_Text_0:
# 260 "data//maps/IvyRiver/scripts.pory"
	.string "Thank you {PLAYER}! I met my brothers\n"
	.string "and they've already left for Ivy River.\l"
	.string "I stayed behind to give you this.$"

LilyPond_Fisherman_C_Text_1:
# 262 "data//maps/IvyRiver/scripts.pory"
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
# 283 "data//maps/IvyRiver/scripts.pory"
	.string "Have you delivered the mail to my\n"
	.string "brothers yet?$"

LilyPond_Fisherman_C_Text_3:
# 296 "data//maps/IvyRiver/scripts.pory"
	.string "My brothers and I fish around Lily Pond.\n"
	.string "We have a connection to this place -\l"
	.string "although not a happy one. Do you want\l"
	.string "to hear our story?$"

LilyPond_Fisherman_C_Text_4:
# 299 "data//maps/IvyRiver/scripts.pory"
	.string "Just as well. It hurts to tell it.$"

LilyPond_Fisherman_C_Text_5:
# 303 "data//maps/IvyRiver/scripts.pory"
	.string "We were four brothers. Many years ago,\n"
	.string "we came to Lily Pond to fish for our\l"
	.string "first Pokemon. While three of us stayed\l"
	.string "here, our youngest brother said he\l"
	.string "wanted to go down the waterfall and\l"
	.string "into Ivy River. We tried to stop him, but\l"
	.string "he went away, and was never seen again.$"

LilyPond_Fisherman_C_Text_6:
# 306 "data//maps/IvyRiver/scripts.pory"
	.string "A sad story, I know.$"

LilyPond_Fisherman_C_Text_7:
# 308 "data//maps/IvyRiver/scripts.pory"
	.string "I'm sorry to hear that.$"

LilyPond_Fisherman_C_Text_8:
# 308 "data//maps/IvyRiver/scripts.pory"
	.string "I'm sure he's safe.$"

LilyPond_Fisherman_C_Text_9:
# 308 "data//maps/IvyRiver/scripts.pory"
	.string "Don't give up!$"

LilyPond_Fisherman_C_Text_10:
# 311 "data//maps/IvyRiver/scripts.pory"
	.string "Thank you.\p"
	.string "I've taken up too much of your time. I\n"
	.string "appreciate you listening to me.$"

LilyPond_Fisherman_C_Text_11:
# 315 "data//maps/IvyRiver/scripts.pory"
	.string "Thank you. I'm sure too.\p"
	.string "I've taken up too much of your time. I\n"
	.string "appreciate you listening to me.$"

LilyPond_Fisherman_C_Text_12:
# 319 "data//maps/IvyRiver/scripts.pory"
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
