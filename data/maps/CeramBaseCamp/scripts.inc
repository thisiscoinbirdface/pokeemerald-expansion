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


CeramBaseCamp_EventScript_ExitTrigger::
# 20 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCamp_EventScript_ExitTrigger_2
# 22 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 23 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 7, CeramBaseCamp_EventScript_ExitTrigger_Movement_0
# 24 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 25 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 26 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_EventScript_ExitTrigger_Text_0
# 27 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 28 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_EventScript_ExitTrigger_Movement_1
# 29 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 30 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_EventScript_ExitTrigger_2:
	end


CeramBaseCamp_NPC_Exit::
# 34 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 35 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 36 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC_Exit_Text_0
# 37 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC1::
# 43 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 44 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 45 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC1_Text_0
# 46 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC2::
# 51 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 52 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 53 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC2_Text_0
# 54 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC3::
# 59 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 60 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 61 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC3_Text_0
# 62 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC4::
# 67 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 69 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_CYNDAQUIL_TM, CeramBaseCamp_NPC4_2
# 79 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_1
# 81 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 82 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_2
# 85 "data//maps/CeramBaseCamp/scripts.pory"
	checkitem ITEM_TM_SUNNY_DAY
# 86 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_NPC4_5
# 99 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_7
CeramBaseCamp_NPC4_4:
# 102 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_NPC4_Movement_0
# 103 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 104 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_NPC4_2:
# 70 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 71 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_0
# 72 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_NPC4_Movement_0
# 73 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 74 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_NPC4_5:
# 87 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_3, MSGBOX_YESNO
# 88 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_NPC4_8
# 96 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_6
	goto CeramBaseCamp_NPC4_4

CeramBaseCamp_NPC4_8:
# 89 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_4
# 90 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 91 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_NPC4_Movement_1
# 92 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 93 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC4_Text_5
# 94 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem ITEM_CHARCOAL
	goto CeramBaseCamp_NPC4_4


CeramBaseCamp_NPC5::
# 109 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 110 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 111 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_0
# 113 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPCITEM, CeramBaseCamp_NPC5_2
# 116 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_1
# 117 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 118 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPCITEM
CeramBaseCamp_NPC5_1:
# 120 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_NPC5_2:
	goto CeramBaseCamp_NPC5_1


CeramBaseCamp_Sign1::
# 139 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Sign1_Text_0, MSGBOX_SIGN
	end


CeramBaseCamp_Sign2::
# 145 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Sign2_Text_0, MSGBOX_SIGN
	end


CeramBaseCamp_Excadrill::
# 151 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EXCADRILL, CeramBaseCamp_Excadrill_2
# 159 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_1, MSGBOX_YESNO
# 160 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 161 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Excadrill_5
CeramBaseCamp_Excadrill_1:
# 186 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_2:
# 153 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_0
# 154 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_5:
# 164 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_DRILBUR, CRY_MODE_ENCOUNTER
# 165 "data//maps/CeramBaseCamp/scripts.pory"
	delay 40
# 166 "data//maps/CeramBaseCamp/scripts.pory"
	waitmoncry
# 167 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_2
# 168 "data//maps/CeramBaseCamp/scripts.pory"
	setwildbattle SPECIES_EXCADRILL, 10
# 169 "data//maps/CeramBaseCamp/scripts.pory"
	dowildbattle
# 172 "data//maps/CeramBaseCamp/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 173 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CeramBaseCamp_Excadrill_8
CeramBaseCamp_Excadrill_7:
# 176 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CeramBaseCamp_Excadrill_11
CeramBaseCamp_Excadrill_10:
# 179 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CeramBaseCamp_Excadrill_13
	goto CeramBaseCamp_Excadrill_1

CeramBaseCamp_Excadrill_8:
# 174 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_7

CeramBaseCamp_Excadrill_11:
# 177 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_10

CeramBaseCamp_Excadrill_13:
# 180 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_3
	goto CeramBaseCamp_Excadrill_1


# 11 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_RedBlockGym_Movement_0:
# 11 "data//maps/CeramBaseCamp/scripts.pory"
	face_down
	step_end

# 23 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_EventScript_ExitTrigger_Movement_0:
# 23 "data//maps/CeramBaseCamp/scripts.pory"
	face_left
# 23 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

# 28 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_EventScript_ExitTrigger_Movement_1:
# 28 "data//maps/CeramBaseCamp/scripts.pory"
	walk_down
	step_end

# 72 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_NPC4_Movement_0:
# 72 "data//maps/CeramBaseCamp/scripts.pory"
	face_up
	step_end

# 91 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_NPC4_Movement_1:
# 91 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

CeramBaseCamp_RedBlockGym_Text_0:
# 9 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Gym Leader's gone to the Supply\n"
	.string "Depot to sort out some commotion\l"
	.string "there.$"

CeramBaseCamp_EventScript_ExitTrigger_Text_0:
# 26 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Hey kid! The rules are you can't climb\n"
	.string "unless you have the FIRE BADGE. If you\l"
	.string "can't beat ARIAN, you won't be able to\l"
	.string "handle the heat of the mountain!$"

CeramBaseCamp_NPC_Exit_Text_0:
# 36 "data//maps/CeramBaseCamp/scripts.pory"
	.string "MT CERAM is dangerous because once you\n"
	.string "enter you can't come back. For safety\l"
	.string "reasons, we don't allow trainers without\l"
	.string "at least two gym badges to pass.$"

CeramBaseCamp_NPC1_Text_0:
# 45 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Since the base camp is so small, the\n"
	.string "Pokemon League clubbed the gym and\l"
	.string "camp management office into one.$"

CeramBaseCamp_NPC2_Text_0:
# 53 "data//maps/CeramBaseCamp/scripts.pory"
	.string "This camp was established to dig a\n"
	.string "tunnel through MT CERAM to SILVERSUN\l"
	.string "CITY. Old equipment from back then is\l"
	.string "left here. I remember a DRILBUR made\l"
	.string "its home inside one of these machines\l"
	.string "and refused to leave! Haha!$"

CeramBaseCamp_NPC3_Text_0:
# 61 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We get many hikers and collectors pass\n"
	.string "through the base camp, because they\l"
	.string "want to climb Mt. Ceram.$"

CeramBaseCamp_NPC4_Text_0:
# 71 "data//maps/CeramBaseCamp/scripts.pory"
	.string "CYNDAQUIL and I do everything\n"
	.string "together!$"

CeramBaseCamp_NPC4_Text_1:
# 79 "data//maps/CeramBaseCamp/scripts.pory"
	.string "C'mon CYNDAQUIL!\p"
	.string "CYNDAQUI: quiiillll!!!\p"
	.string "Sigh, it's just not good enough...$"

CeramBaseCamp_NPC4_Text_2:
# 82 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We battled ARIAN and CYNDAQUIL saw the\n"
	.string "move SUNNY DAY for the first time!\l"
	.string "Since then we've been trying to learn it\l"
	.string "but it's just not working...say, you\l"
	.string "wouldn't happen to have the TM, would\l"
	.string "you? If you can teach my CYNDAQUIL the\l"
	.string "move SUNNY DAY, that'd be really\l"
	.string "helpful.$"

CeramBaseCamp_NPC4_Text_3:
# 87 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Teach CYNDAQUIL the move SUNNY DAY?$"

CeramBaseCamp_NPC4_Text_4:
# 89 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Using TM on CYNDAQUIL...\p"
	.string "...poof!\p"
	.string "CYNDAQUIL has learned SUNNY DAY!$"

CeramBaseCamp_NPC4_Text_5:
# 93 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Thank you! Isn't this great, CYNDAQUIL?\p"
	.string "CYNDAQUIL: quiii!!!\p"
	.string "Here, you must take this. No no, I\n"
	.string "insist.$"

CeramBaseCamp_NPC4_Text_6:
# 96 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Oh well. See you.$"

CeramBaseCamp_NPC4_Text_7:
# 99 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Oh, but it looks like you don't have the\n"
	.string "TM. Oh well, back to training I guess!$"

CeramBaseCamp_NPC5_Text_0:
# 111 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Mt. Ceram's geology is unique. Many rare\n"
	.string "rocks can be found up there.$"

CeramBaseCamp_NPC5_Text_1:
# 116 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Here, have one.$"

CeramBaseCamp_Sign1_Text_0:
# 139 "data//maps/CeramBaseCamp/scripts.pory"
	.string "CERAM BASE CAMP\n"
	.string "Starting point for Mt. Ceram treks.$"

CeramBaseCamp_Sign2_Text_0:
# 145 "data//maps/CeramBaseCamp/scripts.pory"
	.string "{UP_ARROW} MT CERAM\n"
	.string "Supplies available at depot next door.$"

CeramBaseCamp_Excadrill_Text_0:
# 153 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill.$"

CeramBaseCamp_Excadrill_Text_1:
# 159 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill...peek inside?$"

CeramBaseCamp_Excadrill_Text_2:
# 167 "data//maps/CeramBaseCamp/scripts.pory"
	.string "A wild {PKMN} attacks!$"

CeramBaseCamp_Excadrill_Text_3:
# 180 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The DRILBUR retreats back into its\n"
	.string "home. Better not disturb it again!$"
