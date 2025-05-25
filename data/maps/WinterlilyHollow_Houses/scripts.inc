WinterlilyHollow_Houses_MapScripts::
	.byte 0


WinterlilyHollow_Houses_NPC1::
# 5 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_NPC1_Text_0, MSGBOX_NPC
	end


WinterlilyHollow_Houses_Graveler::
# 9 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	playmoncry SPECIES_GRAVELER_ALOLA, CRY_MODE_NORMAL
# 10 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_Graveler_Text_0, MSGBOX_NPC
	end


WinterlilyHollow_Houses_NPC2::
# 16 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_NPC2_Text_0, MSGBOX_NPC
	end


WinterlilyHollow_Houses_NPC3::
# 21 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_NPC3_Text_0, MSGBOX_NPC
# 22 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	release
# 23 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	showmoneybox 0, 0
# 24 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_NPC3_Text_1, MSGBOX_YESNO
# 25 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_Houses_NPC3_2
# 31 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	hidemoneybox
# 32 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_NPC3_Text_2, MSGBOX_NPC
WinterlilyHollow_Houses_NPC3_1:
	end

WinterlilyHollow_Houses_NPC3_2:
# 26 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	hidemoneybox
# 27 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	giveitem ITEM_CELL_BATTERY
# 28 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	removemoney 200
# 29 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_NPC3_Text_2, MSGBOX_NPC
	goto WinterlilyHollow_Houses_NPC3_1


WinterlilyHollow_Houses_NPC4::
# 38 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_NPC4_Text_0, MSGBOX_NPC
	end


WinterlilyHollow_Houses_Carkol::
# 42 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	playmoncry SPECIES_CARKOL, CRY_MODE_NORMAL
# 43 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_Carkol_Text_0, MSGBOX_NPC
	end


WinterlilyHollow_Houses_NPC1_Text_0:
# 5 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Graveler and I used to work for\n"
	.string "Rivetshore Construction.\p"
	.string "We helped build the hollow a long time\n"
	.string "ago and never went back.$"

WinterlilyHollow_Houses_Graveler_Text_0:
# 10 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Graveler is crunching on rocks!$"

WinterlilyHollow_Houses_NPC2_Text_0:
# 16 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "My husband's trying to get me a job at\n"
	.string "the power plant, but I don't have the\l"
	.string "credentials, so I've joined a course.$"

WinterlilyHollow_Houses_NPC3_Text_0:
# 21 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "I'm off-duty right now, but I work in\n"
	.string "the underground power plant.\p"
	.string "We store the electricity from Viniel's\n"
	.string "Pokémon in these Cell Batteries.$"

WinterlilyHollow_Houses_NPC3_Text_1:
# 24 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Do you want one? It'll cost you 200.$"

WinterlilyHollow_Houses_NPC3_Text_2:
# 29 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Come again if you want any!$"

WinterlilyHollow_Houses_NPC4_Text_0:
# 38 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Without Carkol, I'd never survive in\n"
	.string "such a cold place!$"

WinterlilyHollow_Houses_Carkol_Text_0:
# 43 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Carkol is steaming! The cold seems not\n"
	.string "to affect it at all.$"
