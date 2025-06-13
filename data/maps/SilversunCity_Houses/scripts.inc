SilversunCity_Houses_MapScripts::
	.byte 0


SilversunCity_Houses_Smeargle::
# 9 "data//maps/SilversunCity_Houses/scripts.pory"
	playmoncry SPECIES_SMEARGLE, CRY_MODE_NORMAL
# 10 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Smeargle_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_Artist::
# 15 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 16 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 17 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 2
	goto_if_eq SilversunCity_Houses_Artist_2
SilversunCity_Houses_Artist_1:
# 22 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 1
	goto_if_eq SilversunCity_Houses_Artist_5
SilversunCity_Houses_Artist_4:
# 49 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 0
	goto_if_eq SilversunCity_Houses_Artist_8
SilversunCity_Houses_Artist_7:
# 89 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end

SilversunCity_Houses_Artist_2:
# 18 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 19 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_1, MSGBOX_NPC
	goto SilversunCity_Houses_Artist_1

SilversunCity_Houses_Artist_5:
# 23 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 24 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_2, MSGBOX_YESNO
# 25 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_10
# 44 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 45 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_7, MSGBOX_NPC
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_8:
# 50 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_8
# 51 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_9
# 52 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 53 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 16
# 54 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 55 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_10
# 56 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 57 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 8
# 58 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 2, SilversunCity_Houses_Artist_Movement_0
# 59 "data//maps/SilversunCity_Houses/scripts.pory"
	waitmovement 0
# 60 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 20
# 61 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 62 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_11
# 63 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 64 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 16
# 65 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 66 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_12, MSGBOX_YESNO
# 67 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 68 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_13
# 80 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 2, SilversunCity_Houses_Artist_Movement_0
# 81 "data//maps/SilversunCity_Houses/scripts.pory"
	waitmovement 0
# 82 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 24
# 83 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 84 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_14, MSGBOX_NPC
# 85 "data//maps/SilversunCity_Houses/scripts.pory"
	release
	goto SilversunCity_Houses_Artist_7

SilversunCity_Houses_Artist_10:
	checkitem ITEM_BLACK_SLUDGE
# 0 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SilversunCity_Houses_Artist_16
# 40 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 41 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_6, MSGBOX_NPC
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_13:
# 69 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 2, SilversunCity_Houses_Artist_Movement_0
# 70 "data//maps/SilversunCity_Houses/scripts.pory"
	waitmovement 0
# 71 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 24
# 72 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 73 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_13, MSGBOX_NPC
# 74 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 76 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 1
# 77 "data//maps/SilversunCity_Houses/scripts.pory"
	startquest QUEST_SILVERSUN_ARTIST
	goto SilversunCity_Houses_Artist_7

SilversunCity_Houses_Artist_16:
# 27 "data//maps/SilversunCity_Houses/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE
# 28 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername NULL
# 29 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_3
# 30 "data//maps/SilversunCity_Houses/scripts.pory"
	completequest QUEST_SILVERSUN_ARTIST
# 31 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 32 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_4
# 33 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 34 "data//maps/SilversunCity_Houses/scripts.pory"
	setflag FLAG_SYS_GOT_STRENGTH
# 35 "data//maps/SilversunCity_Houses/scripts.pory"
	giveitem ITEM_TM73
# 36 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 2
# 37 "data//maps/SilversunCity_Houses/scripts.pory"
	speakername SilversunCity_Houses_Artist_Text_0
# 38 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_5, MSGBOX_NPC
	goto SilversunCity_Houses_Artist_4


SilversunCity_Houses_Tutor::
# 95 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Tutor_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_NPC1::
# 109 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_NPC2::
# 113 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_NPC3::
# 117 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC3_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_DuskullNPC1::
# 137 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_DuskullNPC1_2
# 146 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1, MSGBOX_NPC
SilversunCity_Houses_DuskullNPC1_1:
	end

SilversunCity_Houses_DuskullNPC1_2:
# 138 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 141 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0, MSGBOX_NPC
# 142 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 143 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 144 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
	goto SilversunCity_Houses_DuskullNPC1_1


SilversunCity_Houses_Husband::
# 152 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_Husband_2
# 162 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1, MSGBOX_NPC
SilversunCity_Houses_Husband_1:
	end

SilversunCity_Houses_Husband_2:
# 155 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Husband_Text_0, MSGBOX_NPC
# 156 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 158 "data//maps/SilversunCity_Houses/scripts.pory"
	giveitem ITEM_SMUGGLER_EMBLEM
# 159 "data//maps/SilversunCity_Houses/scripts.pory"
	completequest QUEST_SILVERSUN_WIFE
# 160 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 5
	goto SilversunCity_Houses_Husband_1


SilversunCity_Houses_Wife::
# 169 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Wife_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_Furfrou::
# 175 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Furfrou_Text_0, MSGBOX_NPC
	end


# 58 "data//maps/SilversunCity_Houses/scripts.pory"
SilversunCity_Houses_Artist_Movement_0:
# 58 "data//maps/SilversunCity_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

SilversunCity_Houses_Smeargle_Text_0:
# 10 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Smeargle is holding the teacup with its\n"
	.string "tail and sipping tea! With a tail like\l"
	.string "that, no wonder it can draw so well.$"

SilversunCity_Houses_Artist_Text_0:
# 18 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Arsalan$"

SilversunCity_Houses_Artist_Text_1:
# 19 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Where's my masterpiece? I just got the\n"
	.string "Black Sludge! Don't hurry me, you\l"
	.string "philistine!$"

SilversunCity_Houses_Artist_Text_2:
# 24 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Yes yes. Have you brought me the Black\n"
	.string "Sludge?$"

SilversunCity_Houses_Artist_Text_3:
# 29 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "{PLAYER} gave Arsalan a Black Sludge.$"

SilversunCity_Houses_Artist_Text_4:
# 32 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Amazing! You are a life-saver. Here, I\n"
	.string "must repay you somehow. Take this, have\l"
	.string "it!$"

SilversunCity_Houses_Artist_Text_5:
# 38 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I have no need of it. Why should my art\n"
	.string "hide behind a facade? But you, my dear\l"
	.string "helpful philistine, might benefit from\l"
	.string "it. For the right Pokémon, it can be a\l"
	.string "powerful move.\p"
	.string "Farewell!$"

SilversunCity_Houses_Artist_Text_6:
# 41 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "But you do not have it! An artist's eyes\n"
	.string "cannot be fooled.$"

SilversunCity_Houses_Artist_Text_7:
# 45 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Just use the regular black paint, you\n"
	.string "say? Pah! Philistine!$"

SilversunCity_Houses_Artist_Text_8:
# 50 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "???$"

SilversunCity_Houses_Artist_Text_9:
# 51 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Myself, I have no patience for theater.\n"
	.string "No no! Although Gloria is fantastic.\l"
	.string "Such style and technique! I admire her\l"
	.string "interpretation of the morbid.\p"
	.string "Me?\p"
	.string "My creativity compels me to bring the\n"
	.string "world to life through paint and brush!$"

SilversunCity_Houses_Artist_Text_10:
# 55 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Yes yes! I am indeed none other than\n"
	.string "the legendary Arsalan. My works adorn\l"
	.string "the most prestigious walls in Cormoria!\p"
	.string "...$"

SilversunCity_Houses_Artist_Text_11:
# 62 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "You haven't heard of me?\n"
	.string "Uncultured, you are!$"

SilversunCity_Houses_Artist_Text_12:
# 66 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "But Arsalan is struggling now.\p"
	.string "Why, you ask?\p"
	.string "Well well.\p"
	.string "You see, I am trying to paint something\n"
	.string "never done before - the night itself!\l"
	.string "And for this, I need a paint so dark it\l"
	.string "swallows you. These regular paints\l"
	.string "aren't worthy of being on my canvas.\l"
	.string "I need to create a unique shade of\l"
	.string "black using some Black Sludge.\p"
	.string "Will you help me?$"

SilversunCity_Houses_Artist_Text_13:
# 73 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Arsalan is most pleased!\n"
	.string "I eagerly await your return.$"

SilversunCity_Houses_Artist_Text_14:
# 84 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Just use the regular paint, you say?\p"
	.string "Pah! Philistine!$"

SilversunCity_Houses_Tutor_Text_0:
# 95 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm the sole proprietor of Drifblim\n"
	.string "Travels Pvt. Ltd.\p"
	.string "...\p"
	.string "Want a pass? Sure thing.\n"
	.string "All it'll cost you is ¥99999.\p"
	.string "Haven't got the money?\p"
	.string "Then scram, kid!\n"
	.string "I'm doing business here.$"

SilversunCity_Houses_NPC1_Text_0:
# 109 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Silversun City is right between the\n"
	.string "always foggy Vilethorn Woods and the\l"
	.string "always raining Route 6! We should be\l"
	.string "called Silvershade City instead.$"

SilversunCity_Houses_NPC2_Text_0:
# 113 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "They say dangerous Pokémon come out\n"
	.string "from the sewers from time to time, like\l"
	.string "the Sewer Scourge. Apparently that's\l"
	.string "not even a Pokémon, it's an evil spirit!\l"
	.string "I don't let my child play near it!$"

SilversunCity_Houses_NPC3_Text_0:
# 117 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I want a Toxel as my first Pokémon but\n"
	.string "Mom will never let me have one.$"

SilversunCity_Houses_DuskullNPC1_Text_0:
# 141 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Thank you for saving my wife. She's\n"
	.string "blind, so she needs a Pokémon to assist\l"
	.string "her. But the orphanage was short of\l"
	.string "Pokémon, and we couldn't wait. So we\l"
	.string "bought an egg at the black market.\l"
	.string "That's when she got lost. She took a\l"
	.string "wrong turn somewhere and I didn't pay\l"
	.string "attention.\p"
	.string "But thanks to you, both of us are safe\n"
	.string "and we have a new member of the family!\l"
	.string "With Furfrou around, my wife can do\l"
	.string "things normally now. We're eternally\l"
	.string "grateful.\p"
	.string "...\p"
	.string "We want you to have this. The black\n"
	.string "market dealer gave it to us but we don't\l"
	.string "need it.$"

SilversunCity_Houses_DuskullNPC1_Text_1:
# 146 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm never going to the sewers\n"
	.string "again...but we did what we had to do.$"

SilversunCity_Houses_Husband_Text_0:
# 155 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Thank you for saving my wife. She's\n"
	.string "blind, so she needs a Pokémon to assist\l"
	.string "her. But the orphanage was short of\l"
	.string "Pokémon, and we couldn't wait. So we\l"
	.string "bought an egg at the black market.\l"
	.string "That's when she got lost. She took a\l"
	.string "wrong turn somewhere and I didn't pay\l"
	.string "attention.\p"
	.string "But thanks to you, both of us are safe\n"
	.string "and we have a new member of the family!\l"
	.string "With Furfrou around, my wife can live\l"
	.string "better. We're eternally grateful.\p"
	.string "...\p"
	.string "Please take this. It was hard to get,\n"
	.string "but we won't need it any more, because\l"
	.string "we'll never go into the black market\l"
	.string "again.$"

SilversunCity_Houses_Wife_Text_0:
# 169 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Furfrou helps me a ton around the\n"
	.string "house.$"

SilversunCity_Houses_Furfrou_Text_0:
# 175 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Furfrou is patiently waiting by its\n"
	.string "owner.$"
