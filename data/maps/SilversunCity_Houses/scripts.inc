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
# 32 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SILVERSUN_ARTIST, 0
	goto_if_eq SilversunCity_Houses_Artist_5
SilversunCity_Houses_Artist_4:
# 50 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end

SilversunCity_Houses_Artist_2:
# 14 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_0, MSGBOX_YESNO
# 15 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_7
# 28 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_4
	goto SilversunCity_Houses_Artist_1

SilversunCity_Houses_Artist_5:
# 33 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_5, MSGBOX_YESNO
# 34 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Houses_Artist_10
# 41 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 2, SilversunCity_Houses_Artist_Movement_0
# 42 "data//maps/SilversunCity_Houses/scripts.pory"
	waitmovement 0
# 43 "data//maps/SilversunCity_Houses/scripts.pory"
	delay 24
# 44 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_4
# 45 "data//maps/SilversunCity_Houses/scripts.pory"
	release
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_7:
	checkitem ITEM_BLACK_SLUDGE
# 0 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SilversunCity_Houses_Artist_13
# 24 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_3
# 25 "data//maps/SilversunCity_Houses/scripts.pory"
	release
	goto SilversunCity_Houses_Artist_1

SilversunCity_Houses_Artist_10:
# 35 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_6
# 36 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 38 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 1
	goto SilversunCity_Houses_Artist_4

SilversunCity_Houses_Artist_13:
# 17 "data//maps/SilversunCity_Houses/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE
# 18 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_1
# 19 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Artist_Text_2
# 20 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 21 "data//maps/SilversunCity_Houses/scripts.pory"
	giveitem ITEM_SILVERPOWDER
# 22 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SILVERSUN_ARTIST, 2
	goto SilversunCity_Houses_Artist_1


SilversunCity_Houses_Tutor::
# 56 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 57 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 58 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Tutor_Text_0
# 59 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC1::
# 73 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 74 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 75 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC1_Text_0
# 76 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC2::
# 80 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 81 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 82 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC2_Text_0
# 83 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_NPC3::
# 87 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 88 "data//maps/SilversunCity_Houses/scripts.pory"
	faceplayer
# 89 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_NPC3_Text_0
# 90 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	end


SilversunCity_Houses_DuskullNPC1::
# 110 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_DuskullNPC1_2
# 119 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1
SilversunCity_Houses_DuskullNPC1_1:
# 122 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return

SilversunCity_Houses_DuskullNPC1_2:
# 111 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 112 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 6, SilversunCity_Houses_DuskullNPC1_Movement_0
# 113 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 7, SilversunCity_Houses_DuskullNPC1_Movement_0
# 114 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0
# 115 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 116 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 117 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 4
	goto SilversunCity_Houses_DuskullNPC1_1


SilversunCity_Houses_Husband::
# 126 "data//maps/SilversunCity_Houses/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 4
	goto_if_eq SilversunCity_Houses_Husband_2
# 135 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_1
SilversunCity_Houses_Husband_1:
# 138 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return

SilversunCity_Houses_Husband_2:
# 127 "data//maps/SilversunCity_Houses/scripts.pory"
	lockall
# 128 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 6, SilversunCity_Houses_DuskullNPC1_Movement_0
# 129 "data//maps/SilversunCity_Houses/scripts.pory"
	applymovement 7, SilversunCity_Houses_DuskullNPC1_Movement_0
# 130 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_DuskullNPC1_Text_0
# 131 "data//maps/SilversunCity_Houses/scripts.pory"
	release
# 132 "data//maps/SilversunCity_Houses/scripts.pory"
	giveegg SPECIES_HONEDGE
# 133 "data//maps/SilversunCity_Houses/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 5
	goto SilversunCity_Houses_Husband_1


SilversunCity_Houses_Wife::
# 142 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Wife_Text_0
# 143 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return


SilversunCity_Houses_Munchlax::
# 148 "data//maps/SilversunCity_Houses/scripts.pory"
	msgbox SilversunCity_Houses_Munchlax_Text_0
# 149 "data//maps/SilversunCity_Houses/scripts.pory"
	releaseall
	return


# 41 "data//maps/SilversunCity_Houses/scripts.pory"
SilversunCity_Houses_Artist_Movement_0:
# 41 "data//maps/SilversunCity_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

# 112 "data//maps/SilversunCity_Houses/scripts.pory"
SilversunCity_Houses_DuskullNPC1_Movement_0:
# 112 "data//maps/SilversunCity_Houses/scripts.pory"
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
# 19 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Amazing! You are a life-saver. Here, I\n"
	.string "must repay you somehow. Take this, have\l"
	.string "it!$"

SilversunCity_Houses_Artist_Text_3:
# 24 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "But you do not have it! An artist's eyes\n"
	.string "cannot be fooled.$"

SilversunCity_Houses_Artist_Text_4:
# 28 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "Just use the regular black paint, you\n"
	.string "say? Pah! Philistine!$"

SilversunCity_Houses_Artist_Text_5:
# 33 "data//maps/SilversunCity_Houses/scripts.pory"
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
# 35 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "ARSALAN is most pleased! I eagerly\n"
	.string "await your return.$"

SilversunCity_Houses_Tutor_Text_0:
# 58 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm medidating. Come back to me later.\n"
	.string "Get 6 badges first.\p"
	.string "...\p"
	.string "Yes, my meditations are long.$"

SilversunCity_Houses_NPC1_Text_0:
# 75 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "SILVERSUN CITY is right between the\n"
	.string "always foggy VILETHORN WOODS and the\l"
	.string "always raining ROUTE 6! We should be\l"
	.string "called SILVERSHADE CITY instead.$"

SilversunCity_Houses_NPC2_Text_0:
# 82 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "They say dangerous {PKMN} come out from\n"
	.string "the sewers from time to time, like the\l"
	.string "SEWER SKULL. Apparently that's not\l"
	.string "even a {PKMN}, it's an evil spirit! I don't\l"
	.string "let my child play anywhere near it!$"

SilversunCity_Houses_NPC3_Text_0:
# 89 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I really want a TOXEL as my first {PKMN}\n"
	.string "but Mom will never let me have one.$"

SilversunCity_Houses_DuskullNPC1_Text_0:
# 114 "data//maps/SilversunCity_Houses/scripts.pory"
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
# 119 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "I'm never going to the sewers\n"
	.string "again...but we did what we had to do.$"

SilversunCity_Houses_Wife_Text_0:
# 142 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "The poor baby must be tired...I can hear\n"
	.string "its snores.$"

SilversunCity_Houses_Munchlax_Text_0:
# 148 "data//maps/SilversunCity_Houses/scripts.pory"
	.string "MUNCHLAX is snoring while standing.$"
