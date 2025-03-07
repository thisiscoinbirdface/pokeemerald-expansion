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


Route3_TrainerBattle_Kim_Text_0:
# 5 "data//maps/Route3/scripts.pory"
	.string "I'm much tougher than I look.\pI'm from the hills after all!$"

Route3_TrainerBattle_Kim_Text_1:
# 5 "data//maps/Route3/scripts.pory"
	.string "You're from the hills too?$"

Route3_TrainerBattle_Kim_Text_2:
# 6 "data//maps/Route3/scripts.pory"
	.string "I'm tough but hungry too. Maybe I\n"
	.string "should go home and eat.$"

Route3_TrainerBattle_Ronnie_Text_0:
# 14 "data//maps/Route3/scripts.pory"
	.string "I'm on my way to GASTREE CITY to\nchallenge the {PKMN} Gym there.\pLet me practice with you!$"

Route3_TrainerBattle_Ronnie_Text_1:
# 14 "data//maps/Route3/scripts.pory"
	.string "Looks like I need more practice!$"

Route3_TrainerBattle_Ronnie_Text_2:
# 15 "data//maps/Route3/scripts.pory"
	.string "I heard that the GASTREE CITY Gym\n"
	.string "Leader uses FIRE type {PKMN}.$"

Route3_TrainerBattle_Jana_Text_0:
# 23 "data//maps/Route3/scripts.pory"
	.string "I'm a {PKMN} Breeder! I spend my time\ptraining my {PKMN} with love and care.$"

Route3_TrainerBattle_Jana_Text_1:
# 23 "data//maps/Route3/scripts.pory"
	.string "More love! More care!$"

Route3_TrainerBattle_Jana_Text_2:
# 24 "data//maps/Route3/scripts.pory"
	.string "My {PKMN} are my most cherised partners!$"

Route3_TrainerBattle_Chara_Text_0:
# 32 "data//maps/Route3/scripts.pory"
	.string "Whew! Route 3 was long, but\pI can do one last battle!$"

Route3_TrainerBattle_Chara_Text_1:
# 32 "data//maps/Route3/scripts.pory"
	.string "Aw I lost!$"

Route3_TrainerBattle_Chara_Text_2:
# 33 "data//maps/Route3/scripts.pory"
	.string "My {PKMN} and I are all out of energy.$"
