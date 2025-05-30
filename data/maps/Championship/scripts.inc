Championship_MapScripts::
	.byte 0


VictoryCape_NPC1::
# 6 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC2::
# 10 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC3::
# 14 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC4::
# 18 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC5::
# 22 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC6::
# 26 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC7::
# 30 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC8::
# 34 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_Viniel::
# 40 "data//maps/Championship/scripts.pory"
	lockall
# 41 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Viniel_Text_0
# 42 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Manectric::
# 46 "data//maps/Championship/scripts.pory"
	lockall
# 47 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
# 48 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Manectric_Text_0
# 49 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Viniel_Kids::
# 53 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Viniel_Kids_Text_0, MSGBOX_NPC
	end


VictoryCape_Viniel_Parent::
# 57 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Viniel_Parent_Text_0, MSGBOX_NPC
	end


VictoryCape_Gab::
# 65 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC1_Text_0:
# 6 "data//maps/Championship/scripts.pory"
	.string "$"

VictoryCape_Viniel_Text_0:
# 41 "data//maps/Championship/scripts.pory"
	.string "Think you rugrats are stronger than a\n"
	.string "Gym Leader? Manectric and I can take\l"
	.string "all four of you together! Hahaha!$"

VictoryCape_Manectric_Text_0:
# 48 "data//maps/Championship/scripts.pory"
	.string "Manectric is playing with the children!$"

VictoryCape_Viniel_Kids_Text_0:
# 53 "data//maps/Championship/scripts.pory"
	.string "Leader Viniel is so cool!\n"
	.string "I wanna be just like him!$"

VictoryCape_Viniel_Parent_Text_0:
# 57 "data//maps/Championship/scripts.pory"
	.string "It's really kind of a superstar like\n"
	.string "Viniel to spend time with our children.\l"
	.string "He's a great role model.$"
