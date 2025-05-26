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
# 46 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RIVETSHORE_EGG_QUEST, 2
	goto_if_eq RivetshoreCity_Houses_NPC6_2
# 52 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RIVETSHORE_EGG_QUEST, 1
	goto_if_eq RivetshoreCity_Houses_NPC6_5
# 86 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RIVETSHORE_EGG_QUEST, 0
	goto_if_eq RivetshoreCity_Houses_NPC6_8
# 99 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end

RivetshoreCity_Houses_NPC6_2:
# 47 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_0
# 48 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end

RivetshoreCity_Houses_NPC6_5:
# 53 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_1, MSGBOX_YESNO
# 55 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_Houses_NPC6_10
# 80 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_5
# 81 "data//maps/RivetshoreCity_Houses/scripts.pory"
	release
	end

RivetshoreCity_Houses_NPC6_8:
# 87 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_6, MSGBOX_YESNO
# 88 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_Houses_NPC6_14
RivetshoreCity_Houses_NPC6_13:
# 95 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_8
	end

RivetshoreCity_Houses_NPC6_10:
# 56 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_2
# 57 "data//maps/RivetshoreCity_Houses/scripts.pory"
	release
# 59 "data//maps/RivetshoreCity_Houses/scripts.pory"
	special ChoosePartyMon
# 60 "data//maps/RivetshoreCity_Houses/scripts.pory"
	waitstate
# 61 "data//maps/RivetshoreCity_Houses/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 62 "data//maps/RivetshoreCity_Houses/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 63 "data//maps/RivetshoreCity_Houses/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 65 "data//maps/RivetshoreCity_Houses/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq RivetshoreCity_Houses_NPC6_16
# 73 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_4
# 74 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end

RivetshoreCity_Houses_NPC6_14:
# 89 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_7
# 90 "data//maps/RivetshoreCity_Houses/scripts.pory"
	release
# 92 "data//maps/RivetshoreCity_Houses/scripts.pory"
	setvar VAR_RIVETSHORE_EGG_QUEST, 1
	goto RivetshoreCity_Houses_NPC6_13

RivetshoreCity_Houses_NPC6_16:
# 66 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC6_Text_3
# 67 "data//maps/RivetshoreCity_Houses/scripts.pory"
	setvar VAR_RIVETSHORE_EGG_QUEST, 2
# 69 "data//maps/RivetshoreCity_Houses/scripts.pory"
	giveitem ITEM_RED_CARD
# 70 "data//maps/RivetshoreCity_Houses/scripts.pory"
	releaseall
	end


RivetshoreCity_Houses_NPC7::
# 103 "data//maps/RivetshoreCity_Houses/scripts.pory"
	msgbox RivetshoreCity_Houses_NPC7_Text_0, MSGBOX_NPC
	end


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
	.string "Grandma won't let us get Pokémon! So\n"
	.string "we're playing card games instead.$"

RivetshoreCity_Houses_NPC6_Text_0:
# 47 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "We've hidden the Egg behind the house.\n"
	.string "Grandma will never find out!$"

RivetshoreCity_Houses_NPC6_Text_1:
# 53 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Did you bring us a Pokémon Egg?$"

RivetshoreCity_Houses_NPC6_Text_2:
# 56 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Cool! Let us see!$"

RivetshoreCity_Houses_NPC6_Text_3:
# 66 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Oh wow! This is perfect! Which egg is it?\p"
	.string "...\p"
	.string "No, don't tell us! It doesn't matter\n"
	.string "what Pokémon it is. We'll treat it like\l"
	.string "our third sibling!\p"
	.string "Thank you so much!\p"
	.string "...\p"
	.string "Um. We want to give you something...but\n"
	.string "we don't have anything.\p"
	.string "I bet you're an adult so you find cards\n"
	.string "boring, but we've got this extra Red\l"
	.string "Card. Will you take this?$"

RivetshoreCity_Houses_NPC6_Text_4:
# 73 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "We need a Pokémon Egg or else Grandma\n"
	.string "will find out!$"

RivetshoreCity_Houses_NPC6_Text_5:
# 80 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Sigh...$"

RivetshoreCity_Houses_NPC6_Text_6:
# 87 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "I wish we could get Pokémon and\n"
	.string "challenge Raazi!\p"
	.string "...\p"
	.string "Hey, you're a trainer! I bet you could\n"
	.string "get us a Pokémon!\p"
	.string "Will you bring us a Pokémon?$"

RivetshoreCity_Houses_NPC6_Text_7:
# 89 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Yay! Just one Pokémon is fine - we'll\n"
	.string "raise it together! But it can't be a big\l"
	.string "one or Grandma will find out. Can you\l"
	.string "bring a Pokémon Egg?$"

RivetshoreCity_Houses_NPC6_Text_8:
# 95 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "Sigh...adults are so lame.\n"
	.string "C'mon bro, shuffle the deck.$"

RivetshoreCity_Houses_NPC7_Text_0:
# 103 "data//maps/RivetshoreCity_Houses/scripts.pory"
	.string "My grandchildren will make fine doctors\n"
	.string "and lawyers one day!\p"
	.string "I don't want them to turn out like you,\n"
	.string "trainer.$"
