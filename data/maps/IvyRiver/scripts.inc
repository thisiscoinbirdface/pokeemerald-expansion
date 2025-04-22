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
# 125 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 126 "data//maps/IvyRiver/scripts.pory"
	applymovement 1, LilyPond_Cave_Lapras_Movement_1
# 127 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_2
# 128 "data//maps/IvyRiver/scripts.pory"
	applymovement 4, LilyPond_Cave_Lapras_Movement_3
# 129 "data//maps/IvyRiver/scripts.pory"
	applymovement 5, LilyPond_Cave_Lapras_Movement_3
# 130 "data//maps/IvyRiver/scripts.pory"
	applymovement 6, LilyPond_Cave_Lapras_Movement_3
# 131 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 133 "data//maps/IvyRiver/scripts.pory"
	delay 8
# 134 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_4
# 135 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 137 "data//maps/IvyRiver/scripts.pory"
	delay 16
# 139 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_0
# 140 "data//maps/IvyRiver/scripts.pory"
	msgbox LilyPond_Cave_Lapras_Text_4
# 141 "data//maps/IvyRiver/scripts.pory"
	release
# 142 "data//maps/IvyRiver/scripts.pory"
	applymovement 3, LilyPond_Cave_Lapras_Movement_5
# 143 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 145 "data//maps/IvyRiver/scripts.pory"
	removeobject 1
# 146 "data//maps/IvyRiver/scripts.pory"
	removeobject 3
# 147 "data//maps/IvyRiver/scripts.pory"
	removeobject 4
# 148 "data//maps/IvyRiver/scripts.pory"
	removeobject 5
# 149 "data//maps/IvyRiver/scripts.pory"
	removeobject 6
# 151 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_LAPRAS
	return

LilyPond_Cave_Lapras_2:
	end

LilyPond_Cave_Lapras_5:
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

# 126 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_1:
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 126 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 127 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_2:
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 127 "data//maps/IvyRiver/scripts.pory"
	walk_down
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
# 128 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 128 "data//maps/IvyRiver/scripts.pory"
	walk_down
# 128 "data//maps/IvyRiver/scripts.pory"
	walk_down
	step_end

# 134 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_4:
# 134 "data//maps/IvyRiver/scripts.pory"
	walk_left
# 134 "data//maps/IvyRiver/scripts.pory"
	walk_up
# 134 "data//maps/IvyRiver/scripts.pory"
	walk_up
	step_end

# 142 "data//maps/IvyRiver/scripts.pory"
LilyPond_Cave_Lapras_Movement_5:
# 142 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 142 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 142 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 142 "data//maps/IvyRiver/scripts.pory"
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
# 140 "data//maps/IvyRiver/scripts.pory"
	.string "DREEPY: dreee!!!$"
