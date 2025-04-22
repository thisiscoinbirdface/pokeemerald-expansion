# 1 "data//maps/IvyRiver/scripts.pory"

# 2 "data//maps/IvyRiver/scripts.pory"
    .set LOCALID_DR_FR, 7
# 3 "data//maps/IvyRiver/scripts.pory"
    .set LOCALID_DR_SC, 6

IvyRiver_MapScripts::
	.byte 0


LilyPond_Dreepy_Trigger_Second::
# 16 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_LILYPOND_DREEPY_SECOND, LilyPond_Dreepy_Trigger_Second_2
# 18 "data//maps/IvyRiver/scripts.pory"
	lockall
# 19 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 20 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_0
# 21 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 23 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 24 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_1
# 25 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 26 "data//maps/IvyRiver/scripts.pory"
	delay 40
# 28 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_SC, LilyPond_Dreepy_Trigger_Second_Movement_2
# 29 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 30 "data//maps/IvyRiver/scripts.pory"
	removeobject LOCALID_DR_SC
# 32 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_DREEPY_SECOND
	return

LilyPond_Dreepy_Trigger_Second_2:
	end


LilyPond_Dreepy_Trigger_First::
# 37 "data//maps/IvyRiver/scripts.pory"
	goto_if_set FLAG_LILYPOND_DREEPY_FIRST, LilyPond_Dreepy_Trigger_First_2
# 39 "data//maps/IvyRiver/scripts.pory"
	lockall
# 40 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 41 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_FR, LilyPond_Dreepy_Trigger_First_Movement_0
# 42 "data//maps/IvyRiver/scripts.pory"
	delay 24
# 44 "data//maps/IvyRiver/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 45 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_FR, LilyPond_Dreepy_Trigger_First_Movement_1
# 46 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 47 "data//maps/IvyRiver/scripts.pory"
	delay 40
# 49 "data//maps/IvyRiver/scripts.pory"
	applymovement LOCALID_DR_FR, LilyPond_Dreepy_Trigger_First_Movement_2
# 50 "data//maps/IvyRiver/scripts.pory"
	waitmovement 0
# 51 "data//maps/IvyRiver/scripts.pory"
	removeobject LOCALID_DR_FR
# 53 "data//maps/IvyRiver/scripts.pory"
	setflag FLAG_LILYPOND_DREEPY_FIRST
	return

LilyPond_Dreepy_Trigger_First_2:
	end


# 20 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_0:
# 20 "data//maps/IvyRiver/scripts.pory"
	face_down
# 20 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 24 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_1:
# 24 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 24 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 24 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 24 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 24 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 24 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
	step_end

# 28 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_Second_Movement_2:
# 28 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 28 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 28 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 28 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 28 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
# 28 "data//maps/IvyRiver/scripts.pory"
	walk_fast_up
	step_end

# 41 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_First_Movement_0:
# 41 "data//maps/IvyRiver/scripts.pory"
	face_left
# 41 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
	step_end

# 45 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_First_Movement_1:
# 45 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 45 "data//maps/IvyRiver/scripts.pory"
	emote_exclamation_mark
# 45 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
# 45 "data//maps/IvyRiver/scripts.pory"
	jump_in_place_left
	step_end

# 49 "data//maps/IvyRiver/scripts.pory"
LilyPond_Dreepy_Trigger_First_Movement_2:
# 49 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 49 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 49 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 49 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 49 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
# 49 "data//maps/IvyRiver/scripts.pory"
	walk_fast_down
	step_end
