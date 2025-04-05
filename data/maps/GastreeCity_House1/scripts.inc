GastreeCity_House1_MapScripts::
	.byte 0


GastreeCity_House1_NPC1::
# 4 "data//maps/GastreeCity_House1/scripts.pory"
	lockall
# 5 "data//maps/GastreeCity_House1/scripts.pory"
	faceplayer
# 6 "data//maps/GastreeCity_House1/scripts.pory"
	msgbox GastreeCity_House1_NPC1_Text_0
# 7 "data//maps/GastreeCity_House1/scripts.pory"
	release
	return


GastreeCity_House1_Buneary::
# 11 "data//maps/GastreeCity_House1/scripts.pory"
	lockall
# 12 "data//maps/GastreeCity_House1/scripts.pory"
	faceplayer
# 13 "data//maps/GastreeCity_House1/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 15 "data//maps/GastreeCity_House1/scripts.pory"
	goto_if_set FLAG_GASTREE_HOUSE1_BUNEARY, GastreeCity_House1_Buneary_1
# 18 "data//maps/GastreeCity_House1/scripts.pory"
	msgbox GastreeCity_House1_Buneary_Text_1
# 19 "data//maps/GastreeCity_House1/scripts.pory"
	giveitem ITEM_CHARTI_BERRY, 2
# 20 "data//maps/GastreeCity_House1/scripts.pory"
	setflag FLAG_GASTREE_HOUSE1_BUNEARY
	return

GastreeCity_House1_Buneary_1:
# 16 "data//maps/GastreeCity_House1/scripts.pory"
	msgbox GastreeCity_House1_Buneary_Text_0
	return


GastreeCity_House1_NPC1_Text_0:
# 6 "data//maps/GastreeCity_House1/scripts.pory"
	.string "Gastree City sits on hilly terrain,\n"
	.string "connecting the hill stations of\l"
	.string "Fennilahl Town and Carabrue Town to the\l"
	.string "east and Mt. Ceram to the north. Lovely\l"
	.string "weather for me and BUNEARY!$"

GastreeCity_House1_Buneary_Text_0:
# 16 "data//maps/GastreeCity_House1/scripts.pory"
	.string "BUNEARY looks curiously at your {PKMN}...$"

GastreeCity_House1_Buneary_Text_1:
# 18 "data//maps/GastreeCity_House1/scripts.pory"
	.string "BUNEARY looks curiously at your {PKMN}...it\n"
	.string "hands you something!$"
