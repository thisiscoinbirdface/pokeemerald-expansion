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
# 61 "data//maps/SilversunCity_Houses/scripts.pory"
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
# 67 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 68 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 69 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Tutor_Text_0
# 70 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC1::
# 84 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 85 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 86 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC1_Text_0
# 87 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC2::
# 91 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 92 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 93 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC2_Text_0
# 94 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC3::
# 98 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 99 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 100 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC3_Text_0
# 101 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_DuskullNPC1::
# 121 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_DuskullNPC1_2
# 130 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1
SilversunCity_Houses_DuskullNPC1_1:
# 133 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return

SilversunCity_Houses_DuskullNPC1_2:
# 122 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 125 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0
# 126 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 127 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 128 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
	goto SilversunCity_Houses_DuskullNPC1_1


SilversunCity_Houses_Husband::
# 137 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_Husband_2
# 147 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1
SilversunCity_Houses_Husband_1:
# 150 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return

SilversunCity_Houses_Husband_2:
# 138 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 141 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0
# 142 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 143 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 144 "data//maps/SilversunCity_Houses/scripts.pory"
	completequest QUEST_SILVERSUN_WIFE
# 145 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 5
	goto SilversunCity_Houses_Husband_1


SilversunCity_Houses_Wife::
# 154 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Wife_Text_0
# 155 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return


SilversunCity_Houses_Furfrou::
# 160 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Furfrou_Text_0
# 161 "data//maps/SilversunCity_Houses/scripts.pory"
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
	.string "Yes yes. Have you brought me the BLACK\n"
	.string "SLUDGE?$"

SilversunCity_Houses_Artist_Text_1:
# 27 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "{PLAYER} gave ARSALAN a BLACK\n"
	.string "SLUDGE.$"

SilversunCity_Houses_Artist_Text_2:
# 29 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Amazing! You are a life-saver. Here, I\n"
	.string "must repay you somehow. Take this, have\l"
	.string "it!$"

SilversunCity_Houses_Artist_Text_3:
# 34 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "But you do not have it! An artist's eyes\n"
	.string "cannot be fooled.$"

SilversunCity_Houses_Artist_Text_4:
# 38 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Just use the regular black paint, you\n"
	.string "say? Pah! Philistine!$"

SilversunCity_Houses_Artist_Text_5:
# 43 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Myself, I have no patience for theater.\n"
	.string "No no! Although GLORIA is fantastic. I\l"
	.string "admire her interpretation of the\l"
	.string "morbid.\p"
	.string "Me? My creative pulse compels me to\n"
	.string "bring the world to life through paint\l"
	.string "and brush! Yes yes! I am none other\l"
	.string "than the legendary ARSALAN. My works\l"
	.string "adorn the most prestigious walls in\l"
	.string "Cormoria!\p"
	.string "...\p"
	.string "But ARSALAN is struggling now. Why, you\n"
	.string "ask? Well well.\p"
	.string "You see, I am trying to paint something\n"
	.string "never attempted before - the night\l"
	.string "itself! And for this, I need a paint so\l"
	.string "dark it swallows you. These regular\l"
	.string "paints aren't worthy of being on my\l"
	.string "canvas. I need some BLACK SLUDGE.\p"
	.string "Will you help me?$"

SilversunCity_Houses_Artist_Text_6:
# 45 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN is most pleased! I eagerly\n"
	.string "await your return.$"

SilversunCity_Houses_Tutor_Text_0:
# 69 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm medidating. Come back to me later.\n"
	.string "Get 6 badges first.\p"
	.string "...\p"
	.string "Yes, my meditations are long.$"

SilversunCity_Houses_NPC1_Text_0:
# 86 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Silversun City is right between the\n"
	.string "always foggy Vilethorn Woods and the\l"
	.string "always raining Route 6! We should be\l"
	.string "called SILVERSHADE CITY instead.$"

SilversunCity_Houses_NPC2_Text_0:
# 93 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "They say dangerous {PKMN} come out from\n"
	.string "the sewers from time to time, like the\l"
	.string "SEWER SCOURGE. Apparently that's not\l"
	.string "even a {PKMN}, it's an evil spirit! I don't\l"
	.string "let my child play anywhere near it!$"

SilversunCity_Houses_NPC3_Text_0:
# 100 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I really want a TOXEL as my first {PKMN}\n"
	.string "but Mom will never let me have one.$"

SilversunCity_Houses_DuskullNPC1_Text_0:
# 125 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Thank you for saving my wife. You see,\n"
	.string "my wife is blind, so she needs a {PKMN} to\l"
	.string "assist her. But we didn't have enough\l"
	.string "money to apply for an assisance {PKMN}. So\l"
	.string "we resorted to illegal means. We bought\l"
	.string "an egg at the black market. That's when\l"
	.string "she got lost. She took a wrong turn\l"
	.string "somewhere and I didn't pay attention.\p"
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
# 130 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm never going to the sewers\n"
	.string "again...but we did what we had to do.$"

SilversunCity_Houses_Wife_Text_0:
# 154 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "The poor baby must be tired...I can hear\n"
	.string "its snores.$"

SilversunCity_Houses_Furfrou_Text_0:
# 160 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "FURFROU is patiently waiting.$"
