CeramBaseCamp_House1_MapScripts::
	.byte 0


CeramBaseCamp_House1_NPC::
# 5 "data//maps/CeramBaseCamp_House1/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_ALTARIA_FEATHER, CeramBaseCamp_House1_NPC_2
# 29 "data//maps/CeramBaseCamp_House1/scripts.pory"
	msgbox CeramBaseCamp_House1_NPC_Text_2
# 30 "data//maps/CeramBaseCamp_House1/scripts.pory"
	release
CeramBaseCamp_House1_NPC_1:
	end

CeramBaseCamp_House1_NPC_2:
# 6 "data//maps/CeramBaseCamp_House1/scripts.pory"
	checkitem ITEM_PRETTY_FEATHER
# 7 "data//maps/CeramBaseCamp_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_House1_NPC_5
# 25 "data//maps/CeramBaseCamp_House1/scripts.pory"
	msgbox CeramBaseCamp_House1_NPC_Text_2
# 26 "data//maps/CeramBaseCamp_House1/scripts.pory"
	release
	goto CeramBaseCamp_House1_NPC_1

CeramBaseCamp_House1_NPC_5:
# 8 "data//maps/CeramBaseCamp_House1/scripts.pory"
	msgbox CeramBaseCamp_House1_NPC_Text_0, MSGBOX_YESNO
# 10 "data//maps/CeramBaseCamp_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_House1_NPC_8
	end

CeramBaseCamp_House1_NPC_8:
# 11 "data//maps/CeramBaseCamp_House1/scripts.pory"
	delay 16
# 12 "data//maps/CeramBaseCamp_House1/scripts.pory"
	msgbox CeramBaseCamp_House1_NPC_Text_1
# 13 "data//maps/CeramBaseCamp_House1/scripts.pory"
	release
# 14 "data//maps/CeramBaseCamp_House1/scripts.pory"
	delay 16
# 15 "data//maps/CeramBaseCamp_House1/scripts.pory"
	applymovement 1, CeramBaseCamp_House1_NPC_Movement_0
# 16 "data//maps/CeramBaseCamp_House1/scripts.pory"
	waitmovement 0
	end


CeramBaseCamp_House1_Pokemon::
# 37 "data//maps/CeramBaseCamp_House1/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_ALTARIA_FEATHER, CeramBaseCamp_House1_Pokemon_2
# 43 "data//maps/CeramBaseCamp_House1/scripts.pory"
	lockall
# 44 "data//maps/CeramBaseCamp_House1/scripts.pory"
	faceplayer
# 45 "data//maps/CeramBaseCamp_House1/scripts.pory"
	msgbox CeramBaseCamp_House1_Pokemon_Text_1
# 46 "data//maps/CeramBaseCamp_House1/scripts.pory"
	release
# 47 "data//maps/CeramBaseCamp_House1/scripts.pory"
	applymovement 2, CeramBaseCamp_House1_Pokemon_Movement_0
# 48 "data//maps/CeramBaseCamp_House1/scripts.pory"
	msgbox CeramBaseCamp_House1_Pokemon_Text_2
# 49 "data//maps/CeramBaseCamp_House1/scripts.pory"
	giveitem ITEM_PRETTY_FEATHER
# 50 "data//maps/CeramBaseCamp_House1/scripts.pory"
	release
# 51 "data//maps/CeramBaseCamp_House1/scripts.pory"
	delay 30
# 53 "data//maps/CeramBaseCamp_House1/scripts.pory"
	applymovement 2, CeramBaseCamp_House1_Pokemon_Movement_1
# 54 "data//maps/CeramBaseCamp_House1/scripts.pory"
	waitmovement 2
# 55 "data//maps/CeramBaseCamp_House1/scripts.pory"
	msgbox CeramBaseCamp_House1_Pokemon_Text_3, MSGBOX_NPC
# 56 "data//maps/CeramBaseCamp_House1/scripts.pory"
	setflag FLAG_CERAMBASECAMP_ALTARIA_FEATHER
# 57 "data//maps/CeramBaseCamp_House1/scripts.pory"
	releaseall
	return

CeramBaseCamp_House1_Pokemon_2:
# 38 "data//maps/CeramBaseCamp_House1/scripts.pory"
	msgbox CeramBaseCamp_House1_Pokemon_Text_0, MSGBOX_NPC
	end


# 15 "data//maps/CeramBaseCamp_House1/scripts.pory"
CeramBaseCamp_House1_NPC_Movement_0:
# 15 "data//maps/CeramBaseCamp_House1/scripts.pory"
	emote_exclamation_mark
# 15 "data//maps/CeramBaseCamp_House1/scripts.pory"
	jump_in_place_right
	step_end

# 47 "data//maps/CeramBaseCamp_House1/scripts.pory"
CeramBaseCamp_House1_Pokemon_Movement_0:
# 47 "data//maps/CeramBaseCamp_House1/scripts.pory"
	emote_exclamation_mark
	step_end

# 53 "data//maps/CeramBaseCamp_House1/scripts.pory"
CeramBaseCamp_House1_Pokemon_Movement_1:
# 53 "data//maps/CeramBaseCamp_House1/scripts.pory"
	jump_in_place_left
# 53 "data//maps/CeramBaseCamp_House1/scripts.pory"
	emote_exclamation_mark
	step_end

CeramBaseCamp_House1_NPC_Text_0:
# 8 "data//maps/CeramBaseCamp_House1/scripts.pory"
	.string "She's fallen asleep on her chair...such\n"
	.string "peace can only come with clarity.\p"
	.string "Tickle her nose with a Pretty Feather?$"

CeramBaseCamp_House1_NPC_Text_1:
# 12 "data//maps/CeramBaseCamp_House1/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

CeramBaseCamp_House1_NPC_Text_2:
# 25 "data//maps/CeramBaseCamp_House1/scripts.pory"
	.string "She's fallen asleep on her chair...such\n"
	.string "peace can only come with clarity.$"

CeramBaseCamp_House1_Pokemon_Text_0:
# 38 "data//maps/CeramBaseCamp_House1/scripts.pory"
	.string "Altaria is dancing! It looks so joyous.\n"
	.string "Better not distract it!$"

CeramBaseCamp_House1_Pokemon_Text_1:
# 45 "data//maps/CeramBaseCamp_House1/scripts.pory"
	.string "Altaria is dancing! What rhythm is this?\p"
	.string "...\p"
	.string "It's so elegant...$"

CeramBaseCamp_House1_Pokemon_Text_2:
# 48 "data//maps/CeramBaseCamp_House1/scripts.pory"
	.string "Altaria comes closer and ruffles one of\n"
	.string "its glorious wings...\p"
	.string "...\p"
	.string "...a feather floats gently in your palm.$"

CeramBaseCamp_House1_Pokemon_Text_3:
# 55 "data//maps/CeramBaseCamp_House1/scripts.pory"
	.string "Altaria nods towards the lady sleeping\n"
	.string "in the chair...what does it want?$"
