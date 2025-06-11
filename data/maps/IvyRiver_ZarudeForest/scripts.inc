IvyRiver_ZarudeForest_MapScripts::
	.byte 0


IvyRiver_Zarude_Note1::
# 15 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_Note1_Text_0, MSGBOX_YESNO
# 16 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	release
# 17 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Zarude_Note1_2
IvyRiver_Zarude_Note1_1:
# 22 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	releaseall
	end

IvyRiver_Zarude_Note1_2:
# 18 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_NOTE1
# 19 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	removeobject 6
# 20 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	call IvyRiver_Zarude_ReadNote
	goto IvyRiver_Zarude_Note1_1


IvyRiver_Zarude_Note2::
# 27 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_Note1_Text_0, MSGBOX_YESNO
# 28 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	release
# 29 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Zarude_Note2_2
IvyRiver_Zarude_Note2_1:
# 34 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	releaseall
	end

IvyRiver_Zarude_Note2_2:
# 30 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_NOTE2
# 31 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	removeobject 5
# 32 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	call IvyRiver_Zarude_ReadNote
	goto IvyRiver_Zarude_Note2_1


IvyRiver_Zarude_Note3::
# 39 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_Note3_Text_0, MSGBOX_YESNO
# 40 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	release
# 41 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Zarude_Note3_2
IvyRiver_Zarude_Note3_1:
# 52 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	releaseall
	end

IvyRiver_Zarude_Note3_2:
# 42 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	call IvyRiver_Zarude_ReadNote
# 44 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_Note3_Text_1, MSGBOX_YESNO
# 45 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Zarude_Note3_4
	goto IvyRiver_Zarude_Note3_1

IvyRiver_Zarude_Note3_4:
# 46 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	giveitem ITEM_PURPLE_SCARF
# 47 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	removeobject 4
# 48 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setflag FLAG_IVYRIVER_ZARUDE_SCARF
	goto IvyRiver_Zarude_Note3_1


IvyRiver_Zarude_ReadNote::
# 58 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_ZARUDE_NOTES, 2
	goto_if_eq IvyRiver_Zarude_ReadNote_2
IvyRiver_Zarude_ReadNote_1:
# 62 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_ZARUDE_NOTES, 1
	goto_if_eq IvyRiver_Zarude_ReadNote_5
IvyRiver_Zarude_ReadNote_4:
# 66 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_ZARUDE_NOTES, 0
	goto_if_eq IvyRiver_Zarude_ReadNote_8
IvyRiver_Zarude_ReadNote_7:
	return

IvyRiver_Zarude_ReadNote_2:
# 59 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setvar VAR_ZARUDE_NOTES, 3
# 60 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_ReadNote_Text_0
	goto IvyRiver_Zarude_ReadNote_1

IvyRiver_Zarude_ReadNote_5:
# 63 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setvar VAR_ZARUDE_NOTES, 2
# 64 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_ReadNote_Text_1
	goto IvyRiver_Zarude_ReadNote_4

IvyRiver_Zarude_ReadNote_8:
# 67 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setvar VAR_ZARUDE_NOTES, 1
# 68 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_ReadNote_Text_2
	goto IvyRiver_Zarude_ReadNote_7


IvyRiver_Zarude_SaveTrigger::
# 78 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_ZARUDE_NOTES, 3
	goto_if_gt IvyRiver_Zarude_SaveTrigger_2
# 80 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	goto_if_set FLAG_IVYRIVER_ZARUDE_SCARF, IvyRiver_Zarude_SaveTrigger_4
	return

IvyRiver_Zarude_SaveTrigger_2:
	end

IvyRiver_Zarude_SaveTrigger_4:
# 81 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setvar VAR_TEMP_0, 1
# 82 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 83 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	releaseall
	end


IvyRiver_Zarude_LegendaryTrigger1::
# 89 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_ZARUDE_NOTES, 3
	goto_if_gt IvyRiver_Zarude_LegendaryTrigger1_2
# 91 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	goto_if_set FLAG_IVYRIVER_ZARUDE_SCARF, IvyRiver_Zarude_LegendaryTrigger1_4
	return

IvyRiver_Zarude_LegendaryTrigger1_2:
	end

IvyRiver_Zarude_LegendaryTrigger1_4:
# 92 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	lockall
# 93 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 94 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	waitmoncry
# 95 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	delay 8
# 96 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_LegendaryTrigger1_Text_0
# 97 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	release
# 99 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	addobject 1
# 100 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setobjectxy 1, 62, 49
# 101 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	applymovement 1, IvyRiver_Zarude_LegendaryTrigger1_Movement_0
# 102 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	waitmovement 0
# 104 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	goto IvyRiver_Zarude_Legendary
	return


IvyRiver_Zarude_LegendaryTrigger2::
# 109 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_ZARUDE_NOTES, 3
	goto_if_gt IvyRiver_Zarude_LegendaryTrigger2_2
# 111 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	goto_if_set FLAG_IVYRIVER_ZARUDE_SCARF, IvyRiver_Zarude_LegendaryTrigger2_4
	return

IvyRiver_Zarude_LegendaryTrigger2_2:
	end

IvyRiver_Zarude_LegendaryTrigger2_4:
# 112 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	lockall
# 113 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 114 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	waitmoncry
# 115 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	delay 8
# 116 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_LegendaryTrigger1_Text_0
# 117 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	release
# 119 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	addobject 1
# 120 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setobjectxy 1, 63, 49
# 121 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	applymovement 1, IvyRiver_Zarude_LegendaryTrigger1_Movement_0
# 122 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	waitmovement 0
# 124 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	goto IvyRiver_Zarude_Legendary
# 126 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	releaseall
	end


IvyRiver_Zarude_LegendaryTrigger3::
# 132 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	compare VAR_ZARUDE_NOTES, 3
	goto_if_gt IvyRiver_Zarude_LegendaryTrigger3_2
# 134 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	goto_if_set FLAG_IVYRIVER_ZARUDE_SCARF, IvyRiver_Zarude_LegendaryTrigger3_4
	return

IvyRiver_Zarude_LegendaryTrigger3_2:
	end

IvyRiver_Zarude_LegendaryTrigger3_4:
# 135 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	lockall
# 136 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	playmoncry SPECIES_ZARUDE_DADA, CRY_MODE_NORMAL
# 137 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	waitmoncry
# 138 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	delay 8
# 139 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_LegendaryTrigger1_Text_0
# 140 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	release
# 142 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	addobject 1
# 143 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setobjectxy 1, 64, 49
# 144 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	applymovement 1, IvyRiver_Zarude_LegendaryTrigger1_Movement_0
# 145 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	waitmovement 0
# 147 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	goto IvyRiver_Zarude_Legendary
# 149 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	releaseall
	end


IvyRiver_Zarude_Legendary::
# 156 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	msgbox IvyRiver_Zarude_Legendary_Text_0
# 157 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	release
# 158 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setflag FLAG_ZARUDE
# 159 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setvar VAR_ZARUDE_NOTES, 4
# 161 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	setwildbattle SPECIES_ZARUDE_DADA, 40
# 162 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	dowildbattle
# 163 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	removeobject 1
	return


# 101 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
IvyRiver_Zarude_LegendaryTrigger1_Movement_0:
# 101 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	jump_2_down
# 101 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	jump_2_down
	step_end

IvyRiver_Zarude_Note1_Text_0:
# 15 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	.string "It's a piece of paper!\n"
	.string "There's a note here...read it?$"

IvyRiver_Zarude_Note3_Text_0:
# 39 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	.string "It's a cloth scarf!\n"
	.string "There's a note here...read it?$"

IvyRiver_Zarude_Note3_Text_1:
# 44 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	.string "Take the cloth scarf?$"

IvyRiver_Zarude_ReadNote_Text_0:
# 60 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	.string "Dear brothers...\n"
	.string "I hope you read this one day.\p"
	.string "It hurts all over...Zari's trying hard,\n"
	.string "feeding me berries, but it's not working.\l"
	.string "I fear I dont have much time left.\l"
	.string "If you ever read this...\p"
	.string "...I love you.$"

IvyRiver_Zarude_ReadNote_Text_1:
# 64 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	.string "Dear brothers...\n"
	.string "I hope you read this one day.\p"
	.string "I've been saved - a strange Pokémon\n"
	.string "found me and is taking care of me.\l"
	.string "I don't know its name. I call it Zari.\l"
	.string "Zari left its pack to help me.\l"
	.string "I'm grateful to it. Hopefully I can make\l"
	.string "it back to you someday.$"

IvyRiver_Zarude_ReadNote_Text_2:
# 68 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	.string "Dear brothers...\n"
	.string "I hope you read this one day.\p"
	.string "I've been lost in these woods for weeks\n"
	.string "now. I'm starving and I don't know how\l"
	.string "much longer I can go on...$"

IvyRiver_Zarude_LegendaryTrigger1_Text_0:
# 96 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	.string "What was that?$"

IvyRiver_Zarude_Legendary_Text_0:
# 156 "data//maps/IvyRiver_ZarudeForest/scripts.pory"
	.string "The wild Pokémon snatches away\n"
	.string "the Purple Scarf and attacks!$"
