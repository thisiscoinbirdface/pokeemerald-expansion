GastreeCity_House1_MapScripts::
	.byte 0


GastreeCity_House1_NPC1::
# 4 "data//maps/GastreeCity_House1/scripts.pory"
	msgbox GastreeCity_House1_NPC1_Text_0, MSGBOX_NPC
	end


GastreeCity_House1_Buneary::
# 9 "data//maps/GastreeCity_House1/scripts.pory"
	goto_if_set FLAG_GASTREE_HOUSE1_BUNEARY, GastreeCity_House1_Buneary_1
# 14 "data//maps/GastreeCity_House1/scripts.pory"
	lockall
# 15 "data//maps/GastreeCity_House1/scripts.pory"
	faceplayer
# 16 "data//maps/GastreeCity_House1/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 17 "data//maps/GastreeCity_House1/scripts.pory"
	msgbox GastreeCity_House1_Buneary_Text_1
# 18 "data//maps/GastreeCity_House1/scripts.pory"
	giveitem ITEM_CHARTI_BERRY, 3
# 19 "data//maps/GastreeCity_House1/scripts.pory"
	setflag FLAG_GASTREE_HOUSE1_BUNEARY
# 20 "data//maps/GastreeCity_House1/scripts.pory"
	releaseall
	end

GastreeCity_House1_Buneary_1:
# 10 "data//maps/GastreeCity_House1/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 11 "data//maps/GastreeCity_House1/scripts.pory"
	msgbox GastreeCity_House1_Buneary_Text_0, MSGBOX_NPC
	end


GastreeCity_House1_NPC1_Text_0:
# 4 "data//maps/GastreeCity_House1/scripts.pory"
	.string "Gastree City sits on hilly terrain,\n"
	.string "connecting the hill stations of\l"
	.string "Fennilahl Town and Carabrue Town to the\l"
	.string "east and Mt. Ceram to the north.\p"
	.string "Lovely weather for me and Buneary!$"

GastreeCity_House1_Buneary_Text_0:
# 11 "data//maps/GastreeCity_House1/scripts.pory"
	.string "Buneary looks curiously at your\n"
	.string "Pokémon...$"

GastreeCity_House1_Buneary_Text_1:
# 17 "data//maps/GastreeCity_House1/scripts.pory"
	.string "Buneary looks curiously at your\n"
	.string "Pokémon...it hands you something!$"
