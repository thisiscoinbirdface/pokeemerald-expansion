Championship_MapScripts::
	.byte 0


VictoryCape_NPC1::
# 7 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon1::
# 11 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_AMOONGUSS, CRY_MODE_NORMAL
# 12 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC2::
# 17 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC2_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC3::
# 21 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC3_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon2::
# 25 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 26 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon2_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC4::
# 30 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC4_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon3::
# 34 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_LOKIX, CRY_MODE_NORMAL
# 35 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon3_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC5::
# 39 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC5_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC6::
# 43 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC6_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC7::
# 47 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC7_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon4::
# 51 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_YANMEGA, CRY_MODE_NORMAL
# 52 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon4_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC8::
# 56 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC8_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon5::
# 60 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_CHIMECHO, CRY_MODE_NORMAL
# 61 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon5_Text_0, MSGBOX_NPC
	end


VictoryCape_Viniel::
# 67 "data//maps/Championship/scripts.pory"
	lockall
# 68 "data//maps/Championship/scripts.pory"
	speakername VictoryCape_Viniel_Text_0
# 69 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Viniel_Text_1
# 70 "data//maps/Championship/scripts.pory"
	speakername NULL
# 71 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Manectric::
# 75 "data//maps/Championship/scripts.pory"
	lockall
# 76 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
# 77 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Manectric_Text_0
# 78 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Viniel_Kids::
# 82 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Viniel_Kids_Text_0, MSGBOX_NPC
	end


VictoryCape_Viniel_Parent::
# 86 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Viniel_Parent_Text_0, MSGBOX_NPC
	end


VictoryCape_Gab::
# 94 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Gab_Text_0, MSGBOX_NPC
	end


VictoryCape_Zoroark::
# 98 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_ZOROARK, CRY_MODE_NORMAL
# 99 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Zoroark_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC1_Text_0:
# 7 "data//maps/Championship/scripts.pory"
	.string "What's that look? You think I'm too old\n"
	.string "to be a competitor?\p"
	.string "I'll have you know I had my eighth\n"
	.string "gym badge before you were born!$"

VictoryCape_Mon1_Text_0:
# 12 "data//maps/Championship/scripts.pory"
	.string "Amoonguss is pottering about!$"

VictoryCape_NPC2_Text_0:
# 17 "data//maps/Championship/scripts.pory"
	.string "They say the Ace Rookie from the\n"
	.string "Detective Academy is going to compete!\l"
	.string "I wish I don't draw him as an opponent.$"

VictoryCape_NPC3_Text_0:
# 21 "data//maps/Championship/scripts.pory"
	.string "This is my second time participating.\p"
	.string "I lost in the first round last time!$"

VictoryCape_Mon2_Text_0:
# 26 "data//maps/Championship/scripts.pory"
	.string "Palpitoad has a deadly glint in its eye.\n"
	.string "No first round exits this time!$"

VictoryCape_NPC4_Text_0:
# 30 "data//maps/Championship/scripts.pory"
	.string "Am I participating? No.\n"
	.string "I've just come to spectate!$"

VictoryCape_Mon3_Text_0:
# 35 "data//maps/Championship/scripts.pory"
	.string "Lokix seems downcast...\n"
	.string "Maybe it wanted to participate?$"

VictoryCape_NPC5_Text_0:
# 39 "data//maps/Championship/scripts.pory"
	.string "The Cormoria Pokemon Championship\n"
	.string "is big business, kid!\p"
	.string "I made a killing by shipping\n"
	.string "supplies to Victory Cape.$"

VictoryCape_NPC6_Text_0:
# 43 "data//maps/Championship/scripts.pory"
	.string "This never-ending downpour is such a\n"
	.string "damper on the event!$"

VictoryCape_NPC7_Text_0:
# 47 "data//maps/Championship/scripts.pory"
	.string "They say a former Team Somber grunt is\n"
	.string "in the Championship...\p"
	.string "I'm not sure if they should be leetting\n"
	.string "criminals participate!$"

VictoryCape_Mon4_Text_0:
# 52 "data//maps/Championship/scripts.pory"
	.string "Yanmega looks unfazed. xIt could\n"
	.string "probably see through Zoroark's\l"
	.string "disguises with its many eyes!$"

VictoryCape_NPC8_Text_0:
# 56 "data//maps/Championship/scripts.pory"
	.string "As a spiritual being, I possess\n"
	.string "supernatural control over my emotions.\p"
	.string "...so why am I feeling so nervous?$"

VictoryCape_Mon5_Text_0:
# 61 "data//maps/Championship/scripts.pory"
	.string "Chimecho is psyching itself up!$"

VictoryCape_Viniel_Text_0:
# 68 "data//maps/Championship/scripts.pory"
	.string "Viniel$"

VictoryCape_Viniel_Text_1:
# 69 "data//maps/Championship/scripts.pory"
	.string "Think you rugrats are stronger than a\n"
	.string "Gym Leader? Manectric and I can take\l"
	.string "all four of you together! Hahaha!$"

VictoryCape_Manectric_Text_0:
# 77 "data//maps/Championship/scripts.pory"
	.string "Manectric is playing with the children!$"

VictoryCape_Viniel_Kids_Text_0:
# 82 "data//maps/Championship/scripts.pory"
	.string "Leader Viniel is so cool!\n"
	.string "I wanna be just like him!$"

VictoryCape_Viniel_Parent_Text_0:
# 86 "data//maps/Championship/scripts.pory"
	.string "It's really kind of a superstar like\n"
	.string "Viniel to spend time with our children.\l"
	.string "He's a great role model.\p"
	.string "...\p"
	.string "I should take them inside before they\n"
	.string "catch a cold in the rain.$"

VictoryCape_Gab_Text_0:
# 94 "data//maps/Championship/scripts.pory"
	.string "What a huge stadium...are we really\n"
	.string "going to battle inside this?$"

VictoryCape_Zoroark_Text_0:
# 99 "data//maps/Championship/scripts.pory"
	.string "Zoroark doesn't seem as scared as\n"
	.string "Gabrielle is.$"
