PellucaCityHouses_MapScripts::
	.byte 0


PellucaCityHouses_MayorQuestStart::
# 26 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 27 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 29 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 2
	goto_if_eq PellucaCityHouses_MayorQuestStart_2
PellucaCityHouses_MayorQuestStart_1:
# 35 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCityHouses_MayorQuestStart_5
PellucaCityHouses_MayorQuestStart_4:
# 51 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 1
	goto_if_eq PellucaCityHouses_MayorQuestStart_8
PellucaCityHouses_MayorQuestStart_7:
# 74 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end

PellucaCityHouses_MayorQuestStart_2:
# 30 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 31 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_1
# 32 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_MayorQuestStart_1

PellucaCityHouses_MayorQuestStart_5:
# 36 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 37 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_2
# 38 "data//maps/PellucaCityHouses/scripts.pory"
	speakername NULL
# 39 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem ITEM_DRIFBLIM_TRAVELS_PASS
# 40 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 41 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_3
# 42 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 43 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 44 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 45 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_4
# 46 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 48 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 1
	goto PellucaCityHouses_MayorQuestStart_4

PellucaCityHouses_MayorQuestStart_8:
# 52 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 53 "data//maps/PellucaCityHouses/scripts.pory"
	message PellucaCityHouses_MayorQuestStart_Text_5
# 54 "data//maps/PellucaCityHouses/scripts.pory"
	waitmessage
# 55 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_MayorQuestStart_Text_6, PellucaCityHouses_MayorQuestStart_Text_7
# 57 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_MayorQuestStart_11
PellucaCityHouses_MayorQuestStart_10:
# 62 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_MayorQuestStart_13
	goto PellucaCityHouses_MayorQuestStart_7

PellucaCityHouses_MayorQuestStart_11:
# 58 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 59 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_8
# 60 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_MayorQuestStart_10

PellucaCityHouses_MayorQuestStart_13:
# 63 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 64 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_MayorQuestStart_Movement_0
# 65 "data//maps/PellucaCityHouses/scripts.pory"
	waitmovement 0
# 66 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 67 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 68 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_9
# 69 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 71 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 2
	goto PellucaCityHouses_MayorQuestStart_7


PellucaCityHouses_GabSibling1::
# 101 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling1_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_GabSibling2::
# 105 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling2_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_GabSibling3::
# 109 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 110 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 111 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_0
# 112 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 113 "data//maps/PellucaCityHouses/scripts.pory"
	showmonpic SPECIES_JANGMO_O, 10, 3
# 114 "data//maps/PellucaCityHouses/scripts.pory"
	delay 120
# 115 "data//maps/PellucaCityHouses/scripts.pory"
	hidemonpic
# 116 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_1, MSGBOX_NPC
# 117 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_Mayor_Reward::
# 145 "data//maps/PellucaCityHouses/scripts.pory"
	message PellucaCityHouses_Mayor_Reward_Text_0
# 146 "data//maps/PellucaCityHouses/scripts.pory"
	waitmessage
# 147 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_Mayor_Reward_Text_1, PellucaCityHouses_Mayor_Reward_Text_2
# 148 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_Mayor_Reward_2
PellucaCityHouses_Mayor_Reward_1:
# 149 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_Mayor_Reward_5
PellucaCityHouses_Mayor_Reward_4:
# 150 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward_Give
	return

PellucaCityHouses_Mayor_Reward_2:
# 148 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_0x8006, ITEM_WEAKNESS_POLICY
	goto PellucaCityHouses_Mayor_Reward_1

PellucaCityHouses_Mayor_Reward_5:
# 149 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_0x8006, ITEM_BLUNDER_POLICY
	goto PellucaCityHouses_Mayor_Reward_4


PellucaCityHouses_Mayor_Reward_Give::
# 153 "data//maps/PellucaCityHouses/scripts.pory"
	showitemdescription
# 154 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Mayor_Reward_Give_Text_0, MSGBOX_YESNO
# 155 "data//maps/PellucaCityHouses/scripts.pory"
	hideitemdescription
# 156 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_Mayor_Reward_Give_1
# 157 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward
	return

PellucaCityHouses_Mayor_Reward_Give_1:
# 156 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem VAR_0x8006
# 156 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward_End
	return


PellucaCityHouses_Mayor_Reward_End::
# 160 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 7
	end


PellucaCityHouses_NPC1::
# 164 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 7
	goto_if_eq PellucaCityHouses_NPC1_2
# 171 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 6
	goto_if_eq PellucaCityHouses_NPC1_5
# 183 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCityHouses_NPC1_8
# 216 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_9, MSGBOX_NPC
	end

PellucaCityHouses_NPC1_2:
# 166 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_0, MSGBOX_NPC
	end

PellucaCityHouses_NPC1_5:
# 173 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_1, MSGBOX_NPC
# 175 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_2
# 176 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem ITEM_DRIFBLIM_TRAVELS_PASS
# 177 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 7
# 178 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_3, MSGBOX_NPC
# 179 "data//maps/PellucaCityHouses/scripts.pory"
	release
	end

PellucaCityHouses_NPC1_8:
# 185 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_4, MSGBOX_NPC
# 186 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 187 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_MayorQuestStart_Movement_0
# 188 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 189 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_5, MSGBOX_NPC
# 190 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 191 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_MayorQuestStart_Movement_0
# 192 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 193 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_6
# 194 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_MayorQuestStart_Text_6, PellucaCityHouses_MayorQuestStart_Text_7
# 196 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_NPC1_11
PellucaCityHouses_NPC1_10:
# 209 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_NPC1_14
PellucaCityHouses_NPC1_13:
	end

PellucaCityHouses_NPC1_11:
# 197 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_7, MSGBOX_NPC
# 198 "data//maps/PellucaCityHouses/scripts.pory"
	startquest QUEST_PELLUCA_MAYOR
# 199 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON1
# 200 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON2
# 201 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON3
# 202 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON4
# 203 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON5
# 204 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 1
# 206 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_NPC1_10

PellucaCityHouses_NPC1_14:
# 210 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_8, MSGBOX_NPC
	goto PellucaCityHouses_NPC1_13


PellucaCity_Clauncher::
# 221 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 222 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 224 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 6
	goto_if_eq PellucaCity_Clauncher_2
PellucaCity_Clauncher_1:
# 232 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_2
# 233 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 234 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_TO_BLACK
# 235 "data//maps/PellucaCityHouses/scripts.pory"
	removeobject VAR_LAST_TALKED
# 236 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 237 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_3
# 239 "data//maps/PellucaCityHouses/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 241 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end

PellucaCity_Clauncher_2:
# 225 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_0
# 226 "data//maps/PellucaCityHouses/scripts.pory"
	setwildbattle SPECIES_CURSOLA, 28
# 227 "data//maps/PellucaCityHouses/scripts.pory"
	dowildbattle
# 228 "data//maps/PellucaCityHouses/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 229 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_1
	goto PellucaCity_Clauncher_1


PellucaCityHouses_NPC2::
# 272 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC3::
# 276 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC4::
# 280 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_Delphox::
# 288 "data//maps/PellucaCityHouses/scripts.pory"
	playmoncry SPECIES_DELPHOX, CRY_MODE_NORMAL
# 289 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Delphox_Text_0, MSGBOX_NPC
	end


# 64 "data//maps/PellucaCityHouses/scripts.pory"
PellucaCityHouses_MayorQuestStart_Movement_0:
# 64 "data//maps/PellucaCityHouses/scripts.pory"
	emote_exclamation_mark
	step_end

PellucaCityHouses_MayorQuestStart_Text_0:
# 30 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Mayor$"

PellucaCityHouses_MayorQuestStart_Text_1:
# 31 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Have you managed to do something about\n"
	.string "the Qwilsquad yet? No?\p"
	.string "Sigh...I suppose I was foolish to ask a\n"
	.string "child.$"

PellucaCityHouses_MayorQuestStart_Text_2:
# 37 "data//maps/PellucaCityHouses/scripts.pory"
	.string "What now? I just can't -\p"
	.string "Oh, it's you. The trainer at the bridge.\p"
	.string "How has your stay at Pelluca City been\n"
	.string "so far?\p"
	.string "We hope you enjoy the cool riverside\n"
	.string "breeze while munching on one of our\l"
	.string "famous Apple Pies!\p"
	.string "And - and please accept this\n"
	.string "complimentary Drifblim Pass!$"

PellucaCityHouses_MayorQuestStart_Text_3:
# 41 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Using this, you'll be able to use the\n"
	.string "Drifblim outside our Pokémon Center to\l"
	.string "fly to Silversun City.\p"
	.string "Convenient access for all tourists!\p"
	.string "...\p"
	.string "After what you've seen, there's no\n"
	.string "point in selling you the city, is there?$"

PellucaCityHouses_MayorQuestStart_Text_4:
# 45 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Oh, what am I supposed to do?\n"
	.string "Everything was fine until one day, the\l"
	.string "Qwilsquad showed up out of nowhere and\l"
	.string "bullied their way into power!\p"
	.string "And then they started harrassing\n"
	.string "everyone and ruining this city's image.\p"
	.string "I'm not a trainer - I'm a politician!\p"
	.string "There's no way I can battle them.$"

PellucaCityHouses_MayorQuestStart_Text_5:
# 53 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I just don't know what to do about the Qwilsquad...$"

PellucaCityHouses_MayorQuestStart_Text_6:
# 55 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Can I help?$"

PellucaCityHouses_MayorQuestStart_Text_7:
# 55 "data//maps/PellucaCityHouses/scripts.pory"
	.string "That's too bad$"

PellucaCityHouses_MayorQuestStart_Text_8:
# 59 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Sigh...thanks for hearing me out. I\n"
	.string "really do hope you enjoy your stay here.$"

PellucaCityHouses_MayorQuestStart_Text_9:
# 68 "data//maps/PellucaCityHouses/scripts.pory"
	.string "C-can you? The Qwilsquad will only\n"
	.string "listen if you speak in their language.\l"
	.string "Do you think you can stand up to the\l"
	.string "Qwilsquad and their boss?\p"
	.string "They're all holed up in the abandoned\n"
	.string "riverside shack to the west.\p"
	.string "Please - go there and convince them to\n"
	.string "get out of the city!$"

PellucaCityHouses_GabSibling1_Text_0:
# 101 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Yay! Big Sis is back! Big Bro got her a\n"
	.string "present too!$"

PellucaCityHouses_GabSibling2_Text_0:
# 105 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I wish Big Sis stayed with us all the\n"
	.string "time!$"

PellucaCityHouses_GabSibling3_Text_0:
# 111 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Gabrielle keeps us afloat. Without her,\n"
	.string "I wouldn't be able to afford to study. I\l"
	.string "got her a gift.$"

PellucaCityHouses_GabSibling3_Text_1:
# 116 "data//maps/PellucaCityHouses/scripts.pory"
	.string "A traveling merchant sold it to me. It's\n"
	.string "the least I can do for her.$"

PellucaCityHouses_Mayor_Reward_Text_0:
# 145 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Please accept this reward.$"

PellucaCityHouses_Mayor_Reward_Text_1:
# 147 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Weakness Policy$"

PellucaCityHouses_Mayor_Reward_Text_2:
# 147 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Blunder Policy$"

PellucaCityHouses_Mayor_Reward_Give_Text_0:
# 154 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Are you sure?$"

PellucaCityHouses_NPC1_Text_0:
# 166 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I haven't seen any Corsolas recently,\n"
	.string "so I can finally relax a little!$"

PellucaCityHouses_NPC1_Text_1:
# 173 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Have you done the job? Excellent! Sigh,\n"
	.string "what a relief. I admit it - I've been a\l"
	.string "weak mayor. Too many blunders! I should\l"
	.string "be more proactive in taking care of my\l"
	.string "city.$"

PellucaCityHouses_NPC1_Text_2:
# 175 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Please accept this reward. It's not\n"
	.string "much but I have no use for it, since I'm\l"
	.string "here all the time.$"

PellucaCityHouses_NPC1_Text_3:
# 178 "data//maps/PellucaCityHouses/scripts.pory"
	.string "On the behalf of residents of Pelluca\n"
	.string "City, thank you for your service!$"

PellucaCityHouses_NPC1_Text_4:
# 185 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I'm the mayor of Pelluca City. Since we\n"
	.string "sit at the intersection of the Ivy\l"
	.string "River and the Hoya River, it's split up\l"
	.string "into several small islands. You know\l"
	.string "what that means?$"

PellucaCityHouses_NPC1_Text_5:
# 189 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It means Corsolas washed ashore every\n"
	.string "other day! It's a massive maintenance\l"
	.string "cost just trying to send all the\l"
	.string "Claunchers back into the water! Not to\l"
	.string "mention the poor Pokemon stuck ashore.$"

PellucaCityHouses_NPC1_Text_6:
# 193 "data//maps/PellucaCityHouses/scripts.pory"
	.string "You think all the money I make is worth\n"
	.string "it? Look at my hair - it's going white!\p"
	.string "Sigh...sometimes it's just too much,\n"
	.string "trying to manage all this...blunder\l"
	.string "after blunder. I'm just too weak as a\l"
	.string "mayor!$"

PellucaCityHouses_NPC1_Text_7:
# 197 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My dear trainer! You have a heart of\n"
	.string "gold. I was merely letting out some\l"
	.string "steam, but I would be a fool not to take\l"
	.string "you up on your offer! I can most\l"
	.string "certainly make it worth your while, of\l"
	.string "course. Please scout all the riverbanks\l"
	.string "across the city and put five Corsolas\l"
	.string "you see back into the river!$"

PellucaCityHouses_NPC1_Text_8:
# 210 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Yes, well, one has to do what one must.\n"
	.string "Please enjoy your stay in Pelluca City!$"

PellucaCityHouses_NPC1_Text_9:
# 216 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Please send five Corsolas back to the\n"
	.string "river!$"

PellucaCity_Clauncher_Text_0:
# 225 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Corsola!\p"
	.string "...\p"
	.string "Wait, it doesn't look like a Corsola...it's\n"
	.string "a little paler...a little less cute...$"

PellucaCity_Clauncher_Text_1:
# 229 "data//maps/PellucaCityHouses/scripts.pory"
	.string "That's five Corsolas...one way or\n"
	.string "another! Better get back to the mayor.$"

PellucaCity_Clauncher_Text_2:
# 232 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Corsola! It's looking disoriented.\p"
	.string "{PLAYER} gently lifts the Corsola and\n"
	.string "tosses it back into the river.$"

PellucaCity_Clauncher_Text_3:
# 237 "data//maps/PellucaCityHouses/scripts.pory"
	.string "See you Corsola!$"

PellucaCityHouses_NPC2_Text_0:
# 272 "data//maps/PellucaCityHouses/scripts.pory"
	.string "We we born here here, fell in love here,\n"
	.string "and grew old here.$"

PellucaCityHouses_NPC3_Text_0:
# 276 "data//maps/PellucaCityHouses/scripts.pory"
	.string "After so long together, love gets\n"
	.string "replaced by companionship. But it's\l"
	.string "always there, somewhere beneath the\l"
	.string "surface.$"

PellucaCityHouses_NPC4_Text_0:
# 280 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My Delphox doesn't like the river air.\n"
	.string "She prefers the dense fog of Vilethorn\l"
	.string "Woods, where I first met her.$"

PellucaCityHouses_Delphox_Text_0:
# 289 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Delphox looks wistful...$"
