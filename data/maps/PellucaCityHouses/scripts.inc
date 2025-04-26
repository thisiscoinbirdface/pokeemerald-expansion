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


PellucaCityHouses_Mayor_Reward::
# 36 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Mayor_Reward_Text_0, MSGBOX_NPC
# 37 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_Mayor_Reward_Text_1, PellucaCityHouses_Mayor_Reward_Text_2
# 38 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_Mayor_Reward_1
# 41 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward2
	return

PellucaCityHouses_Mayor_Reward_1:
# 39 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward1
	return


PellucaCityHouses_Mayor_Reward1::
# 46 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_0x8006, ITEM_WEAKNESS_POLICY
# 47 "data//maps/PellucaCityHouses/scripts.pory"
	showitemdescription
# 48 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Mayor_Reward1_Text_0, MSGBOX_YESNO
# 49 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_Mayor_Reward1_1
# 55 "data//maps/PellucaCityHouses/scripts.pory"
	hideitemdescription
# 56 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward
	return

PellucaCityHouses_Mayor_Reward1_1:
# 50 "data//maps/PellucaCityHouses/scripts.pory"
	hideitemdescription
# 52 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem ITEM_WEAKNESS_POLICY
# 53 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward_End
	return


PellucaCityHouses_Mayor_Reward2::
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_0x8006, ITEM_BLUNDER_POLICY
# 62 "data//maps/PellucaCityHouses/scripts.pory"
	showitemdescription
# 63 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Mayor_Reward1_Text_0, MSGBOX_YESNO
# 64 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_Mayor_Reward2_1
# 69 "data//maps/PellucaCityHouses/scripts.pory"
	hideitemdescription
# 70 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward
	return

PellucaCityHouses_Mayor_Reward2_1:
# 65 "data//maps/PellucaCityHouses/scripts.pory"
	hideitemdescription
# 66 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem ITEM_BLUNDER_POLICY
# 67 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward_End
	return


PellucaCityHouses_Mayor_Reward_End::
# 75 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 7
# 76 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Mayor_Reward_End_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC1::
# 81 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 7
	goto_if_eq PellucaCityHouses_NPC1_2
# 88 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 6
	goto_if_eq PellucaCityHouses_NPC1_5
# 98 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCityHouses_NPC1_8
# 131 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_10, MSGBOX_NPC
	end

PellucaCityHouses_NPC1_2:
# 83 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_0, MSGBOX_NPC
	end

PellucaCityHouses_NPC1_5:
# 90 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_1, MSGBOX_NPC
# 92 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_2
# 93 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem ITEM_DRIFBLIM_TRAVELS_PASS
# 94 "data//maps/PellucaCityHouses/scripts.pory"
	release
	end

PellucaCityHouses_NPC1_8:
# 100 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_3, MSGBOX_NPC
# 101 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 102 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_NPC1_Movement_0
# 103 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 104 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_4, MSGBOX_NPC
# 105 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 106 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_NPC1_Movement_0
# 107 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 108 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_5
# 109 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_NPC1_Text_6, PellucaCityHouses_NPC1_Text_7
# 111 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_NPC1_11
PellucaCityHouses_NPC1_10:
# 124 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_NPC1_14
PellucaCityHouses_NPC1_13:
	end

PellucaCityHouses_NPC1_11:
# 112 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_8, MSGBOX_NPC
# 113 "data//maps/PellucaCityHouses/scripts.pory"
	startquest QUEST_PELLUCA_MAYOR
# 114 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON1
# 115 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON2
# 116 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON3
# 117 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON4
# 118 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON5
# 119 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 1
# 121 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_NPC1_10

PellucaCityHouses_NPC1_14:
# 125 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_9, MSGBOX_NPC
	goto PellucaCityHouses_NPC1_13


PellucaCity_Clauncher::
# 137 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 138 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 140 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 6
	goto_if_eq PellucaCity_Clauncher_2
PellucaCity_Clauncher_1:
# 148 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_2
# 149 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 150 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_TO_WHITE
# 151 "data//maps/PellucaCityHouses/scripts.pory"
	removeobject VAR_LAST_TALKED
# 152 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 153 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_3
# 155 "data//maps/PellucaCityHouses/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 157 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end

PellucaCity_Clauncher_2:
# 141 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_0
# 142 "data//maps/PellucaCityHouses/scripts.pory"
	setwildbattle SPECIES_CURSOLA, 28
# 143 "data//maps/PellucaCityHouses/scripts.pory"
	dowildbattle
# 144 "data//maps/PellucaCityHouses/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 145 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_1
	goto PellucaCity_Clauncher_1


PellucaCityHouses_NPC2::
# 165 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC3::
# 169 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC4::
# 173 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_Delphox::
# 181 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 182 "data//maps/PellucaCityHouses/scripts.pory"
	playmoncry SPECIES_DELPHOX, CRY_MODE_NORMAL
# 183 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 184 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Delphox_Text_0, MSGBOX_NPC
# 185 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


# 102 "data//maps/PellucaCityHouses/scripts.pory"
PellucaCityHouses_NPC1_Movement_0:
# 102 "data//maps/PellucaCityHouses/scripts.pory"
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

PellucaCityHouses_Mayor_Reward_Text_0:
# 36 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Please accept this reward.$"

PellucaCityHouses_Mayor_Reward_Text_1:
# 37 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Weakness Policy$"

PellucaCityHouses_Mayor_Reward_Text_2:
# 37 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Blunder Policy$"

PellucaCityHouses_Mayor_Reward1_Text_0:
# 48 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Are you sure?$"

PellucaCityHouses_Mayor_Reward_End_Text_0:
# 76 "data//maps/PellucaCityHouses/scripts.pory"
	.string "On the behalf of residents of Pelluca\n"
	.string "City, thank you for your service!$"

PellucaCityHouses_NPC1_Text_0:
# 83 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I haven't seen any Corsolas recently,\n"
	.string "so I can finally relax a little!$"

PellucaCityHouses_NPC1_Text_1:
# 90 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Have you done the job? Excellent! Sigh,\n"
	.string "what a relief. I admit it - I've been a\l"
	.string "weak mayor. Too many blunders! I should\l"
	.string "be more proactive in taking care of my\l"
	.string "city.$"

PellucaCityHouses_NPC1_Text_2:
# 92 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Please accept this reward. It's not\n"
	.string "much but I have no use for it, since I'm\l"
	.string "here all the time.$"

PellucaCityHouses_NPC1_Text_3:
# 100 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I'm the mayor of Pelluca City. Since we\n"
	.string "sit at the intersection of the Ivy\l"
	.string "River and the Hoya River, it's split up\l"
	.string "into several small islands. You know\l"
	.string "what that means?$"

PellucaCityHouses_NPC1_Text_4:
# 104 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It means Corsolas washed ashore every\n"
	.string "other day! It's a massive maintenance\l"
	.string "cost just trying to send all the\l"
	.string "Claunchers back into the water! Not to\l"
	.string "mention the poor Pokemon stuck ashore.$"

PellucaCityHouses_NPC1_Text_5:
# 108 "data//maps/PellucaCityHouses/scripts.pory"
	.string "You think all the money I make is worth\n"
	.string "it? Look at my hair - it's going white!\p"
	.string "Sigh...sometimes it's just too much,\n"
	.string "trying to manage all this...blunder\l"
	.string "after blunder. I'm just too weak as a\l"
	.string "mayor!$"

PellucaCityHouses_NPC1_Text_6:
# 109 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Can I help?$"

PellucaCityHouses_NPC1_Text_7:
# 109 "data//maps/PellucaCityHouses/scripts.pory"
	.string "That's too bad$"

PellucaCityHouses_NPC1_Text_8:
# 112 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My dear trainer! You have a heart of\n"
	.string "gold. I was merely letting out some\l"
	.string "steam, but I would be a fool not to take\l"
	.string "you up on your offer! I can most\l"
	.string "certainly make it worth your while, of\l"
	.string "course. Please scout all the riverbanks\l"
	.string "across the city and put five Corsolas\l"
	.string "you see back into the river!$"

PellucaCityHouses_NPC1_Text_9:
# 125 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Yes, well, one has to do what one must.\n"
	.string "Please enjoy your stay in Pelluca City!$"

PellucaCityHouses_NPC1_Text_10:
# 131 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Please send five Corsolas back to the\n"
	.string "river!$"

PellucaCity_Clauncher_Text_0:
# 141 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Corsola!\p"
	.string "...\p"
	.string "Wait, it doesn't look like a Corsola...it's\n"
	.string "a little paler...a little less cute...$"

PellucaCity_Clauncher_Text_1:
# 145 "data//maps/PellucaCityHouses/scripts.pory"
	.string "That's five Corsolas...one way or\n"
	.string "another! Better get back to the mayor.$"

PellucaCity_Clauncher_Text_2:
# 148 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Corsola! It's looking disoriented.\p"
	.string "{PLAYER} gently lifts the Corsola and\n"
	.string "tosses it back into the river.$"

PellucaCity_Clauncher_Text_3:
# 153 "data//maps/PellucaCityHouses/scripts.pory"
	.string "See you Corsola!$"

PellucaCityHouses_NPC2_Text_0:
# 165 "data//maps/PellucaCityHouses/scripts.pory"
	.string "We we born here here, fell in love here,\n"
	.string "and grew old here.$"

PellucaCityHouses_NPC3_Text_0:
# 169 "data//maps/PellucaCityHouses/scripts.pory"
	.string "After so long together, love gets\n"
	.string "replaced by companionship. But it's\l"
	.string "always there, somewhere beneath the\l"
	.string "surface.$"

PellucaCityHouses_NPC4_Text_0:
# 173 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My Delphox doesn't like the river air.\n"
	.string "She prefers the dense fog of Vilethorn\l"
	.string "Woods, where I first met her.$"

PellucaCityHouses_Delphox_Text_0:
# 184 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Delphox looks wistful...$"
