# 1 "data//maps/IvyRiver/scripts.pory"

# 2 "data//maps/IvyRiver/scripts.pory"
    .set LOCALID_DR_FR, 7
# 3 "data//maps/IvyRiver/scripts.pory"
    .set LOCALID_DR_SC, 6

IvyRiver_MapScripts::
	.byte 0


LilyPond_Dreepy_Trigger_First::
# 18 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_LILYPOND_DREEPY_FIRST, LilyPond_Dreepy_Trigger_First_2
# 20 "data//maps/IvyRiver/scripts.pory"
	lockall
# 21 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 22 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_FR, LilyPond_Dreepy_Trigger_First_Movement_0
# 23 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 25 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 26 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_FR, LilyPond_Dreepy_Trigger_First_Movement_1
# 27 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 28 "data//maps/IvyRiver/scripts.pory"
	delay 40
# 30 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_FR, LilyPond_Dreepy_Trigger_First_Movement_2
# 31 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 32 "data//maps/IvyRiver/scripts.pory"
	removeobject LOCALID_DR_FR
# 34 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_DREEPY_FIRST
	return

LilyPond_Dreepy_Trigger_First_2:
	end


LilyPond_Dreepy_Trigger_Second::
# 39 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_LILYPOND_DREEPY_SECOND, LilyPond_Dreepy_Trigger_Second_2
# 41 "data//maps/IvyRiver/scripts.pory"
	lockall
# 42 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 43 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_0
# 44 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 46 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 47 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_1
# 48 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 49 "data//maps/IvyRiver/scripts.pory"
	delay 40
# 51 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_2
# 52 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 53 "data//maps/IvyRiver/scripts.pory"
	removeobject LOCALID_DR_SC
# 55 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_DREEPY_SECOND
	return

LilyPond_Dreepy_Trigger_Second_2:
	end


# 22 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_First_Movement_0:
# 22 "data//maps/IvyRiver/scripts.pory"
	face_left
# 22 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 26 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_First_Movement_1:
# 26 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 26 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 26 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 26 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
	step_end

# 30 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_First_Movement_2:
# 30 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 30 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 30 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 30 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 30 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 30 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end

# 43 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_0:
# 43 "data//maps/IvyRiver/scripts.pory"
	face_down
# 43 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 47 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_1:
# 47 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 47 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 47 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 47 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 47 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 47 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 47 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
	step_end

# 51 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_2:
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 51 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
	step_end
