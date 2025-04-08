SilversunCity_Houses_MapScripts::
	.byte 0


SilversunCity_Houses_Smeargle::
# 9 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 10 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 11 "data//maps/SilversunCity_Houses/scripts.pory"
	playmoncry SPECIES_SMEARGLE, CRY_MODE_NORMAL
# 12 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Smeargle_Text_0
# 13 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_Artist::
# 18 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 19 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 22 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 1
	goto_if_eq SilversunCity_Houses_Artist_2
SilversunCity_Houses_Artist_1:
# 42 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 0
	goto_if_eq SilversunCity_Houses_Artist_5
SilversunCity_Houses_Artist_4:
# 60 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end

SilversunCity_Houses_Artist_2:
# 23 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_0, MSGBOX_YESNO
# 24 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_7
# 38 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_4
	goto SilversunCity_Houses_Artist_1

SilversunCity_Houses_Artist_5:
# 43 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_5, MSGBOX_YESNO
# 44 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_10
# 52 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 2, SilversunCity_Houses_Artist_Movement_0
# 53 "data//maps/SilversunCity_Houses/scripts.pory"
	waitmovement 0
# 54 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 24
# 55 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_4
# 56 "data//maps/SilversunCity_Houses/scripts.pory"
	release
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_7:
	checkitem ITEM_BLACK_SLUDGE
# 0 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SilversunCity_Houses_Artist_13
# 34 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_3
# 35 "data//maps/SilversunCity_Houses/scripts.pory"
	release
	goto SilversunCity_Houses_Artist_1

SilversunCity_Houses_Artist_10:
# 45 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_6
# 46 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 48 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 1
# 49 "data//maps/SilversunCity_Houses/scripts.pory"
	startquest QUEST_SILVERSUN_ARTIST
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_13:
# 26 "data//maps/SilversunCity_Houses/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE
# 27 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_1
# 28 "data//maps/SilversunCity_Houses/scripts.pory"
	completequest QUEST_SILVERSUN_ARTIST
# 29 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_2
# 30 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 31 "data//maps/SilversunCity_Houses/scripts.pory"
	giveitem ITEM_SILVERPOWDER
# 32 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 2
	goto SilversunCity_Houses_Artist_1


SilversunCity_Houses_Tutor::
# 66 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 67 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 68 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Tutor_Text_0
# 69 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC1::
# 83 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 84 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 85 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC1_Text_0
# 86 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC2::
# 90 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 91 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 92 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC2_Text_0
# 93 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC3::
# 97 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 98 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 99 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC3_Text_0
# 100 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_DuskullNPC1::
# 120 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_DuskullNPC1_2
# 129 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1
SilversunCity_Houses_DuskullNPC1_1:
# 132 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return

SilversunCity_Houses_DuskullNPC1_2:
# 121 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 124 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0
# 125 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 126 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 127 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
	goto SilversunCity_Houses_DuskullNPC1_1


SilversunCity_Houses_Husband::
# 136 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_Husband_2
# 146 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1
SilversunCity_Houses_Husband_1:
# 149 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return

SilversunCity_Houses_Husband_2:
# 137 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 140 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0
# 141 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 142 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 143 "data//maps/SilversunCity_Houses/scripts.pory"
	completequest QUEST_SILVERSUN_WIFE
# 144 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 5
	goto SilversunCity_Houses_Husband_1


SilversunCity_Houses_Wife::
# 153 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Wife_Text_0
# 154 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return


SilversunCity_Houses_Furfrou::
# 159 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Furfrou_Text_0
# 160 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return


# 52 "data//maps/SilversunCity_Houses/scripts.pory"
SilversunCity_Houses_Artist_Movement_0:
# 52 "data//maps/SilversunCity_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

SilversunCity_Houses_Smeargle_Text_0:
# 12 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "SMEARGLE is holding the teacup with its\n"
	.string "tail and sipping tea! With a tail like\l"
	.string "that, no wonder it can draw so well.$"

SilversunCity_Houses_Artist_Text_0:
# 23 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: Yes yes. Have you brought me\n"
	.string "the BLACK SLUDGE?$"

SilversunCity_Houses_Artist_Text_1:
# 27 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "{PLAYER} gave ARSALAN a BLACK\n"
	.string "SLUDGE.$"

SilversunCity_Houses_Artist_Text_2:
# 29 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: Amazing! You are a life-saver.\n"
	.string "Here, I must repay you somehow. Take\l"
	.string "this, have it!$"

SilversunCity_Houses_Artist_Text_3:
# 34 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: But you do not have it! An\n"
	.string "artist's eyes cannot be fooled.$"

SilversunCity_Houses_Artist_Text_4:
# 38 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: Just use the regular black\n"
	.string "paint, you say? Pah! Philistine!$"

SilversunCity_Houses_Artist_Text_5:
# 43 "data//maps/SilversunCity_Houses/scripts.pory"
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
# 45 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN: Arsalan is most pleased! I\n"
	.string "eagerly await your return.$"

SilversunCity_Houses_Tutor_Text_0:
# 68 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm medidating. Come back to me later.\n"
	.string "Get 6 badges first.\p"
	.string "...\p"
	.string "Yes, my meditations are long.$"

SilversunCity_Houses_NPC1_Text_0:
# 85 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Silversun City is right between the\n"
	.string "always foggy Vilethorn Woods and the\l"
	.string "always raining Route 6! We should be\l"
	.string "called Silvershade City instead.$"

SilversunCity_Houses_NPC2_Text_0:
# 92 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "They say dangerous Pokemon come out\n"
	.string "from the sewers from time to time, like\l"
	.string "the SEWER SCOURGE. Apparently that's\l"
	.string "not even a Pokemon, it's an evil spirit!\l"
	.string "I don't let my child play anywhere near\l"
	.string "it!$"

SilversunCity_Houses_NPC3_Text_0:
# 99 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I really want a Toxel as my first\n"
	.string "Pokemon but Mom will never let me have\l"
	.string "one.$"

SilversunCity_Houses_DuskullNPC1_Text_0:
# 124 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Thank you for saving my wife. You see,\n"
	.string "my wife is blind, so she needs a Pokemon\l"
	.string "to assist her. But we didn't have enough\l"
	.string "money to apply for an assisance\l"
	.string "Pokemon. So we resorted to illegal\l"
	.string "means. We bought an egg at the black\l"
	.string "market. That's when she got lost. She\l"
	.string "took a wrong turn somewhere and I\l"
	.string "didn't pay attention.\p"
	.string "But thanks to you, both of us are safe\n"
	.string "and we have a new member of the family!\l"
	.string "With FURFROU around, my wife can do\l"
	.string "things normally now. We're eternally\l"
	.string "grateful.\p"
	.string "...\p"
	.string "We want you to have this. The black\n"
	.string "market dealer gave it to us but we don't\l"
	.string "need it.$"

SilversunCity_Houses_DuskullNPC1_Text_1:
# 129 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm never going to the sewers\n"
	.string "again...but we did what we had to do.$"

SilversunCity_Houses_Wife_Text_0:
# 153 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "The poor baby must be tired...I can hear\n"
	.string "its snores.$"

SilversunCity_Houses_Furfrou_Text_0:
# 159 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Furfrou is patiently waiting.$"
