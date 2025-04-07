GastreeCity_House3_MapScripts::
	.byte 0


GastreeCity_House3_NPC1::
# 4 "data//maps/GastreeCity_House3/scripts.pory"
	lockall
# 5 "data//maps/GastreeCity_House3/scripts.pory"
	faceplayer
# 6 "data//maps/GastreeCity_House3/scripts.pory"
	msgbox GastreeCity_House3_NPC1_Text_0
# 7 "data//maps/GastreeCity_House3/scripts.pory"
	release
	return


GastreeCity_House3_NPC1_Text_0:
# 6 "data//maps/GastreeCity_House3/scripts.pory"
	.string "The big news of the week is Professor\n"
	.string "Tenebris disappearing. She gave my son\l"
	.string "his first Pokemon - a KECLEON!\p"
	.string "...\p"
	.string "Since his mother left, he's been outside\n"
	.string "all day, training with KECLEON.$"
