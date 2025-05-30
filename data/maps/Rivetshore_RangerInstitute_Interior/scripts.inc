Rivetshore_RangerInstitute_Interior_MapScripts::
	.byte 0


Rivetshore_RangerInstitute_NPC_Trade::
# 6 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	goto_if_set FLAG_PELLUCA_RESTAURANT_TRADE, Rivetshore_RangerInstitute_NPC_Trade_2
# 12 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	lockall
# 13 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	faceplayer
# 14 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	showmonpic SPECIES_TOXEL, 1, 3
# 15 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	msgbox Rivetshore_RangerInstitute_NPC_Trade_Text_1
# 16 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	release
# 17 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	hidemonpic
# 18 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	delay 24
# 19 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	showmonpic SPECIES_HOUNDOUR, 1, 3
# 20 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	msgbox Rivetshore_RangerInstitute_NPC_Trade_Text_2, MSGBOX_YESNO
# 21 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	hidemonpic
# 22 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rivetshore_RangerInstitute_NPC_Trade_5
# 66 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	msgbox Rivetshore_RangerInstitute_NPC_Trade_Text_6, MSGBOX_NPC
Rivetshore_RangerInstitute_NPC_Trade_4:
	end

Rivetshore_RangerInstitute_NPC_Trade_2:
# 7 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	msgbox Rivetshore_RangerInstitute_NPC_Trade_Text_0, MSGBOX_NPC
	end

Rivetshore_RangerInstitute_NPC_Trade_5:
# 26 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MEOWTH
# 27 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 29 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 30 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 34 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	special ChoosePartyMon
# 35 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	waitstate
# 36 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 39 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rivetshore_RangerInstitute_NPC_Trade_9
# 45 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 46 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 47 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 48 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq Rivetshore_RangerInstitute_NPC_Trade_11
# 61 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	msgbox Rivetshore_RangerInstitute_NPC_Trade_Text_5, MSGBOX_NPC
	goto Rivetshore_RangerInstitute_NPC_Trade_4

Rivetshore_RangerInstitute_NPC_Trade_9:
# 40 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	msgbox Rivetshore_RangerInstitute_NPC_Trade_Text_3
# 41 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	releaseall
	end

Rivetshore_RangerInstitute_NPC_Trade_11:
# 50 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 51 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 52 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	special CreateInGameTradePokemon
# 53 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	special DoInGameTradeScene
# 54 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	waitstate
# 55 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	msgbox Rivetshore_RangerInstitute_NPC_Trade_Text_4
# 56 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	release
# 57 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	setflag FLAG_PELLUCA_RESTAURANT_TRADE
	goto Rivetshore_RangerInstitute_NPC_Trade_4


Rivetshore_RangerInstitute_NPC_Trade_Text_0:
# 7 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	.string "My sister will be so happy. She's always\n"
	.string "wanted her own Pokémon.$"

Rivetshore_RangerInstitute_NPC_Trade_Text_1:
# 15 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	.string "I've never been to Silversun City, but\n"
	.string "I've always wanted to go to catch a\l"
	.string "Toxel. Now I'm too old to travel so far.$"

Rivetshore_RangerInstitute_NPC_Trade_Text_2:
# 20 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	.string "If you have a Toxel, will you trade it\n"
	.string "for my Houndour?$"

Rivetshore_RangerInstitute_NPC_Trade_Text_3:
# 40 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	.string "If you have one, will you trade it for my\n"
	.string "Houndour?$"

Rivetshore_RangerInstitute_NPC_Trade_Text_4:
# 55 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	.string "Thank you! Please take good care of my\n"
	.string "Houndour.$"

Rivetshore_RangerInstitute_NPC_Trade_Text_5:
# 61 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	.string "Hey, this isn't a Toxel! I'm not stupid,\n"
	.string "you know?$"

Rivetshore_RangerInstitute_NPC_Trade_Text_6:
# 66 "data//maps/Rivetshore_RangerInstitute_Interior/scripts.pory"
	.string "Oh...well, if you change your mind, you\n"
	.string "know where I am!$"
