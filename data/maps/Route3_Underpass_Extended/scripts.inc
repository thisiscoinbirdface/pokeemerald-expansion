Route3_Underpass_Extended_MapScripts::
	.byte 0


Route3_Ext_NPC1::
# 4 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_NPC1_Text_0, MSGBOX_NPC
	end


Route3_Ext_Trainer_A::
# 9 "data//maps/Route3_Underpass_Extended/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_EXT_C, Route3_Ext_Trainer_A_Text_0, Route3_Ext_Trainer_A_Text_1
# 10 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Trainer_A_Text_2
	return


Route3_Ext_NPC1_Text_0:
# 4 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "They say there's a rare Pokemon that\n"
	.string "makes its home down here, but I can't\l"
	.string "find it! Did I come to the wrong place?$"

Route3_Ext_Trainer_A_Text_0:
# 9 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "Hoho! Fancy seeing another explorer!\n"
	.string "But you won't take any of my spoils!$"

Route3_Ext_Trainer_A_Text_1:
# 9 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "I didn't want to explore this!$"

Route3_Ext_Trainer_A_Text_2:
# 10 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "I wonder what secrets lie in these\n"
	.string "caverns...$"
