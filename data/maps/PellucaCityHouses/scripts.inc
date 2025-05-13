PellucaCityHouses_MapScripts::
	.byte 0


PellucaCityHouses_MayorQuestStart::
# 26 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 27 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 29 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 10
	goto_if_eq PellucaCityHouses_MayorQuestStart_2
# 35 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 2
	goto_if_eq PellucaCityHouses_MayorQuestStart_5
PellucaCityHouses_MayorQuestStart_4:
# 41 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCityHouses_MayorQuestStart_8
PellucaCityHouses_MayorQuestStart_7:
# 57 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 1
	goto_if_eq PellucaCityHouses_MayorQuestStart_11
PellucaCityHouses_MayorQuestStart_10:
# 80 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end

PellucaCityHouses_MayorQuestStart_2:
# 30 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 31 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_1, MSGBOX_NPC
	end

PellucaCityHouses_MayorQuestStart_5:
# 36 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 37 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_2
# 38 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_MayorQuestStart_4

PellucaCityHouses_MayorQuestStart_8:
# 42 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 43 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_3
# 44 "data//maps/PellucaCityHouses/scripts.pory"
	speakername NULL
# 45 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem ITEM_DRIFBLIM_TRAVELS_PASS
# 46 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 47 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_4
# 48 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 49 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 50 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 51 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_5
# 52 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 54 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 1
	goto PellucaCityHouses_MayorQuestStart_7

PellucaCityHouses_MayorQuestStart_11:
# 58 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 59 "data//maps/PellucaCityHouses/scripts.pory"
	message PellucaCityHouses_MayorQuestStart_Text_6
# 60 "data//maps/PellucaCityHouses/scripts.pory"
	waitmessage
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_MayorQuestStart_Text_7, PellucaCityHouses_MayorQuestStart_Text_8
# 63 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_MayorQuestStart_14
PellucaCityHouses_MayorQuestStart_13:
# 68 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_MayorQuestStart_16
	goto PellucaCityHouses_MayorQuestStart_10

PellucaCityHouses_MayorQuestStart_14:
# 64 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 65 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_9
# 66 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_MayorQuestStart_13

PellucaCityHouses_MayorQuestStart_16:
# 69 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 70 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_MayorQuestStart_Movement_0
# 71 "data//maps/PellucaCityHouses/scripts.pory"
	waitmovement 0
# 72 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 73 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 74 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_10
# 75 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 77 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 2
	goto PellucaCityHouses_MayorQuestStart_10


PellucaCityHouses_GabSibling1::
# 107 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling1_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_GabSibling2::
# 111 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling2_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_GabSibling3::
# 115 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 116 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 117 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_0
# 118 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 119 "data//maps/PellucaCityHouses/scripts.pory"
	showmonpic SPECIES_JANGMO_O, 10, 3
# 120 "data//maps/PellucaCityHouses/scripts.pory"
	delay 120
# 121 "data//maps/PellucaCityHouses/scripts.pory"
	hidemonpic
# 122 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_1, MSGBOX_NPC
# 123 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_Mayor_Reward::
# 151 "data//maps/PellucaCityHouses/scripts.pory"
	message PellucaCityHouses_Mayor_Reward_Text_0
# 152 "data//maps/PellucaCityHouses/scripts.pory"
	waitmessage
# 153 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_Mayor_Reward_Text_1, PellucaCityHouses_Mayor_Reward_Text_2
# 154 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_Mayor_Reward_2
PellucaCityHouses_Mayor_Reward_1:
# 155 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_Mayor_Reward_5
PellucaCityHouses_Mayor_Reward_4:
# 156 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward_Give
	return

PellucaCityHouses_Mayor_Reward_2:
# 154 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_0x8006, ITEM_WEAKNESS_POLICY
	goto PellucaCityHouses_Mayor_Reward_1

PellucaCityHouses_Mayor_Reward_5:
# 155 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_0x8006, ITEM_BLUNDER_POLICY
	goto PellucaCityHouses_Mayor_Reward_4


PellucaCityHouses_Mayor_Reward_Give::
# 159 "data//maps/PellucaCityHouses/scripts.pory"
	showitemdescription
# 160 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Mayor_Reward_Give_Text_0, MSGBOX_YESNO
# 161 "data//maps/PellucaCityHouses/scripts.pory"
	hideitemdescription
# 162 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_Mayor_Reward_Give_1
# 163 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward
	return

PellucaCityHouses_Mayor_Reward_Give_1:
# 162 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem VAR_0x8006
# 162 "data//maps/PellucaCityHouses/scripts.pory"
	goto PellucaCityHouses_Mayor_Reward_End
	return


PellucaCityHouses_Mayor_Reward_End::
# 166 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 7
	end


PellucaCityHouses_NPC1::
# 170 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 7
	goto_if_eq PellucaCityHouses_NPC1_2
# 177 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 6
	goto_if_eq PellucaCityHouses_NPC1_5
# 189 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCityHouses_NPC1_8
# 222 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_9, MSGBOX_NPC
	end

PellucaCityHouses_NPC1_2:
# 172 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_0, MSGBOX_NPC
	end

PellucaCityHouses_NPC1_5:
# 179 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_1, MSGBOX_NPC
# 181 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_2
# 182 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem ITEM_DRIFBLIM_TRAVELS_PASS
# 183 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 7
# 184 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_3, MSGBOX_NPC
# 185 "data//maps/PellucaCityHouses/scripts.pory"
	release
	end

PellucaCityHouses_NPC1_8:
# 191 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_4, MSGBOX_NPC
# 192 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 193 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_MayorQuestStart_Movement_0
# 194 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 195 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_5, MSGBOX_NPC
# 196 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 197 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_MayorQuestStart_Movement_0
# 198 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 199 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_6
# 200 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_MayorQuestStart_Text_8, PellucaCityHouses_MayorQuestStart_Text_7
# 202 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_NPC1_11
PellucaCityHouses_NPC1_10:
# 215 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_NPC1_14
PellucaCityHouses_NPC1_13:
	end

PellucaCityHouses_NPC1_11:
# 203 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_7, MSGBOX_NPC
# 204 "data//maps/PellucaCityHouses/scripts.pory"
	startquest QUEST_PELLUCA_MAYOR
# 205 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON1
# 206 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON2
# 207 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON3
# 208 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON4
# 209 "data//maps/PellucaCityHouses/scripts.pory"
	clearflag FLAG_HIDE_PELLUCA_MAYOR_MON5
# 210 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 1
# 212 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_NPC1_10

PellucaCityHouses_NPC1_14:
# 216 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_8, MSGBOX_NPC
	goto PellucaCityHouses_NPC1_13


PellucaCity_Clauncher::
# 227 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 228 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 230 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 6
	goto_if_eq PellucaCity_Clauncher_2
PellucaCity_Clauncher_1:
# 238 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_2
# 239 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 240 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_TO_BLACK
# 241 "data//maps/PellucaCityHouses/scripts.pory"
	removeobject VAR_LAST_TALKED
# 242 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 243 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_3
# 245 "data//maps/PellucaCityHouses/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 247 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end

PellucaCity_Clauncher_2:
# 231 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_0
# 232 "data//maps/PellucaCityHouses/scripts.pory"
	setwildbattle SPECIES_CURSOLA, 28
# 233 "data//maps/PellucaCityHouses/scripts.pory"
	dowildbattle
# 234 "data//maps/PellucaCityHouses/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 235 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_1
	goto PellucaCity_Clauncher_1


PellucaCityHouses_NPC2::
# 278 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC3::
# 282 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC4::
# 286 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_Delphox::
# 294 "data//maps/PellucaCityHouses/scripts.pory"
	playmoncry SPECIES_DELPHOX, CRY_MODE_NORMAL
# 295 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Delphox_Text_0, MSGBOX_NPC
	end


# 70 "data//maps/PellucaCityHouses/scripts.pory"
PellucaCityHouses_MayorQuestStart_Movement_0:
# 70 "data//maps/PellucaCityHouses/scripts.pory"
	emote_exclamation_mark
	step_end

PellucaCityHouses_MayorQuestStart_Text_0:
# 30 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Mayor$"

PellucaCityHouses_MayorQuestStart_Text_1:
# 31 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Now that we've teamed up, we're doing\n"
	.string "much better!$"

PellucaCityHouses_MayorQuestStart_Text_2:
# 37 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Have you managed to do something about\n"
	.string "the Qwilsquad yet? No?\p"
	.string "Sigh...I was foolish to ask a child.$"

PellucaCityHouses_MayorQuestStart_Text_3:
# 43 "data//maps/PellucaCityHouses/scripts.pory"
	.string "What now? I just can't -\p"
	.string "Oh, it's you. The trainer at the bridge.\p"
	.string "How has your stay at Pelluca City been\n"
	.string "so far?\p"
	.string "We hope you enjoy the cool riverside\n"
	.string "breeze while munching on one of our\l"
	.string "famous Apple Pies!\p"
	.string "And - and please accept this\n"
	.string "complimentary Drifblim Pass!$"

PellucaCityHouses_MayorQuestStart_Text_4:
# 47 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Using this, you'll be able to use the\n"
	.string "Drifblim outside our Pokémon Center to\l"
	.string "fly to Silversun City.\p"
	.string "Convenient access for all tourists!\p"
	.string "...\p"
	.string "After what you've seen, there's no\n"
	.string "point in selling you the city, is there?$"

PellucaCityHouses_MayorQuestStart_Text_5:
# 51 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Oh, what am I supposed to do?\n"
	.string "Everything was fine until one day, the\l"
	.string "Qwilsquad showed up out of nowhere and\l"
	.string "bullied their way into power!\p"
	.string "And then they started harrassing\n"
	.string "everyone and ruining this city's image.\p"
	.string "I'm not a trainer - I'm a politician!\p"
	.string "There's no way I can battle them.$"

PellucaCityHouses_MayorQuestStart_Text_6:
# 59 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I just don't know what to do about the\n"
	.string "Qwilsquad...$"

PellucaCityHouses_MayorQuestStart_Text_7:
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	.string "That's too bad$"

PellucaCityHouses_MayorQuestStart_Text_8:
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Can I help?$"

PellucaCityHouses_MayorQuestStart_Text_9:
# 65 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Sigh...thanks for hearing me out. I\n"
	.string "really do hope you enjoy your stay here.$"

PellucaCityHouses_MayorQuestStart_Text_10:
# 74 "data//maps/PellucaCityHouses/scripts.pory"
	.string "C-can you? The Qwilsquad will only\n"
	.string "listen if you speak in their language.\l"
	.string "Do you think you can stand up to the\l"
	.string "Qwilsquad and their boss?\p"
	.string "They're all holed up in the abandoned\n"
	.string "riverside shack to the west.\p"
	.string "Please - go there and convince them to\n"
	.string "get out of the city!$"

PellucaCityHouses_GabSibling1_Text_0:
# 107 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Yay! Big Sis is back! Big Bro got her a\n"
	.string "present too!$"

PellucaCityHouses_GabSibling2_Text_0:
# 111 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I wish Big Sis stayed with us all the\n"
	.string "time!$"

PellucaCityHouses_GabSibling3_Text_0:
# 117 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Gabrielle keeps us afloat. Without her,\n"
	.string "I wouldn't be able to afford to study. I\l"
	.string "got her a gift.$"

PellucaCityHouses_GabSibling3_Text_1:
# 122 "data//maps/PellucaCityHouses/scripts.pory"
	.string "A traveling merchant sold it to me. It's\n"
	.string "the least I can do for her.$"

PellucaCityHouses_Mayor_Reward_Text_0:
# 151 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Please accept this reward.$"

PellucaCityHouses_Mayor_Reward_Text_1:
# 153 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Weakness Policy$"

PellucaCityHouses_Mayor_Reward_Text_2:
# 153 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Blunder Policy$"

PellucaCityHouses_Mayor_Reward_Give_Text_0:
# 160 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Are you sure?$"

PellucaCityHouses_NPC1_Text_0:
# 172 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I haven't seen any Corsolas recently,\n"
	.string "so I can finally relax a little!$"

PellucaCityHouses_NPC1_Text_1:
# 179 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Have you done the job? Excellent! Sigh,\n"
	.string "what a relief. I admit it - I've been a\l"
	.string "weak mayor. Too many blunders! I should\l"
	.string "be more proactive in taking care of my\l"
	.string "city.$"

PellucaCityHouses_NPC1_Text_2:
# 181 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Please accept this reward. It's not\n"
	.string "much but I have no use for it, since I'm\l"
	.string "here all the time.$"

PellucaCityHouses_NPC1_Text_3:
# 184 "data//maps/PellucaCityHouses/scripts.pory"
	.string "On the behalf of residents of Pelluca\n"
	.string "City, thank you for your service!$"

PellucaCityHouses_NPC1_Text_4:
# 191 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I'm the mayor of Pelluca City. Since we\n"
	.string "sit at the intersection of the Ivy\l"
	.string "River and the Hoya River, it's split up\l"
	.string "into several small islands. You know\l"
	.string "what that means?$"

PellucaCityHouses_NPC1_Text_5:
# 195 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It means Corsolas washed ashore every\n"
	.string "other day! It's a massive maintenance\l"
	.string "cost just trying to send all the\l"
	.string "Claunchers back into the water! Not to\l"
	.string "mention the poor Pokémon stuck ashore.$"

PellucaCityHouses_NPC1_Text_6:
# 199 "data//maps/PellucaCityHouses/scripts.pory"
	.string "You think all the money I make is worth\n"
	.string "it? Look at my hair - it's going white!\p"
	.string "Sigh...sometimes it's just too much,\n"
	.string "trying to manage all this...blunder\l"
	.string "after blunder. I'm just too weak as a\l"
	.string "mayor!$"

PellucaCityHouses_NPC1_Text_7:
# 203 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My dear trainer! You have a heart of\n"
	.string "gold. I was merely letting out some\l"
	.string "steam, but I would be a fool not to take\l"
	.string "you up on your offer! I can most\l"
	.string "certainly make it worth your while, of\l"
	.string "course. Please scout all the riverbanks\l"
	.string "across the city and put five Corsolas\l"
	.string "you see back into the river!$"

PellucaCityHouses_NPC1_Text_8:
# 216 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Yes, well, one has to do what one must.\n"
	.string "Please enjoy your stay in Pelluca City!$"

PellucaCityHouses_NPC1_Text_9:
# 222 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Please send five Corsolas back to the\n"
	.string "river!$"

PellucaCity_Clauncher_Text_0:
# 231 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Corsola!\p"
	.string "...\p"
	.string "Wait, it doesn't look like a Corsola...it's\n"
	.string "a little paler...a little less cute...$"

PellucaCity_Clauncher_Text_1:
# 235 "data//maps/PellucaCityHouses/scripts.pory"
	.string "That's five Corsolas...one way or\n"
	.string "another! Better get back to the mayor.$"

PellucaCity_Clauncher_Text_2:
# 238 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Corsola! It's looking disoriented.\p"
	.string "{PLAYER} gently lifts the Corsola and\n"
	.string "tosses it back into the river.$"

PellucaCity_Clauncher_Text_3:
# 243 "data//maps/PellucaCityHouses/scripts.pory"
	.string "See you Corsola!$"

PellucaCityHouses_NPC2_Text_0:
# 278 "data//maps/PellucaCityHouses/scripts.pory"
	.string "We we born here here, fell in love here,\n"
	.string "and grew old here.$"

PellucaCityHouses_NPC3_Text_0:
# 282 "data//maps/PellucaCityHouses/scripts.pory"
	.string "After so long together, love gets\n"
	.string "replaced by companionship. But it's\l"
	.string "always there, somewhere beneath the\l"
	.string "surface.$"

PellucaCityHouses_NPC4_Text_0:
# 286 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My Delphox doesn't like the river air.\n"
	.string "She prefers the dense fog of Vilethorn\l"
	.string "Woods, where I first met her.$"

PellucaCityHouses_Delphox_Text_0:
# 295 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Delphox looks wistful...$"
