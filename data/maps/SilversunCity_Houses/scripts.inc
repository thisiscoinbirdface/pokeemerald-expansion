SilversunCity_Houses_MapScripts::
	.byte 0


SilversunCity_Houses_Artist::
# 9 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 10 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 13 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 1
	goto_if_eq SilversunCity_Houses_Artist_2
SilversunCity_Houses_Artist_1:
# 33 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 0
	goto_if_eq SilversunCity_Houses_Artist_5
SilversunCity_Houses_Artist_4:
# 52 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end

SilversunCity_Houses_Artist_2:
# 14 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_0, MSGBOX_YESNO
# 15 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_7
# 29 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_4
	goto SilversunCity_Houses_Artist_1

SilversunCity_Houses_Artist_5:
# 34 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_5, MSGBOX_YESNO
# 35 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_10
# 43 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 2, SilversunCity_Houses_Artist_Movement_0
# 44 "data//maps/SilversunCity_Houses/scripts.pory"
	waitmovement 0
# 45 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 24
# 46 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_4
# 47 "data//maps/SilversunCity_Houses/scripts.pory"
	release
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_7:
	checkitem ITEM_BLACK_SLUDGE
# 0 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SilversunCity_Houses_Artist_13
# 25 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_3
# 26 "data//maps/SilversunCity_Houses/scripts.pory"
	release
	goto SilversunCity_Houses_Artist_1

SilversunCity_Houses_Artist_10:
# 36 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_6
# 37 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 39 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 1
# 40 "data//maps/SilversunCity_Houses/scripts.pory"
	startquest QUEST_SILVERSUN_ARTIST
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_13:
# 17 "data//maps/SilversunCity_Houses/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE
# 18 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_1
# 19 "data//maps/SilversunCity_Houses/scripts.pory"
	completequest QUEST_SILVERSUN_ARTIST
# 20 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_2
# 21 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 22 "data//maps/SilversunCity_Houses/scripts.pory"
	giveitem ITEM_SILVERPOWDER
# 23 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 2
	goto SilversunCity_Houses_Artist_1


SilversunCity_Houses_Tutor::
# 58 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 59 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 60 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Tutor_Text_0
# 61 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC1::
# 75 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 76 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 77 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC1_Text_0
# 78 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC2::
# 82 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 83 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 84 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC2_Text_0
# 85 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC3::
# 89 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 90 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 91 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC3_Text_0
# 92 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_DuskullNPC1::
# 112 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_DuskullNPC1_2
# 121 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1
SilversunCity_Houses_DuskullNPC1_1:
# 124 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return

SilversunCity_Houses_DuskullNPC1_2:
# 113 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 114 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 6, SilversunCity_Houses_DuskullNPC1_Movement_0
# 115 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 7, SilversunCity_Houses_DuskullNPC1_Movement_0
# 116 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0
# 117 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 118 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 119 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
	goto SilversunCity_Houses_DuskullNPC1_1


SilversunCity_Houses_Husband::
# 128 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_Husband_2
# 138 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1
SilversunCity_Houses_Husband_1:
# 141 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return

SilversunCity_Houses_Husband_2:
# 129 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 130 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 6, SilversunCity_Houses_DuskullNPC1_Movement_0
# 131 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 7, SilversunCity_Houses_DuskullNPC1_Movement_0
# 132 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0
# 133 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 134 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 135 "data//maps/SilversunCity_Houses/scripts.pory"
	completequest QUEST_SILVERSUN_WIFE
# 136 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 5
	goto SilversunCity_Houses_Husband_1


SilversunCity_Houses_Wife::
# 145 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Wife_Text_0
# 146 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return


SilversunCity_Houses_Munchlax::
# 151 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Munchlax_Text_0
# 152 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return


# 43 "data//maps/SilversunCity_Houses/scripts.pory"
SilversunCity_Houses_Artist_Movement_0:
# 43 "data//maps/SilversunCity_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

# 114 "data//maps/SilversunCity_Houses/scripts.pory"
SilversunCity_Houses_DuskullNPC1_Movement_0:
# 114 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
	step_end

SilversunCity_Houses_Artist_Text_0:
# 14 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Yes yes. Have you brought me the BLACK\n"
	.string "SLUDGE?$"

SilversunCity_Houses_Artist_Text_1:
# 18 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "{PLAYER} gave ARSALAN a BLACK\n"
	.string "SLUDGE.$"

SilversunCity_Houses_Artist_Text_2:
# 20 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Amazing! You are a life-saver. Here, I\n"
	.string "must repay you somehow. Take this, have\l"
	.string "it!$"

SilversunCity_Houses_Artist_Text_3:
# 25 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "But you do not have it! An artist's eyes\n"
	.string "cannot be fooled.$"

SilversunCity_Houses_Artist_Text_4:
# 29 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Just use the regular black paint, you\n"
	.string "say? Pah! Philistine!$"

SilversunCity_Houses_Artist_Text_5:
# 34 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Myself, I have no patience for theater.\n"
	.string "No no! Although GLORIA is fantastic. I\l"
	.string "admire her interpretation of the\l"
	.string "morbid.\p"
	.string "Me? My creative pulse compels me to\n"
	.string "bring the world to life through paint\l"
	.string "and brush! Yes yes! I am none other\l"
	.string "than the legendary ARSALAN. My works\l"
	.string "adorn the most prestigious walls in\l"
	.string "CORMORIA!\p"
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
# 36 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN is most pleased! I eagerly\n"
	.string "await your return.$"

SilversunCity_Houses_Tutor_Text_0:
# 60 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm medidating. Come back to me later.\n"
	.string "Get 6 badges first.\p"
	.string "...\p"
	.string "Yes, my meditations are long.$"

SilversunCity_Houses_NPC1_Text_0:
# 77 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "SILVERSUN CITY is right between the\n"
	.string "always foggy VILETHORN WOODS and the\l"
	.string "always raining ROUTE 6! We should be\l"
	.string "called SILVERSHADE CITY instead.$"

SilversunCity_Houses_NPC2_Text_0:
# 84 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "They say dangerous {PKMN} come out from\n"
	.string "the sewers from time to time, like the\l"
	.string "SEWER SCOURGE. Apparently that's not\l"
	.string "even a {PKMN}, it's an evil spirit! I don't\l"
	.string "let my child play anywhere near it!$"

SilversunCity_Houses_NPC3_Text_0:
# 91 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I really want a TOXEL as my first {PKMN}\n"
	.string "but Mom will never let me have one.$"

SilversunCity_Houses_DuskullNPC1_Text_0:
# 116 "data//maps/SilversunCity_Houses/scripts.pory"
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
	.string "With MUNCHLAX around, my wife can do\l"
	.string "things normally now. We're eternally\l"
	.string "grateful.\p"
	.string "...\p"
	.string "We want you to have this. The black\n"
	.string "market dealer gave it to us but we don't\l"
	.string "need it.$"

SilversunCity_Houses_DuskullNPC1_Text_1:
# 121 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm never going to the sewers\n"
	.string "again...but we did what we had to do.$"

SilversunCity_Houses_Wife_Text_0:
# 145 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "The poor baby must be tired...I can hear\n"
	.string "its snores.$"

SilversunCity_Houses_Munchlax_Text_0:
# 151 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "MUNCHLAX is snoring while standing.$"
