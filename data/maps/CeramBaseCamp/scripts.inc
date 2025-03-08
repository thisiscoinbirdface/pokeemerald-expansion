CeramBaseCamp_MapScripts::
	.byte 0


CeramBaseCamp_RedBlockGym::
# 7 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 8 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 9 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_RedBlockGym_Text_0
# 10 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 11 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 8, CeramBaseCamp_RedBlockGym_Movement_0
# 12 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC1::
# 17 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 18 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 19 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC1_Text_0
# 20 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC2::
# 25 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 26 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 27 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC2_Text_0
# 28 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC3::
# 33 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 34 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 35 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC3_Text_0
# 36 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC4::
# 41 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 42 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 44 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_CYNDAQUIL_TM, CeramBaseCamp_NPC4_2
# 53 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_1
# 55 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_NPC4_Movement_1
# 56 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_2
# 59 "data//maps/CeramBaseCamp/scripts.pory"
	checkitem ITEM_TM_SUNNY_DAY
# 60 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_NPC4_5
# 73 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_7
CeramBaseCamp_NPC4_4:
# 76 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_NPC4_Movement_0
# 77 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 78 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_NPC4_2:
# 45 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_0
# 46 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_NPC4_Movement_0
# 47 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 48 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_NPC4_5:
# 61 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_3, MSGBOX_YESNO
# 62 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_NPC4_8
# 70 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_6
	goto CeramBaseCamp_NPC4_4

CeramBaseCamp_NPC4_8:
# 63 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_4
# 64 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 65 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_NPC4_Movement_2
# 66 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 67 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_5
# 68 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem ITEM_CHARCOAL
	goto CeramBaseCamp_NPC4_4


CeramBaseCamp_NPC5::
# 83 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 84 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 85 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_0
# 87 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPCITEM, CeramBaseCamp_NPC5_2
# 90 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 91 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPCITEM
CeramBaseCamp_NPC5_1:
# 93 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_NPC5_2:
	goto CeramBaseCamp_NPC5_1


CeramBaseCamp_Sign1::
# 112 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Sign1_Text_0, MSGBOX_SIGN
	end


CeramBaseCamp_Sign1::
# 118 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Sign1_Text_0, MSGBOX_SIGN
	end


CeramBaseCamp_Excalidrill::
# 124 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excalidrill_Text_0, MSGBOX_YESNO
# 126 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Excalidrill_2
CeramBaseCamp_Excalidrill_1:
	end

CeramBaseCamp_Excalidrill_2:
# 128 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_EXCALIDRILL, CRY_MODE_ENCOUNTER
# 129 "data//maps/CeramBaseCamp/scripts.pory"
	delay 40
# 130 "data//maps/CeramBaseCamp/scripts.pory"
	waitmoncry
# 131 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excalidrill_Text_1
# 132 "data//maps/CeramBaseCamp/scripts.pory"
	setwildbattle SPECIES_EXCALIDRILL, 10
# 133 "data//maps/CeramBaseCamp/scripts.pory"
	dowildbattle
# 135 "data//maps/CeramBaseCamp/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 136 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CeramBaseCamp_Excalidrill_5
CeramBaseCamp_Excalidrill_4:
# 139 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CeramBaseCamp_Excalidrill_7
	goto CeramBaseCamp_Excalidrill_1

CeramBaseCamp_Excalidrill_5:
# 137 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCALIDRILL
	goto CeramBaseCamp_Excalidrill_4

CeramBaseCamp_Excalidrill_7:
# 140 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excalidrill_Text_2
	goto CeramBaseCamp_Excalidrill_1


# 11 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_RedBlockGym_Movement_0:
# 11 "data//maps/CeramBaseCamp/scripts.pory"
	face_down
	step_end

# 46 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_NPC4_Movement_0:
# 46 "data//maps/CeramBaseCamp/scripts.pory"
	face_up
	step_end

# 55 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_NPC4_Movement_1:
# 55 "data//maps/CeramBaseCamp/scripts.pory"
	face_right
	step_end

# 65 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_NPC4_Movement_2:
# 65 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

CeramBaseCamp_RedBlockGym_Text_0:
# 9 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Gym Leader's gone to the Supply\n"
	.string "Depot to sort out some commotion\l"
	.string "there.$"

CeramBaseCamp_NPC1_Text_0:
# 19 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Since the base camp is so small, the\n"
	.string "Pokemon League clubbed the gym and\l"
	.string "camp management office into one.$"

CeramBaseCamp_NPC2_Text_0:
# 27 "data//maps/CeramBaseCamp/scripts.pory"
	.string "This camp was initially established to\n"
	.string "dig a tunnel through Mt. Ceram to\l"
	.string "Goldensun City. Old equipment from back\l"
	.string "then is left here. I remember one of the\l"
	.string "Drilburs made their home inside one of\l"
	.string "these machines and refused to leave!\l"
	.string "Haha! That was many years ago. It must\l"
	.string "have evolved now.$"

CeramBaseCamp_NPC3_Text_0:
# 35 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We get many hikers and collectors pass\n"
	.string "through the base camp, because they\l"
	.string "want to climb Mt. Ceram.$"

CeramBaseCamp_NPC4_Text_0:
# 45 "data//maps/CeramBaseCamp/scripts.pory"
	.string "CYNDAQUIL and I do everything\n"
	.string "together!$"

CeramBaseCamp_NPC4_Text_1:
# 53 "data//maps/CeramBaseCamp/scripts.pory"
	.string "C'mon CYNDAQUIL!\p"
	.string "CYNDAQUI: quiiillll!!!\p"
	.string "Sigh, it's just not good enough...$"

CeramBaseCamp_NPC4_Text_2:
# 56 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We battled ARIAN and CYNDAQUIL saw the\n"
	.string "move SUNNY DAY for the first time!\l"
	.string "Since then we've been trying to learn it\l"
	.string "but it's just not working...say, you\l"
	.string "wouldn't happen to have the TM, would\l"
	.string "you? If you can teach my CYNDAQUIL the\l"
	.string "move SUNNY DAY, that'd be really\l"
	.string "helpful.$"

CeramBaseCamp_NPC4_Text_3:
# 61 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Teach CYNDAQUIL the move SUNNY DAY?$"

CeramBaseCamp_NPC4_Text_4:
# 63 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Using TM on CYNDAQUIL...\p"
	.string "...poof!\p"
	.string "CYNDAQUIL has learned SUNNY DAY!$"

CeramBaseCamp_NPC4_Text_5:
# 67 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Thank you! Isn't this great, CYNDAQUIL?\p"
	.string "CYNDAQUIL: quiii!!!\p"
	.string "Here, you must take this. No no, I\n"
	.string "insist.$"

CeramBaseCamp_NPC4_Text_6:
# 70 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Oh well. See you.$"

CeramBaseCamp_NPC4_Text_7:
# 73 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Oh, but it looks like you don't have the\n"
	.string "TM. Oh well, back to training I guess!$"

CeramBaseCamp_NPC5_Text_0:
# 85 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Mt. Ceram's geology is unique. For some\n"
	.string "reason, many rare rocks can be found up\l"
	.string "there. Here, have one.$"

CeramBaseCamp_Sign1_Text_0:
# 112 "data//maps/CeramBaseCamp/scripts.pory"
	.string "CARABRUE TOWN\n"
	.string "An idyllic hill station.$"

CeramBaseCamp_Excalidrill_Text_0:
# 124 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill...peek inside?$"

CeramBaseCamp_Excalidrill_Text_1:
# 131 "data//maps/CeramBaseCamp/scripts.pory"
	.string "A wild {PKMN} attacks!$"

CeramBaseCamp_Excalidrill_Text_2:
# 140 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Excalidrill retreats back into its\n"
	.string "home. Better not disturb it again!$"
