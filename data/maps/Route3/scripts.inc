Route3_MapScripts::
	.byte 0


Route3_TrainerBattle_Kim::
# 5 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_KIM, Route3_TrainerBattle_Kim_Text_0, Route3_TrainerBattle_Kim_Text_1
# 6 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Kim_Text_2
# 7 "data//maps/Route3/scripts.pory"
	release
	end


Route3_TrainerBattle_Ronnie::
# 14 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_RONNIE, Route3_TrainerBattle_Ronnie_Text_0, Route3_TrainerBattle_Ronnie_Text_1
# 15 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Ronnie_Text_2
# 16 "data//maps/Route3/scripts.pory"
	release
	end


Route3_TrainerBattle_Jana::
# 23 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_JANA, Route3_TrainerBattle_Jana_Text_0, Route3_TrainerBattle_Jana_Text_1
# 24 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Jana_Text_2
# 25 "data//maps/Route3/scripts.pory"
	release
	end


Route3_TrainerBattle_Chara::
# 32 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_CHARA, Route3_TrainerBattle_Chara_Text_0, Route3_TrainerBattle_Chara_Text_1
# 33 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Chara_Text_2
# 34 "data//maps/Route3/scripts.pory"
	release
	end


Route3_NPC1::
# 50 "data//maps/Route3/scripts.pory"
	lockall
# 51 "data//maps/Route3/scripts.pory"
	faceplayer
# 52 "data//maps/Route3/scripts.pory"
	msgbox Route3_NPC1_Text_0
# 53 "data//maps/Route3/scripts.pory"
	releaseall
	return


Route3_NPC2::
# 57 "data//maps/Route3/scripts.pory"
	lockall
# 58 "data//maps/Route3/scripts.pory"
	faceplayer
# 59 "data//maps/Route3/scripts.pory"
	msgbox Route3_NPC2_Text_0
# 60 "data//maps/Route3/scripts.pory"
	releaseall
	return


Route3_TrainerBattle_Kim_Text_0:
# 5 "data//maps/Route3/scripts.pory"
	.string "I'm much tougher than I look. I'm from\n"
	.string "the hills after all!$"

Route3_TrainerBattle_Kim_Text_1:
# 5 "data//maps/Route3/scripts.pory"
	.string "You're from the hills too?$"

Route3_TrainerBattle_Kim_Text_2:
# 6 "data//maps/Route3/scripts.pory"
	.string "I'm tough but hungry too. Maybe I\n"
	.string "should go home and eat.$"

Route3_TrainerBattle_Ronnie_Text_0:
# 14 "data//maps/Route3/scripts.pory"
	.string "I'm on my way to GASTREE CITY to\n"
	.string "challenge the {PKMN} Gym there. Let me\l"
	.string "practice with you!$"

Route3_TrainerBattle_Ronnie_Text_1:
# 14 "data//maps/Route3/scripts.pory"
	.string "Looks like I need more practice!$"

Route3_TrainerBattle_Ronnie_Text_2:
# 15 "data//maps/Route3/scripts.pory"
	.string "I heard that the GASTREE CITY Gym\n"
	.string "Leader uses FIRE type {PKMN}.$"

Route3_TrainerBattle_Jana_Text_0:
# 23 "data//maps/Route3/scripts.pory"
	.string "I'm a {PKMN} Breeder! I spend my time\n"
	.string "training my {PKMN} with love and care.$"

Route3_TrainerBattle_Jana_Text_1:
# 23 "data//maps/Route3/scripts.pory"
	.string "More love! More care!$"

Route3_TrainerBattle_Jana_Text_2:
# 24 "data//maps/Route3/scripts.pory"
	.string "My {PKMN} are my most cherised partners!$"

Route3_TrainerBattle_Chara_Text_0:
# 32 "data//maps/Route3/scripts.pory"
	.string "Whew! Route 3 was long, but I can do one\n"
	.string "last battle!$"

Route3_TrainerBattle_Chara_Text_1:
# 32 "data//maps/Route3/scripts.pory"
	.string "Aw I lost!$"

Route3_TrainerBattle_Chara_Text_2:
# 33 "data//maps/Route3/scripts.pory"
	.string "My {PKMN} and I are all out of energy.$"

Route3_NPC1_Text_0:
# 52 "data//maps/Route3/scripts.pory"
	.string "I love the high-altitude winds! I feel\n"
	.string "one with the hills.$"

Route3_NPC2_Text_0:
# 59 "data//maps/Route3/scripts.pory"
	.string "I was supposed to go to a marathon, but\n"
	.string "I don't think this is where it starts.$"
