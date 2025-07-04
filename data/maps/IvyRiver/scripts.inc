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
	release
# 106 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Cave_Blastoise_5
# 108 "data//maps/IvyRiver/scripts.pory"
	playse SE_USE_ITEM
# 109 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Blastoise_Text_2
# 110 "data//maps/IvyRiver/scripts.pory"
	release
# 111 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 112 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_NORMAL
# 113 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Blastoise_Text_3
# 114 "data//maps/IvyRiver/scripts.pory"
	release
# 117 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_0
# 118 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Cave_Blastoise_Movement_0
# 119 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Cave_Blastoise_Movement_0
# 120 "data//maps/IvyRiver/scripts.pory"
	applymovement 6, LilyPond_Cave_Blastoise_Movement_0
# 121 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 122 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 123 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Cave_Blastoise_Movement_1
# 124 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 125 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Cave_Blastoise_Movement_2
# 126 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_3
# 127 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Cave_Blastoise_Movement_4
# 128 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Cave_Blastoise_Movement_4
# 129 "data//maps/IvyRiver/scripts.pory"
	applymovement 6, LilyPond_Cave_Blastoise_Movement_4
# 130 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 132 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 133 "data//maps/IvyRiver/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPond_Cave_Blastoise_Movement_5
# 134 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_6
# 135 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 137 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 139 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 140 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_7
# 141 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Blastoise_Text_4
# 142 "data//maps/IvyRiver/scripts.pory"
	release
# 143 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 144 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Blastoise_Movement_8
# 145 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 147 "data//maps/IvyRiver/scripts.pory"
	removeobject 1
# 148 "data//maps/IvyRiver/scripts.pory"
	removeobject 3
# 149 "data//maps/IvyRiver/scripts.pory"
	removeobject 4
# 150 "data//maps/IvyRiver/scripts.pory"
	removeobject 5
# 151 "data//maps/IvyRiver/scripts.pory"
	removeobject 6
# 153 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_LAPRAS
# 155 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Cave_Blastoise_2:
	end

LilyPond_Cave_Blastoise_5:
	end


LilyPond_Cave_Lapras_Encounter::
# 160 "data//maps/IvyRiver/scripts.pory"
	lockall
# 162 "data//maps/IvyRiver/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 164 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Cave_Lapras_Encounter_2
# 173 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_1, MSGBOX_YESNO
# 175 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilyPond_Cave_Lapras_Encounter_5
# 207 "data//maps/IvyRiver/scripts.pory"
	release
LilyPond_Cave_Lapras_Encounter_4:
# 209 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Cave_Lapras_Encounter_2:
# 165 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_0
# 166 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Cave_Lapras_Encounter_5:
# 176 "data//maps/IvyRiver/scripts.pory"
	fadeoutbgm 1
# 177 "data//maps/IvyRiver/scripts.pory"
	playse MUS_RG_POKE_FLUTE
# 178 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_2
# 179 "data//maps/IvyRiver/scripts.pory"
	delay 128
# 180 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_3
# 181 "data//maps/IvyRiver/scripts.pory"
	release
# 182 "data//maps/IvyRiver/scripts.pory"
	applymovement 7, LilyPond_Cave_Blastoise_Movement_0
# 183 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 184 "data//maps/IvyRiver/scripts.pory"
	delay 30
# 185 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
# 186 "data//maps/IvyRiver/scripts.pory"
	applymovement 7, LilyPond_Cave_Lapras_Encounter_Movement_0
# 187 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 188 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_4
# 189 "data//maps/IvyRiver/scripts.pory"
	setwildbattle SPECIES_BLASTOISE, 48
# 190 "data//maps/IvyRiver/scripts.pory"
	dowildbattle
# 193 "data//maps/IvyRiver/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 194 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LilyPond_Cave_Lapras_Encounter_9
LilyPond_Cave_Lapras_Encounter_8:
# 198 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LilyPond_Cave_Lapras_Encounter_12
LilyPond_Cave_Lapras_Encounter_11:
# 202 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LilyPond_Cave_Lapras_Encounter_14
	goto LilyPond_Cave_Lapras_Encounter_4

LilyPond_Cave_Lapras_Encounter_9:
# 195 "data//maps/IvyRiver/scripts.pory"
	removeobject 7
# 196 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_LAPRAS_ENCOUNTER
	goto LilyPond_Cave_Lapras_Encounter_8

LilyPond_Cave_Lapras_Encounter_12:
# 199 "data//maps/IvyRiver/scripts.pory"
	removeobject 7
# 200 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_LAPRAS_ENCOUNTER
	goto LilyPond_Cave_Lapras_Encounter_11

LilyPond_Cave_Lapras_Encounter_14:
# 203 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Encounter_Text_5
# 204 "data//maps/IvyRiver/scripts.pory"
	release
	goto LilyPond_Cave_Lapras_Encounter_4


LilyPond_Fisherman_A::
# 239 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_A_Text_0, MSGBOX_NPC
	end


LilyPond_Fisherman_B::
# 267 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_B_Text_0, MSGBOX_NPC
	end


LilyPond_Fisherman_C::
# 295 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_FISHERMAN_GAVE_LETTER, LilyPond_Fisherman_C_2
# 302 "data//maps/IvyRiver/scripts.pory"
	lockall
# 303 "data//maps/IvyRiver/scripts.pory"
	faceplayer
# 306 "data//maps/IvyRiver/scripts.pory"
	compare VAR_ZARUDE_NOTES, 0
	goto_if_gt LilyPond_Fisherman_C_5
# 322 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_4, MSGBOX_YESNO
# 324 "data//maps/IvyRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilyPond_Fisherman_C_8
# 329 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_6
# 330 "data//maps/IvyRiver/scripts.pory"
	release
# 331 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 332 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_7, MSGBOX_NPC
# 334 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Fisherman_C_2:
# 296 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_0
# 297 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Fisherman_C_5:
# 307 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_1
# 308 "data//maps/IvyRiver/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 309 "data//maps/IvyRiver/scripts.pory"
	message LilyPond_Fisherman_C_Text_2
# 310 "data//maps/IvyRiver/scripts.pory"
	waitmessage
# 311 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 312 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_3
# 314 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_FISHERMAN_GAVE_LETTER
# 315 "data//maps/IvyRiver/scripts.pory"
	releaseall
	end

LilyPond_Fisherman_C_8:
# 325 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Fisherman_C_Text_5, MSGBOX_NPC
	end


IvyRiver_Ranger_Blocker::
# 341 "data//maps/IvyRiver/scripts.pory"
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

# 117 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_0:
# 117 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 123 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_1:
# 123 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 123 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 125 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_2:
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 125 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 126 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_3:
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 127 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_4:
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 133 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_5:
# 133 "data//maps/IvyRiver/scripts.pory"
	face_down
	step_end

# 134 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_6:
# 134 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 134 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 134 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 140 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_7:
# 140 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 140 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_up
	step_end

# 144 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Blastoise_Movement_8:
# 144 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 144 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 144 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 144 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end

# 186 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Encounter_Movement_0:
# 186 "data//maps/IvyRiver/scripts.pory"
	walk_fast_left
# 186 "data//maps/IvyRiver/scripts.pory"
	walk_fast_right
# 186 "data//maps/IvyRiver/scripts.pory"
	walk_fast_right
# 186 "data//maps/IvyRiver/scripts.pory"
	walk_fast_left
# 186 "data//maps/IvyRiver/scripts.pory"
	walk_fast_left
# 186 "data//maps/IvyRiver/scripts.pory"
	walk_fast_right
# 186 "data//maps/IvyRiver/scripts.pory"
	face_down
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
# 109 "data//maps/IvyRiver/scripts.pory"
	.string "{PLAYER} used a Hyper Potion on\n"
	.string "Blastoise.$"

LilyPond_Cave_Blastoise_Text_3:
# 113 "data//maps/IvyRiver/scripts.pory"
	.string "Blastoise is looking better!$"

LilyPond_Cave_Blastoise_Text_4:
# 141 "data//maps/IvyRiver/scripts.pory"
	.string "Dreee!!!$"

LilyPond_Cave_Lapras_Encounter_Text_0:
# 165 "data//maps/IvyRiver/scripts.pory"
	.string "It's asleep...$"

LilyPond_Cave_Lapras_Encounter_Text_1:
# 173 "data//maps/IvyRiver/scripts.pory"
	.string "It's asleep...use Poké Flute?$"

LilyPond_Cave_Lapras_Encounter_Text_2:
# 178 "data//maps/IvyRiver/scripts.pory"
	.string "{PLAYER} played the Poke Flute.$"

LilyPond_Cave_Lapras_Encounter_Text_3:
# 180 "data//maps/IvyRiver/scripts.pory"
	.string "...$"

LilyPond_Cave_Lapras_Encounter_Text_4:
# 188 "data//maps/IvyRiver/scripts.pory"
	.string "The Blastoise wakes up! It looks\n"
	.string "healthy now - too healthy!$"

LilyPond_Cave_Lapras_Encounter_Text_5:
# 203 "data//maps/IvyRiver/scripts.pory"
	.string "The Blastoise grunts and falls back\n"
	.string "asleep. It needs its beauty sleep!$"

LilyPond_Fisherman_A_Text_0:
# 239 "data//maps/IvyRiver/scripts.pory"
	.string "My brothers and I come to fish here\n"
	.string "every year. On the same day.$"

LilyPond_Fisherman_B_Text_0:
# 267 "data//maps/IvyRiver/scripts.pory"
	.string "Such a beautiful pond...such bitter\n"
	.string "memories.$"

LilyPond_Fisherman_C_Text_0:
# 296 "data//maps/IvyRiver/scripts.pory"
	.string "We should've searched more...$"

LilyPond_Fisherman_C_Text_1:
# 307 "data//maps/IvyRiver/scripts.pory"
	.string "Hmm? You have something you want me to\n"
	.string "read?$"

LilyPond_Fisherman_C_Text_2:
# 309 "data//maps/IvyRiver/scripts.pory"
	.string "{PLAYER} handed the fisherman the\n"
	.string "notes from Ivy Forest.$"

LilyPond_Fisherman_C_Text_3:
# 312 "data//maps/IvyRiver/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "...I see. T-thank you.\p"
	.string "...\p"
	.string "Would you please give me a moment?$"

LilyPond_Fisherman_C_Text_4:
# 322 "data//maps/IvyRiver/scripts.pory"
	.string "My brothers and I fish around Lily Pond.\n"
	.string "We have a connection to this place -\l"
	.string "although not a happy one.\p"
	.string "Do you want to hear our story?$"

LilyPond_Fisherman_C_Text_5:
# 325 "data//maps/IvyRiver/scripts.pory"
	.string "Just as well. It hurts to tell it.$"

LilyPond_Fisherman_C_Text_6:
# 329 "data//maps/IvyRiver/scripts.pory"
	.string "We were four brothers. Many years ago,\n"
	.string "we came to Lily Pond to fish for our\l"
	.string "first Pokémon. While three of us stayed\l"
	.string "here, our youngest brother said he\l"
	.string "wanted to go down the waterfall and\l"
	.string "into Ivy River. We tried to stop him, but\l"
	.string "he went away, and was never seen again.$"

LilyPond_Fisherman_C_Text_7:
# 332 "data//maps/IvyRiver/scripts.pory"
	.string "A sad story, I know.$"

IvyRiver_Ranger_Blocker_Text_0:
# 341 "data//maps/IvyRiver/scripts.pory"
	.string "Sorry - to access the Ivy River Ranger\n"
	.string "Institute, you must be a member.$"
