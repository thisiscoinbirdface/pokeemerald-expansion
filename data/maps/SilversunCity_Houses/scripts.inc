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
# 19 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 1
	goto_if_eq SilversunCity_Houses_Artist_2
SilversunCity_Houses_Artist_1:
# 39 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 0
	goto_if_eq SilversunCity_Houses_Artist_5
SilversunCity_Houses_Artist_4:
# 57 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end

SilversunCity_Houses_Artist_2:
# 20 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_0, MSGBOX_YESNO
# 21 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_7
# 35 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_4
	goto SilversunCity_Houses_Artist_1

SilversunCity_Houses_Artist_5:
# 40 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_5, MSGBOX_YESNO
# 41 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_10
# 49 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 2, SilversunCity_Houses_Artist_Movement_0
# 50 "data//maps/SilversunCity_Houses/scripts.pory"
	waitmovement 0
# 51 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 24
# 52 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_4
# 53 "data//maps/SilversunCity_Houses/scripts.pory"
	release
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_7:
	checkitem ITEM_BLACK_SLUDGE
# 0 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SilversunCity_Houses_Artist_13
# 31 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_3
# 32 "data//maps/SilversunCity_Houses/scripts.pory"
	release
	goto SilversunCity_Houses_Artist_1

SilversunCity_Houses_Artist_10:
# 42 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_6
# 43 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 45 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 1
# 46 "data//maps/SilversunCity_Houses/scripts.pory"
	startquest QUEST_SILVERSUN_ARTIST
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_13:
# 23 "data//maps/SilversunCity_Houses/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE
# 24 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_1
# 25 "data//maps/SilversunCity_Houses/scripts.pory"
	completequest QUEST_SILVERSUN_ARTIST
# 26 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_2
# 27 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 28 "data//maps/SilversunCity_Houses/scripts.pory"
	giveitem ITEM_SILVERPOWDER
# 29 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 2
	goto SilversunCity_Houses_Artist_1


SilversunCity_Houses_Tutor::
# 63 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Tutor_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_NPC1::
# 77 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_NPC2::
# 81 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_NPC3::
# 85 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC3_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_DuskullNPC1::
# 105 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_DuskullNPC1_2
# 114 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1, MSGBOX_NPC
SilversunCity_Houses_DuskullNPC1_1:
	end

SilversunCity_Houses_DuskullNPC1_2:
# 106 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 109 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0, MSGBOX_NPC
# 110 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 111 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 112 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
	goto SilversunCity_Houses_DuskullNPC1_1


SilversunCity_Houses_Husband::
# 120 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_Husband_2
# 130 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1, MSGBOX_NPC
SilversunCity_Houses_Husband_1:
	end

SilversunCity_Houses_Husband_2:
# 123 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Husband_Text_0, MSGBOX_NPC
# 124 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 126 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 127 "data//maps/SilversunCity_Houses/scripts.pory"
	completequest QUEST_SILVERSUN_WIFE
# 128 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 5
	goto SilversunCity_Houses_Husband_1


SilversunCity_Houses_Wife::
# 137 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Wife_Text_0, MSGBOX_NPC
	end


SilversunCity_Houses_Furfrou::
# 143 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Furfrou_Text_0, MSGBOX_NPC
	end


# 49 "data//maps/SilversunCity_Houses/scripts.pory"
SilversunCity_Houses_Artist_Movement_0:
# 49 "data//maps/SilversunCity_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

SilversunCity_Houses_Smeargle_Text_0:
# 10 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "SMEARGLE is holding the teacup with its\n"
	.string "tail and sipping tea! With a tail like\l"
	.string "that, no wonder it can draw so well.$"

SilversunCity_Houses_Artist_Text_0:
# 20 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: Yes yes. Have you brought me\n"
	.string "the BLACK SLUDGE?$"

SilversunCity_Houses_Artist_Text_1:
# 24 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "{PLAYER} gave ARSALAN a BLACK\n"
	.string "SLUDGE.$"

SilversunCity_Houses_Artist_Text_2:
# 26 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: Amazing! You are a life-saver.\n"
	.string "Here, I must repay you somehow. Take\l"
	.string "this, have it!$"

SilversunCity_Houses_Artist_Text_3:
# 31 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: But you do not have it! An\n"
	.string "artist's eyes cannot be fooled.$"

SilversunCity_Houses_Artist_Text_4:
# 35 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: Just use the regular black\n"
	.string "paint, you say? Pah! Philistine!$"

SilversunCity_Houses_Artist_Text_5:
# 40 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: Myself, I have no patience for\n"
	.string "theater. No no! Although Gloria is\l"
	.string "indeed fantastic. I admire her\l"
	.string "interpretation of the morbid.\p"
	.string "ARSALAN: Me? My creative pulse compels\n"
	.string "me to bring the world to life through\l"
	.string "paint and brush! Yes yes! I am none\l"
	.string "other than the legendary ARSALAN. My\l"
	.string "works adorn the most prestigious walls\l"
	.string "in Cormoria!\p"
	.string "...\p"
	.string "ARSALAN: But Arsalan is struggling now.\n"
	.string "Why, you ask? Well well.\p"
	.string "ARSALAN: You see, I am trying to paint\n"
	.string "something never attempted before -\l"
	.string "the night itself! And for this, I need a\l"
	.string "paint so dark it swallows you. These\l"
	.string "regular paints aren't worthy of being\l"
	.string "on my canvas. I need some Black Sludge.\p"
	.string "ARSALAN: Will you help me?$"

SilversunCity_Houses_Artist_Text_6:
# 42 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: Arsalan is most pleased! I\n"
	.string "eagerly await your return.$"

SilversunCity_Houses_Tutor_Text_0:
# 63 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm medidating. Come back to me later.\n"
	.string "Get 6 badges first.\p"
	.string "...\p"
	.string "Yes, my meditations are long.$"

SilversunCity_Houses_NPC1_Text_0:
# 77 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Silversun City is right between the\n"
	.string "always foggy Vilethorn Woods and the\l"
	.string "always raining Route 6! We should be\l"
	.string "called Silvershade City instead.$"

SilversunCity_Houses_NPC2_Text_0:
# 81 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "They say dangerous Pokemon come out\n"
	.string "from the sewers from time to time, like\l"
	.string "the SEWER SCOURGE. Apparently that's\l"
	.string "not even a Pokemon, it's an evil spirit!\l"
	.string "I don't let my child play anywhere near\l"
	.string "it!$"

SilversunCity_Houses_NPC3_Text_0:
# 85 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I really want a Toxel as my first\n"
	.string "Pokemon but Mom will never let me have\l"
	.string "one.$"

SilversunCity_Houses_DuskullNPC1_Text_0:
# 109 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Thank you for saving my wife. She's\n"
	.string "blind, so she needs a Pokemon to assist\l"
	.string "her. But the orphanage was short of\l"
	.string "Pokemon, and we couldn't wait. So we\l"
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
# 114 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm never going to the sewers\n"
	.string "again...but we did what we had to do.$"

SilversunCity_Houses_Husband_Text_0:
# 123 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Thank you for saving my wife. She's\n"
	.string "blind, so she needs a Pokemon to assist\l"
	.string "her. But the orphanage was short of\l"
	.string "Pokemon, and we couldn't wait. So we\l"
	.string "bought an egg at the black market.\l"
	.string "That's when she got lost. She took a\l"
	.string "wrong turn somewhere and I didn't pay\l"
	.string "attention.\p"
	.string "But thanks to you, both of us are safe\n"
	.string "and we have a new member of the family!\l"
	.string "With Furfrou around, my wife can live\l"
	.string "better. We're eternally grateful.\p"
	.string "...\p"
	.string "We want you to have this. The black\n"
	.string "market dealer gave it to us but we don't\l"
	.string "need it.$"

SilversunCity_Houses_Wife_Text_0:
# 137 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Furfrou helps me a ton around the\n"
	.string "house.$"

SilversunCity_Houses_Furfrou_Text_0:
# 143 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Furfrou is patiently waiting by its\n"
	.string "ownder.$"
