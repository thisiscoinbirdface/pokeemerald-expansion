PellucaCityHouses_MapScripts::
	.byte 0


PellucaCityHouses_GabSibling1::
# 8 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling1_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_GabSibling2::
# 12 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling2_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_GabSibling3::
# 16 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 17 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 18 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_0
# 19 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 20 "data//maps/PellucaCityHouses/scripts.pory"
	showmonpic SPECIES_JANGMO_O, 10, 3
# 21 "data//maps/PellucaCityHouses/scripts.pory"
	delay 120
# 22 "data//maps/PellucaCityHouses/scripts.pory"
	hidemonpic
# 23 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_1, MSGBOX_NPC
# 24 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_NPC1::
# 32 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 6
	goto_if_eq PellucaCityHouses_NPC1_2
# 38 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCityHouses_NPC1_5
# 71 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_8, MSGBOX_NPC
	end

PellucaCityHouses_NPC1_2:
# 34 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_0, MSGBOX_NPC
	end

PellucaCityHouses_NPC1_5:
# 40 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_1, MSGBOX_NPC
# 41 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 42 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_NPC1_Movement_0
# 43 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 44 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_2, MSGBOX_NPC
# 45 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 46 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_NPC1_Movement_0
# 47 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 48 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_3
# 49 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_NPC1_Text_4, PellucaCityHouses_NPC1_Text_5
# 51 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_NPC1_8
PellucaCityHouses_NPC1_7:
# 64 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_NPC1_11
PellucaCityHouses_NPC1_10:
	end

PellucaCityHouses_NPC1_8:
# 52 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_6, MSGBOX_NPC
# 53 "data//maps/PellucaCityHouses/scripts.pory"
	startquest QUEST_PELLUCA_MAYOR
# 54 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON1
# 55 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON2
# 56 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON3
# 57 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON4
# 58 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON5
# 59 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 1
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_NPC1_7

PellucaCityHouses_NPC1_11:
# 65 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_7, MSGBOX_NPC
	goto PellucaCityHouses_NPC1_10


PellucaCity_Clauncher::
# 77 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 78 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 79 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_0
# 80 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 81 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_TO_WHITE
# 82 "data//maps/PellucaCityHouses/scripts.pory"
	removeobject VAR_LAST_TALKED
# 83 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 84 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_1
# 86 "data//maps/PellucaCityHouses/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 88 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_NPC2::
# 96 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC3::
# 100 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC4::
# 104 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_Delphox::
# 112 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 113 "data//maps/PellucaCityHouses/scripts.pory"
	playmoncry SPECIES_DELPHOX, CRY_MODE_NORMAL
# 114 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 115 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Delphox_Text_0, MSGBOX_NPC
# 116 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


# 42 "data//maps/PellucaCityHouses/scripts.pory"
PellucaCityHouses_NPC1_Movement_0:
# 42 "data//maps/PellucaCityHouses/scripts.pory"
	emote_exclamation_mark
	step_end

PellucaCityHouses_GabSibling1_Text_0:
# 8 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Yay! Big Sis is back! Big Bro got her a\n"
	.string "present too!$"

PellucaCityHouses_GabSibling2_Text_0:
# 12 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I wish Big Sis stayed with us all the\n"
	.string "time!$"

PellucaCityHouses_GabSibling3_Text_0:
# 18 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Gabrielle keeps us afloat. Without her,\n"
	.string "I wouldn't be able to afford to study. I\l"
	.string "got her a gift.$"

PellucaCityHouses_GabSibling3_Text_1:
# 23 "data//maps/PellucaCityHouses/scripts.pory"
	.string "A traveling merchant sold it to me. It's\n"
	.string "the least I can do for her.$"

PellucaCityHouses_NPC1_Text_0:
# 34 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Well done!$"

PellucaCityHouses_NPC1_Text_1:
# 40 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I'm the mayor of Pelluca City. Since we\n"
	.string "sit at the intersection of the Ivy\l"
	.string "River and the Hoya River, it's split up\l"
	.string "into several small islands. You know\l"
	.string "what that means?$"

PellucaCityHouses_NPC1_Text_2:
# 44 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It means Claunchers washed ashore\n"
	.string "every other day! It's a massive\l"
	.string "maintenance cost just trying to send\l"
	.string "all the Claunchers back into the water!\l"
	.string "Not to mention the poor Pokemon stuck\l"
	.string "ashore.$"

PellucaCityHouses_NPC1_Text_3:
# 48 "data//maps/PellucaCityHouses/scripts.pory"
	.string "You think all the money I make is worth\n"
	.string "it? Look at my hair - it's going white!\p"
	.string "Sigh...sometimes it's just too much,\n"
	.string "trying to manage all this...$"

PellucaCityHouses_NPC1_Text_4:
# 49 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Can I help?$"

PellucaCityHouses_NPC1_Text_5:
# 49 "data//maps/PellucaCityHouses/scripts.pory"
	.string "That's too bad$"

PellucaCityHouses_NPC1_Text_6:
# 52 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My dear trainer! You have a heart of\n"
	.string "gold. I was merely letting out some\l"
	.string "steam, but I would be a fool not to take\l"
	.string "you up on your offer! I can most\l"
	.string "certainly make it worth your while, of\l"
	.string "course. Please scout all the riverbanks\l"
	.string "across the city and put five Claunchers\l"
	.string "you see back into the river?$"

PellucaCityHouses_NPC1_Text_7:
# 65 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Yes, well, one has to do what one must.\n"
	.string "Please enjoy your stay in Pelluca City!$"

PellucaCityHouses_NPC1_Text_8:
# 71 "data//maps/PellucaCityHouses/scripts.pory"
	.string "How's it going?$"

PellucaCity_Clauncher_Text_0:
# 79 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Clauncher! It's looking\n"
	.string "disoriented.\p"
	.string "{PLAYER} gently lifts the Clauncher\n"
	.string "and tosses it back into the river.$"

PellucaCity_Clauncher_Text_1:
# 84 "data//maps/PellucaCityHouses/scripts.pory"
	.string "See you Clauncher!$"

PellucaCityHouses_NPC2_Text_0:
# 96 "data//maps/PellucaCityHouses/scripts.pory"
	.string "We we born here here, fell in love here,\n"
	.string "and grew old here.$"

PellucaCityHouses_NPC3_Text_0:
# 100 "data//maps/PellucaCityHouses/scripts.pory"
	.string "After so long together, love gets\n"
	.string "replaced by companionship. But it's\l"
	.string "always there, somewhere beneath the\l"
	.string "surface.$"

PellucaCityHouses_NPC4_Text_0:
# 104 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My Delphox doesn't like the river air.\n"
	.string "She prefers the dense fog of Vilethorn\l"
	.string "Woods, where I caught her.$"

PellucaCityHouses_Delphox_Text_0:
# 115 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Delphox looks wistful...$"
