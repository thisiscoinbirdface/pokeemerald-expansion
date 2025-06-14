RivetshoreCity_Houses_MapScripts::
	.byte 0


RivetshoreCity_Houses_NPC1::
# 11 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Houses_NPC2::
# 15 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC2_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Houses_Scolipede::
# 19 "data//maps/RivetshoreCity_Houses/scripts.pory"
	playmoncry SPECIES_SCOLIPEDE, CRY_MODE_NORMAL
# 20 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_Scolipede_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Houses_NPC3::
# 26 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC3_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Houses_NPC4::
# 30 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC4_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Houses_Clodsire::
# 34 "data//maps/RivetshoreCity_Houses/scripts.pory"
	playmoncry SPECIES_CLODSIRE, CRY_MODE_NORMAL
# 35 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_Clodsire_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Houses_NPC5::
# 42 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC5_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Houses_NPC6::
# 47 "data//maps/RivetshoreCity_Houses/scripts.pory"
	lockall
# 48 "data//maps/RivetshoreCity_Houses/scripts.pory"
	faceplayer
# 50 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RIVETSHORE_EGG_QUEST, 2
	goto_if_eq RivetshoreCity_Houses_NPC6_2
# 80 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RIVETSHORE_EGG_QUEST, 1
	goto_if_eq RivetshoreCity_Houses_NPC6_5
# 120 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RIVETSHORE_EGG_QUEST, 0
	goto_if_eq RivetshoreCity_Houses_NPC6_11
# 144 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end

RivetshoreCity_Houses_NPC6_2:
# 51 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_0, MSGBOX_YESNO
# 52 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_Houses_NPC6_8
RivetshoreCity_Houses_NPC6_7:
# 76 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end

RivetshoreCity_Houses_NPC6_5:
# 81 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_3, MSGBOX_YESNO
# 83 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_Houses_NPC6_13
# 114 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_10
# 115 "data//maps/RivetshoreCity_Houses/scripts.pory"
	release
	end

RivetshoreCity_Houses_NPC6_8:
# 53 "data//maps/RivetshoreCity_Houses/scripts.pory"
	playbgm MUS_NONE, FALSE
# 54 "data//maps/RivetshoreCity_Houses/scripts.pory"
	special StartFlappyBird
# 55 "data//maps/RivetshoreCity_Houses/scripts.pory"
	waitstate
# 56 "data//maps/RivetshoreCity_Houses/scripts.pory"
	savebgm MUS_DUMMY
# 57 "data//maps/RivetshoreCity_Houses/scripts.pory"
	fadedefaultbgm
# 58 "data//maps/RivetshoreCity_Houses/scripts.pory"
	delay 1
# 61 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare GAME_CORNER_VAR_WINNINGS, 3
	goto_if_gt RivetshoreCity_Houses_NPC6_16
	goto RivetshoreCity_Houses_NPC6_7

RivetshoreCity_Houses_NPC6_11:
# 121 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_11
# 122 "data//maps/RivetshoreCity_Houses/scripts.pory"
	release
# 123 "data//maps/RivetshoreCity_Houses/scripts.pory"
	delay 16
# 124 "data//maps/RivetshoreCity_Houses/scripts.pory"
	applymovement VAR_LAST_TALKED, RivetshoreCity_Houses_NPC6_Movement_0
# 125 "data//maps/RivetshoreCity_Houses/scripts.pory"
	waitmovement 0
# 126 "data//maps/RivetshoreCity_Houses/scripts.pory"
	delay 24
# 127 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_12, MSGBOX_NPC
# 128 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_13, MSGBOX_YESNO
# 129 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_Houses_NPC6_19
# 139 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_15
# 140 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end

RivetshoreCity_Houses_NPC6_13:
# 84 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_4
# 85 "data//maps/RivetshoreCity_Houses/scripts.pory"
	release
# 88 "data//maps/RivetshoreCity_Houses/scripts.pory"
	checkitem ITEM_POCKET_BOY
# 90 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_Houses_NPC6_21
# 107 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_9
# 108 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end

RivetshoreCity_Houses_NPC6_16:
# 62 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_1
# 64 "data//maps/RivetshoreCity_Houses/scripts.pory"
	goto_if_set FLAG_GET_POCKET_DRIVE, RivetshoreCity_Houses_NPC6_25
# 66 "data//maps/RivetshoreCity_Houses/scripts.pory"
	release
# 67 "data//maps/RivetshoreCity_Houses/scripts.pory"
	delay 8
# 68 "data//maps/RivetshoreCity_Houses/scripts.pory"
	playse SE_CLICK
# 69 "data//maps/RivetshoreCity_Houses/scripts.pory"
	waitse
# 70 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_2
# 71 "data//maps/RivetshoreCity_Houses/scripts.pory"
	release
# 72 "data//maps/RivetshoreCity_Houses/scripts.pory"
	giveitem ITEM_POCKET_DRIVE
# 73 "data//maps/RivetshoreCity_Houses/scripts.pory"
	setflag FLAG_GET_POCKET_DRIVE
	goto RivetshoreCity_Houses_NPC6_7

RivetshoreCity_Houses_NPC6_19:
# 130 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_14
# 131 "data//maps/RivetshoreCity_Houses/scripts.pory"
	release
# 133 "data//maps/RivetshoreCity_Houses/scripts.pory"
	startquest QUEST_RIVETSHORE_POCKETBOY
# 134 "data//maps/RivetshoreCity_Houses/scripts.pory"
	setvar VAR_RIVETSHORE_EGG_QUEST, 1
# 135 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end

RivetshoreCity_Houses_NPC6_21:
# 91 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_5
# 93 "data//maps/RivetshoreCity_Houses/scripts.pory"
	delay 16
# 94 "data//maps/RivetshoreCity_Houses/scripts.pory"
	applymovement VAR_LAST_TALKED, RivetshoreCity_Houses_NPC6_Movement_0
# 95 "data//maps/RivetshoreCity_Houses/scripts.pory"
	waitmovement 0
# 96 "data//maps/RivetshoreCity_Houses/scripts.pory"
	delay 24
# 97 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_6
# 98 "data//maps/RivetshoreCity_Houses/scripts.pory"
	completequest QUEST_RIVETSHORE_POCKETBOY
# 99 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_7
# 100 "data//maps/RivetshoreCity_Houses/scripts.pory"
	setvar VAR_RIVETSHORE_EGG_QUEST, 2
# 101 "data//maps/RivetshoreCity_Houses/scripts.pory"
	removeitem ITEM_POCKET_BOY
# 102 "data//maps/RivetshoreCity_Houses/scripts.pory"
	giveitem ITEM_RED_CARD
# 103 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_8
# 104 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end

RivetshoreCity_Houses_NPC6_25:
	end


RivetshoreCity_Houses_NPC7::
# 148 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC7_Text_0, MSGBOX_NPC
# 149 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end


# 94 "data//maps/RivetshoreCity_Houses/scripts.pory"
RivetshoreCity_Houses_NPC6_Movement_0:
# 94 "data//maps/RivetshoreCity_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

RivetshoreCity_Houses_NPC1_Text_0:
# 11 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "We can't go on the S.S. Elegant cruise\n"
	.string "because our Scolipede gets seasick.\l"
	.string "Unfortunate, but what can one do?$"

RivetshoreCity_Houses_NPC2_Text_0:
# 15 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "My husband claims our Scolipede gets\n"
	.string "seasick, but Scolipede's always been\l"
	.string "fine at sea.\p"
	.string "He's the one that gets seasick!$"

RivetshoreCity_Houses_Scolipede_Text_0:
# 20 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Scolipede is looking wistfully at the\n"
	.string "harbor...$"

RivetshoreCity_Houses_NPC3_Text_0:
# 26 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "One of the shopkeepers Pokémon was\n"
	.string "found lost deep inside the quarry the\l"
	.string "other day. Apparently it was a prank by\l"
	.string "someone!$"

RivetshoreCity_Houses_NPC4_Text_0:
# 30 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "There's a mean Pokémon playing pranks\n"
	.string "on everyone's Pokémon in the city!\p"
	.string "But it hasn't tried anything yet on our\n"
	.string "Clodsire.$"

RivetshoreCity_Houses_Clodsire_Text_0:
# 35 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Clodsire looks blissfully unaware of its\n"
	.string "surroundings.$"

RivetshoreCity_Houses_NPC5_Text_0:
# 42 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Grandma won't let us get a PocketBoy!\n"
	.string "So we're playing card games instead.$"

RivetshoreCity_Houses_NPC6_Text_0:
# 51 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "We've hidden the PocketBoy well.\n"
	.string "Grandma will never find out.\l"
	.string "Wanna play?$"

RivetshoreCity_Houses_NPC6_Text_1:
# 62 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "You got the high score!$"

RivetshoreCity_Houses_NPC6_Text_2:
# 70 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Something fell out of the PocketBoy!\n"
	.string "What is it?$"

RivetshoreCity_Houses_NPC6_Text_3:
# 81 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Did you bring us a PocketBoy?$"

RivetshoreCity_Houses_NPC6_Text_4:
# 84 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Cool! Let us see!$"

RivetshoreCity_Houses_NPC6_Text_5:
# 91 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "It's a PocketBoy! You really got it! It\n"
	.string "looks so cool! What games does it have?\p"
	.string "...$"

RivetshoreCity_Houses_NPC6_Text_6:
# 97 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "FLUTTERFREE!?!\p"
	.string "That's the best one!\n"
	.string "Thank you so much!$"

RivetshoreCity_Houses_NPC6_Text_7:
# 99 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Um...we don't have any money, but you\n"
	.string "can take one of our rare cards instead!$"

RivetshoreCity_Houses_NPC6_Text_8:
# 103 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "You can come and play with us any time!$"

RivetshoreCity_Houses_NPC6_Text_9:
# 107 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Not this - we want a PocketBoy!$"

RivetshoreCity_Houses_NPC6_Text_10:
# 114 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Sigh...$"

RivetshoreCity_Houses_NPC6_Text_11:
# 121 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Sigh...playing these card games are so\n"
	.string "boring! I wish we had a PocketBoy.\l"
	.string "Everyone else has one!\p"
	.string "...$"

RivetshoreCity_Houses_NPC6_Text_12:
# 127 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Hey, I bet you could get us a\n"
	.string "PocketBoy!\p"
	.string "What's a PocketBoy? You don't know?\n"
	.string "It's the best game console right now!\l"
	.string "But Grandma won't let us play games...$"

RivetshoreCity_Houses_NPC6_Text_13:
# 128 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Will you bring us a PocketBoy?$"

RivetshoreCity_Houses_NPC6_Text_14:
# 130 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Yay! But be cool about it, okay?\n"
	.string "Or Grandma will find out.$"

RivetshoreCity_Houses_NPC6_Text_15:
# 139 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Sigh...old people are so lame.\n"
	.string "C'mon bro, shuffle the deck.$"

RivetshoreCity_Houses_NPC7_Text_0:
# 148 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "My two grandchildren will make fine\n"
	.string "doctors and lawyers one day!\n"
	.string "They won't turn out like you.$"
