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
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 43 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_Carkol_Text_0, MSGBOX_NPC
# 44 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	goto_if_set FLAG_HOLLOW_ARMOR_GET, WinterlilyHollow_Houses_Carkol_2
# 45 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	goto WinterlilyHollow_Houses_Armarouge_Reward
	return

WinterlilyHollow_Houses_Carkol_2:
	end


WinterlilyHollow_Houses_Armarouge_Reward::
# 49 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	lockall
# 50 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	message WinterlilyHollow_Houses_Armarouge_Reward_Text_0
# 51 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	waitmessage
# 52 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WinterlilyHollow_Houses_Armarouge_Reward_Text_1, WinterlilyHollow_Houses_Armarouge_Reward_Text_2
# 53 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_Houses_Armarouge_Reward_2
WinterlilyHollow_Houses_Armarouge_Reward_1:
# 54 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_Houses_Armarouge_Reward_5
WinterlilyHollow_Houses_Armarouge_Reward_4:
# 55 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	goto WinterlilyHollow_Houses_Armarouge_Reward_Give
	return

WinterlilyHollow_Houses_Armarouge_Reward_2:
# 53 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	setvar VAR_0x8006, ITEM_MALICIOUS_ARMOR
	goto WinterlilyHollow_Houses_Armarouge_Reward_1

WinterlilyHollow_Houses_Armarouge_Reward_5:
# 54 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	setvar VAR_0x8006, ITEM_AUSPICIOUS_ARMOR
	goto WinterlilyHollow_Houses_Armarouge_Reward_4


WinterlilyHollow_Houses_Armarouge_Reward_Give::
# 59 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	showitemdescription
# 60 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_Armarouge_Reward_Give_Text_0, MSGBOX_YESNO
# 61 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	hideitemdescription
# 62 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_Houses_Armarouge_Reward_Give_1
# 63 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	goto WinterlilyHollow_Houses_Armarouge_Reward
	return

WinterlilyHollow_Houses_Armarouge_Reward_Give_1:
# 62 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	giveitem VAR_0x8006
# 62 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	goto WinterlilyHollow_Houses_Armarouge_Reward_End
	return


WinterlilyHollow_Houses_Armarouge_Reward_End::
# 67 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	setflag FLAG_HOLLOW_ARMOR_GET
# 68 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	msgbox WinterlilyHollow_Houses_Armarouge_Reward_End_Text_0, MSGBOX_NPC
# 69 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	releaseall
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
	.string "I'm a retired detective. After a life of\n"
	.string "crime-fighting, I think I've earned the\l"
	.string "right to a peaceful retirement!$"

WinterlilyHollow_Houses_Carkol_Text_0:
# 43 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Armarouge is tired...carrying all that\n"
	.string "armor must be exhausing$"

WinterlilyHollow_Houses_Armarouge_Reward_Text_0:
# 50 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "It hands you two sets of armor...$"

WinterlilyHollow_Houses_Armarouge_Reward_Text_1:
# 52 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Malicious Armor$"

WinterlilyHollow_Houses_Armarouge_Reward_Text_2:
# 52 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Auspicious Armor$"

WinterlilyHollow_Houses_Armarouge_Reward_Give_Text_0:
# 60 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Are you sure?$"

WinterlilyHollow_Houses_Armarouge_Reward_End_Text_0:
# 68 "data//maps/WinterlilyHollow_Houses/scripts.pory"
	.string "Armarouge has decided to peacefully\n"
	.string "retire too!$"
